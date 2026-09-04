class Solution {
public:
    string predictPartyVictory(string senate) {
        
        queue<int> qD;
        queue<int> qR;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='D'){
                qD.push(i);
            }else if(senate[i]=='R'){
                qR.push(i);
            }
        }
        int last_index=senate.size()-1;
        int next_chance;
        while(!qD.empty() && !qR.empty()){
        if(qD.front()<qR.front()){
            next_chance=last_index+1;
            qD.push(next_chance);
            qR.pop();
            qD.pop();
            last_index=next_chance;
        }
        else if(qR.front()<qD.front()){
            next_chance=last_index+1;
            qR.push(next_chance);
            qD.pop();
            qR.pop();
            last_index=next_chance;
        }
        
        }  
        if(qD.empty()){
            return "Radiant";
        }
        else{
            return "Dire";
        }
    }
};