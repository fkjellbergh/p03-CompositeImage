#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"

using namespace std;


        vector <string> createAlbum();
        vector <vector <vector <Pixel> > > createPixelMatrix(vector <string>);
        vector <vector <Pixel> >  createComposition(vector <vector <vector <Pixel> > >);

                        int main()
                        {
                        Bitmap image;
                        vector <string> photoAlbum;
                        vector <vector <vector <Pixel> > > depthPhoto;
                        vector <vector <Pixel> > compositeImage;
                        photoAlbum = createAlbum();
                        depthPhoto = createPixelMatrix(photoAlbum);
                        compositeImage = createComposition(depthPhoto);
                        image.fromPixelMatrix(compositeImage);
                        image.save("composite-fkjellberg.bmp");
                        return 0;
                        }

                        //Asks for user to input file names which they want to make composite image out of and checks that they are valid images
                        vector <string> createAlbum()
                        {
                        Bitmap image;
                        string imageFile;
                        vector <string> album;
                        bool validImage;
                        validImage = false;

                        do
                        {
                                cout<<"Add file."<<endl;
                                cin>>imageFile;
                               
                               
                                        //Opens image
                                        image.open(imageFile);
                                        //Verify file is image
                                        validImage = image.isImage();
                                        if(validImage == false)
                                        {
                                                cout<<"File is invalid. Please re-eneter file or enter new file."<<endl;
                                        }
                                
                                if(validImage == true)
                                {
                                        album.push_back(imageFile);
                                }
                        }while(imageFile != "Done" || imageFile != "DONE" || album.size() == 10);
                        return album;
                        }
                        //Takes album vecto and converts each filed image inside into a pixel matrix and stores them
                        vector <vector <vector  <Pixel> > > createPixelMatrix(vector <string> album)
                        {
                                        vector <vector <vector <Pixel> > > photoStructure;
                                        for(int row = 0; row < album.size(); row++)
                                        {
                                                Bitmap image;
                                                vector <vector <Pixel> > bmp;
                                                image.open(album[row]);
                                                bmp = image.toPixelMatrix();
                                                photoStructure.push_back(bmp);
                                        }
                        return photoStructure;
                        }
                        vector <vector <Pixel> > createComposition(vector <vector <vector <Pixel> > > photoStructure)
                        {
                                vector <vector <Pixel> > composite;
                                        int depth = photoStructure.size();
                                        int rows = photoStructure[0].size();
                                        int cols = photoStructure[0][0].size();
                                        composite.resize(rows);
                                        for(int r = 0; r < rows; r++)
                                        {
                                         composite[r].resize(cols);
                                        }
                                int totalRedDepth;
                                int totalBlueDepth;
                                int totalGreenDepth;
                                int redDepthAvg;
                                int greenDepthAvg;
                                int blueDepthAvg;
                                Pixel comprgb;
                                        for(int r = 0; r < rows; r++) 
                                        {
                                                for(int c = 0; c < cols; c++)
                                                {  totalRedDepth = 0;
                                                   totalGreenDepth = 0;
                                                   totalBlueDepth = 0;
                                                 
                                                                for(int d = 0; d < depth; d++)
                                                                { 
                                                                        Pixel rgbDepth = photoStructure[d][r][c];
                                                                        totalRedDepth = rgbDepth.red + totalRedDepth;
                                                                        totalGreenDepth = rgbDepth.green + totalGreenDepth;
                                                                        totalBlueDepth = rgbDepth.blue + totalBlueDepth;
                                                                }
                                                   redDepthAvg = totalRedDepth/depth;
                                                   greenDepthAvg = totalGreenDepth/depth;
                                                   blueDepthAvg = totalBlueDepth/depth;
                                                        
                                                   comprgb.red = redDepthAvg;
                                                   comprgb.green = greenDepthAvg;
                                                   comprgb.blue = blueDepthAvg;
                                                   composite[r][c] = comprgb;
                                                 }
                                                 

                                                }


                                        return composite;
                                        }

