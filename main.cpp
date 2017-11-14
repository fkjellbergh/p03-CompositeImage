#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"

using namespace std;


vector <string> album  createAlbum(string)
vector <vector <Pixel> > bmp  createPixelMatrix(vector <string> album)


int main()
{

    createAlbum();
    createPixelMatrix();

return 0;
}

//Asks for user to input file names which they want to make composite image out of and checks that they are valid images
vector album createAlbum(string)
   {
       Bitmap image
       string imageFile;
       vector <string> album
        bool validImage;
        validImage = false;
        
        do
        {
         cout<<"What file would you like to add?"<<endl;
         cin>>imageFile;
        do
        {
                //Opens image
                image.open(imageFile);
                //Verify file is image
                validImage = image.isImage();
                if(validImage == false)
                {
                        cout<<"File is invalid. Please re-eneter file or enter new file."<<endl;
                }
        }while(validImage == false);
        if(validImage == true)
        {
         album.pushback() = imageFile;
        }
        }while(imageFile != "Done" || imageFile != "DONE");
//Takes album vecto and converts each filed image inside into a pixel matrix and stores them
vector <vector <vector  <Pixel> > > photoStructure createPixelMatrix(vector <string> album)
       {
       vector <vector <Pixel> > bmp
       vector <vector <vector <Pixel> > > photoStructure
       for(int row = 0; row < album.size(); row++)
          {
                bmp = album[row].toPixelMatrix();
                photoStructure[row] = bmp;
          }
       }









        return 0;
}

