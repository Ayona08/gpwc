#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
	VideoMode vm(1920,1080); // trying to run phase by phase
	
	RenderWindow window(vm,"Timber Man"); //Here, we can style it in fullsceen.Timber man will be written over the background
	
	View view(FloatRect(0,0,1920,1080));
	window.setView(view);
	
	Texture textureBackground;  //texture stores pixel value 
	
	textureBackground.loadFromFile("graphics/background.png"); //sprite is basically a sticker attaching pic on gaming window	
	
	Sprite spriteBackground; // Used for BG Img
	
	spriteBackground.setTexture(textureBackground);           //position setting of background
	
	spriteBackground.setPosition(0,0);
	
	Texture textureTree;                                          //
	
	textureTree.loadFromFile("graphics/tree.png");		       //	
	
	Sprite spriteTree;							 // Used for Tree. Sprite is an 2D image place over the Background.
	
	spriteTree.setTexture(textureTree);                           //
	
	spriteTree.setPosition(800,0);                                //
	
	Texture textureBee;                                          //
	
	textureBee.loadFromFile("graphics/bee.png");		   //	
	
	Sprite spriteBee;							   // Used for Bee Img
	
	spriteBee.setTexture(textureBee);                     //
	
	spriteBee.setPosition(0,800);						//
	
	bool BeeActive = false;
	float BeeSpeed = 0;
	
	Texture textureCloud;                                    //
	
	textureCloud.loadFromFile("graphics/cloud.png");		   //	
	
	Sprite spriteCloud1;							   // Used for cloud Img
	
	spriteCloud1.setTexture(textureCloud);                  //
	
	spriteCloud1.setPosition(0,50);
	
	spriteCloud1.setScale(0.75,0.75);
	
	Sprite spriteCloud2;						    	   // Used for cloud Img
	
	spriteCloud2.setTexture(textureCloud);                   //
	
	spriteCloud2.setPosition(0,150);
	
	spriteCloud1.setScale(0.89,0.89);

	Sprite spriteCloud3;							      // Used for cloud Img
	
	spriteCloud3.setTexture(textureCloud);                     //
	
	spriteCloud3.setPosition(0,250);
	
	bool CloudActive1 = false;
	bool CloudActive2 = false;
	bool CloudActive3 = false;
	float CloudSpeed1 = 0;
	float CloudSpeed2 = 0;
	float CloudSpeed3 = 0;
	
	
	Clock clock;
	
	while(window.isOpen())                                              //
	{                                                                   //   
		Event event;                                                   //
		while(window.pollEvent(event))                                 // 
		{                                                              // used to ensure that the window doesnt close before pressing close
			if(event.type == Event::Closed)                           //
			{                                                         //
				window.close();                                      // 
			}                                                         //
		}                                                              //for Closing the Window
		if(Keyboard::isKeyPressed(Keyboard::Escape))                 
		{
			window.close();
		}
		
		Time dt = clock.restart(); //reinitialize the time as 0
		
		if(!BeeActive)
		{
			srand((int)time(0));
			BeeSpeed=(rand() % 200)+200; //random speed between 200 - 400
			float height=(rand() % 500)+500; //random height between 500 - 1000
			spriteBee.setPosition(2000,height); //initializes bee position
			BeeActive = true; //triggers else condition to run
		}
		
		else
		{
			spriteBee.setPosition(spriteBee.getPosition().x - (BeeSpeed * dt.asSeconds()),spriteBee.getPosition().y); 
			//decreases X values for right to left movement with 60fps for example
			if(spriteBee.getPosition().x < 0)
			{
				BeeActive=false;	
			}
		}
		
		if(!CloudActive1)
		{
			srand((int)time(0));
			CloudSpeed1=(rand() % 100)+100; //random speed between 200 - 400
			spriteCloud1.setPosition(-800,50); //initializes bee position
			float height=(rand() % 50)+400; //random height between 500 - 1000
			CloudActive1 = true; //triggers else condition to run
		}
		
		else
		{
			spriteCloud1.setPosition(spriteCloud1.getPosition().x + (CloudSpeed1 * dt.asSeconds()),spriteCloud1.getPosition().y); 
			//decreases X values for left to right movement with 60fps for example
			if(spriteCloud1.getPosition().x > 1920 )
			{
				CloudActive1=false;	
			}
		}
		
		if(!CloudActive2)
		{
			srand((int)time(0));
			CloudSpeed2=(rand() % 200)+100; //random speed between 200 - 400
			spriteCloud2.setPosition(-1000,250); //initializes bee position
			float height=(rand() % 50)+400; //random height between 500 - 1000
			CloudActive2 = true; //triggers else condition to run
		}
		
		else
		{
			spriteCloud2.setPosition(spriteCloud2.getPosition().x + (CloudSpeed2 * dt.asSeconds()),spriteCloud2.getPosition().y); 
			//decreases X values for left to right movement with 60fps for example
			if(spriteCloud2.getPosition().x > 1920 )
			{
				CloudActive2=false;	
			}
		}
		
		if(!CloudActive3)
		{
			srand((int)time(0));
			CloudSpeed3=(rand() % 150)+100; //random speed between 200 - 400
			spriteCloud3.setPosition(-500,150); //initializes bee position
			float height=(rand() % 50)+400; //random height between 500 - 1000
			CloudActive3 = true; //triggers else condition to run
		}
		
		else
		{
			spriteCloud3.setPosition(spriteCloud3.getPosition().x + (CloudSpeed3 * dt.asSeconds()),spriteCloud3.getPosition().y); 
			//decreases X values for left to right movement with 60fps for example
			if(spriteCloud3.getPosition().x > 1920 )
			{
				CloudActive3=false;	
			}
		}
	
	window.clear();
	window.draw(spriteBackground);
	window.draw(spriteCloud1);
	window.draw(spriteCloud2);
	window.draw(spriteCloud3);
	window.draw(spriteTree);
	window.draw(spriteBee);
	window.display();
	}
	
	return 0;
}
