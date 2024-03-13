class Solution {
public:
    int pivotInteger(int n) {
        int total=(n*(n+1))/2;
        cout<<total<<endl;
        int i=1;
        int j=n;

        while(i <= j){
            int mid=i+(j-i)/2;
            cout<<mid<<" ";
            int val=(mid*(mid+1))/2;
            cout << val<<endl;

            if( val == total -  val + mid){
                return mid;
            }
            else if( val < total-val+mid){
                i=mid+1;
            }
            else{
                j=mid-1;
            }

        }

        return -1;
        
    }
};