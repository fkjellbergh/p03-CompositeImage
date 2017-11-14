#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"

using namespace std;


        vector createAlbum(string).
vector <vector <Pixel> > bmp  createPixelMatrix(vector <string> album)
        vector <vector <Pixel> > composite createComposition(vector <vector <vector <Pixel> > > photoStructure

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
                        vector <vector <Pixel> > composite createComposition(vector <vector <vector <Pixel> > > photoStructure)
                        {
                                vector <vector <Pixel> > composite
                                        composite[photoStructure.size()]
                                        int totalRedCol;
                                int totalBlueCol;
                                int totalGreenCol;
                                int totalRedWidth;
                                int totalBlueWidth;
                                int totalGreenWidth;
                                int redColAvg;
                                int greenColAvg;
                                int blueColAvg;
                                int redWidthAvg;
                                int greenWidthAvg;
                                int blueWidthAvg;
                                Pixel comprgb
                                        for(int row = 0; row < photoStrucure.size(); row++)
                                        {
                                                for(int col = 0; col < photoStructure[row].size(); col++)
                                                {
                                                        {
                                                                for(int width = 0; width < photoStructure[row][col].size(); width++)
                                                                { 
                                                                        Pixel rgbWidth = photoStrucure[row][col][width];
                                                                        totalRedWidth = rgbWidth.red + totalRedWidth;
                                                                        totalGreenWidth = rgbWidth.green + totalGreenWidth;
                                                                        totalBlueWidth = rgbWidth.blue + totalBlueWidth;
                                                                }
                                                                redWidthAvg = totalRedWidth/photoStructure[row][col].size();
                                                                greenWidthAvg = totalGreenWidth/photoStructure[row][col].size();
                                                                blueWidthAvg = totalBlueWidth/photoStructure[row][col].size();
                                                        }
                                                        comprgb = composite{row}{col};
                                                        comprgb.red = redWidthAvg;
                                                        comprgb.green = greenWidthAvg;
                                                        comprgb.blue = blueWidthAvg;
                                                        composite[row][col] = comprgb;


                                                }
                                                Pixel rgbCol = photoStrucure[row][col];
                                                totalRedCol = rgbCol.red + totalRedCol;
                                                totalGreenCol = rgbCol.green + totalGreenCol;
                                                totalBlueCol = rgbCol.blue + totalBlueCol;
                                                redColAvg = totalRedCol/photoStructure{row}.size();
                                                greenColAvg = totalGreenCol/photoStructure
                                        }
                                        }
                        }
                        for(int row = 0; row < 









                                        return 0;
                                        }

