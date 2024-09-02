class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = flowerbed.size();
           if(n==0)
                return true;
            
        for(int  i= 0; i<l; i++){
         
         if(flowerbed[i]==0) {
            bool left_khaali = (i==0) || (flowerbed[i-1]==0);
            bool right_khaali = (i == l-1) || (flowerbed[i+1]==0);

            //ab jaha insert kran hai

            if(left_khaali && right_khaali){
                flowerbed [i]=1;
                n--;

                if (n==0)
                    return true;
                

            }

         }


        }
        return false;
        
    }
};