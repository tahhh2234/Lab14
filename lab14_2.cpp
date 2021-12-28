#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool pic1[][M],int a,int b,int c){
    for(int u = 0; u < N; u++){
        for(int v = 0; v < M; v++){
            if(sqrt(pow(u-b,2)+pow(v-c,2))<=a-1){
            pic1[u][v] = 1;
            }
        }
    }
}


void showImage(const bool pic2[][M]){
    cout << "------------------------------------------------------------------------\n";
    for(int q = 0; q < N; q++){
        cout << '|';
        for(int r = 0; r < M; r++){
            if(pic2[q][r] == 0) cout << " ";
            if(pic2[q][r] == 1) cout << "*";
        }
        cout << '|' << endl;
    }
    cout << "------------------------------------------------------------------------" << endl;
}