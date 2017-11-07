#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"

using namespace std;


vector createAlbum(string image1, image2, imag3, image4, image5, image6, image7, image8, image9, image10)
void createPixelMatrix(vector <string> album)


int main()
{

    createAlbum();
    createPixelMatrix();

return 0;
}

//Asks for user to input file names which they want to make composite image out of and checks that they are valid images
vector album createAlbum(string)
   {
        vector <string> album
        bool validImage;
        validImage = false;
        
        do
        {
        for(int row = 0; row < album.size(); row++)
        {
                //Asks for a file
                cout<<"What file would you like to add?"<<endl;
                cin>>album.push_back();
                //Opens image
                album{row}.open(pixelPic);
                //Verify file is image
                validImage = album[row].isImage();
                if(validImage == false)
                {
                        cout<<"File is invalid. Please re-eneter file or enter new file."<<endl;
                }
        }
        } 
       while(validImage == false);
       }
//Takes album vecto and converts each filed image inside into a pixel matrix and stores them
void createPixelMatrix(vector <string> album)
       {
       for(int row = 0; row < album.size(); row++)
          {
                bmp = album[row].toPixelMatrix();
          }
          album[row].fromPixelMatrix(bmp);
       }









        return 0;
}

