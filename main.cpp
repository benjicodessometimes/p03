#include <iostream>
#include <vector>
#include "bitmap.h"
using namespace std;

const int MAXIMG = 10;

Pixel thisPicture(vector<vector<Pixel>> & currentimg);

int main()
{
  vector<vector<Pixel>>currentimg;
  int imgcount = 0;
  string imgname;
  while(imgcount<MAXIMG)
  {
    cout << "Enter ten bmp images or DONE" << endl;
    cin >> imgname;
    void open(imgname);//opens image in bitmap
    vector<vector<Pixel>>currentimg;
    Pixel thisPicture(vector<vector<Pixel>>currentimg);
    void save(thisPicture);//saves picture
    if(imgname == "done" || imgname == "DONE")
      imgcount = 10;
  }
  return 0;
}


Pixel thisPicture(vector<vector<Pixel>> & currentimg)
{
  if(currentimg.size()>0 && currentimg[0].size()>0) //makes sure both are images
    {
      if(currentimg.size() == currentimg[0].size()) //makes sure all pictures are the same size
      {
         for(int i =0; i < currentimg.size();i++)
         {
           for(int j =0;j<currentimg[i].size();j++)
           {
             thisPicture[i][j].red = (thisPicture[i][j].red + currentimg[i][j].red)/2; //averages all the rgb values for each pixel
             thisPicture[i][j].green = (thisPicture[i][j].green + currentimg[i][j].green)/2;
             thisPicture[i][j].blue = (thisPicture[i][j].blue + currentimg[i][j].blue)/2;
           }
        }
      }
    }
  return Pixel thisPicture;
}
