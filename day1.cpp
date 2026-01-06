// counting the dgits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;
    return 0;
}
// reversing the digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0;
    int rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;
    return 0;
}
// palindrome number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int num=n;
    int rem=0;
    int rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;
    if (rev==num){
        cout<<"palindrome";
    }
    else{
        cout<<"not plainrome";
    }    
    
    return 0;
}
// GCD of two numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    int n2;
    vector<int> v1;
    vector<int>v2;
    vector<int> common_elements;
    cin>>n1;
    cin>>n2;
    for(int i=1;i<=n1;i++){
        if(n1%i==0){
            v1.push_back(i);
        }
    }
     for(int j=1;j<=n2;j++){
        if(n2%j==0){
            v2.push_back(j);
        }
    }
    set_intersection(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        back_inserter(common_elements)
    );
     int mx = *max_element(common_elements.begin(), common_elements.end());
     cout<<"the gcd is"<<mx;

    
    
    return 0;
}
// Armstrong number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=n;
    int count=0;
    int dig=0;
    while(n>0){
        n=n/10;
        count++;
        
        
    }
    int sum=0;
    int num1=num;
    while(num>0){
        dig=num%10;
        sum=sum+pow(dig,count);
        num=num/10;
    }
    if(sum==num1){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

//patterns
*****
*****
*****
*****

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<=4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
 
    return 0;
}


*
**
***
****
*****
    
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
1
12
123
1234
12345
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
 
    return 0;
}

1
22
333
4444
55555
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    
 
    return 0;
}
*****
****
***
**
*
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=6-i;j!=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
 
    return 0;
}
12345
1234
123
12
1
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
 
    return 0;
}
    *
   ***
  *****
 *******
*********

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
 
    return 0;
}
*********
 *******
  *****
   ***
    *
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=5;i>0;i--){
        for(int j=5-i;j>0;j--){
            cout<<" ";
        }
        for(int j=2*i-1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
 
    return 0;
}
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=5;i>0;i--){
        for(int j=5-i;j>0;j--){
            cout<<" ";
        }
        for(int j=2*i-1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
 
    return 0;
}

*
**
***
****
*****
*****
****
***
**
*

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        {
        for(int j=1;j<=6-i;j++)
            cout<<"*";
        }
        cout<<endl;
    }
    
 
    return 0;
}
1
01
101
0101
10101

#include<bits/stdc++.h>
using namespace std;
int main(){
    int start;
    
    for(int i=1;i<=5;i++){
    if (i%2==0) start=0;
    else start =1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    
    return 0;
}
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=1;
    for(int i=1;i<=5;i++){
       
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
            }
            
        
        cout<<endl;
    }
    
    
 
    return 0;
}


   

    
    



