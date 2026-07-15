class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_k = 0;
        int max = piles[0];
        for(int i : piles){
            max = std::max(i, max);
        }

        // max_k = max / (h/piles.size());
        // std::cout<<max_k<<std::endl;
        
        return bs(piles, max, h);
    }

    int bs(vector<int>& piles, int maxk, int h){
        int l = 1;
        int r = maxk;
        int mid = 0;
        int k = maxk;

        while(l<=r){
            int temph = 0;
            mid = l + (r -l)/2;
            std::cout<<"mid"<<mid<<std::endl;
            for(int ban : piles){
                if(ban%mid != 0){
                    temph +=1;
                }
                temph += (ban/mid);
            }
            if(temph > h){
                l = mid +1;
            }else {
                r = mid -1;
                k = std::min(k,mid);
            }
        }

        return k;
    }


};
