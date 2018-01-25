// Dipta Barua

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

class Permutation
{
int No=1;
public:
    void permute(char str[],int inputStrLength, int count[], char result[], int depth)
    {
        if(depth==inputStrLength)
        {
            cout<<No<< ":  ";
            for(int i=0; i<inputStrLength; i++)
            {
                cout<< result[i];
                if(i==inputStrLength-1){
                    No++;
                }
            }
            cout<<endl;
            return;
        }
        for(int i = 0; i <inputStrLength; i++)
        {
            if(count[i] == 0);

            else
            {
                result[depth] = str[i];
                count[i]--;
                permute(str,inputStrLength, count, result, depth + 1);
                count[i]++;
            }
        }
    }

};

int main()
{
    string s;
    bool found=false;
    int m=0,k=0,p=0;
    char letter[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                     'A','B','C','D','E','F','G','F','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                     '.',',', '(', ')', '{', '}', '[', ']', '@', '#', '$', '%', '&', '*', '0', '1', '2', '3', '4', '5', '6', '7',
                     '8', '9' };
   int llength= 76;
    char str[100]= {0};
    int count[100]= {k};
    int check_char[100]= {0};

    cout<<"Enter a String: ";
    cin>>s;
    sort(s.begin(),s.end());
//   cout<<endl<<s;

    for(int i=0; i<llength; i++)
    {
        found=false;
        for(int j=0; j<s.length(); j++)
        {
            if(letter[i]==s[j])
            {
                found=true;
                count[m]+=1;
            }
        }
        if(found==true)
        {
            str[p++]=letter[i];
            count[m++];
        }
    }
    for(int i=0; i<m; i++)
    {
        //    cout<<" "<<count[i]<< " ";
    }
    for(int i=0; i<p; i++)
    {
        //   cout<<" "<<str[i]<< " ";
    }
    char result[sizeof(s)];
    Permutation obj;
    obj.permute(str,s.length(),count,result,0);

}
