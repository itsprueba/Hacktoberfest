public boolean wordBreak(String s, List<String> wordDict) {
        
        HashMap<String, Boolean> hm = new HashMap<>();
        return word(s, wordDict, hm);
    }
    
    public Boolean word(String s, List<String> wordDict, HashMap<String,Boolean> hm){
        if(hm.containsKey(s)) return hm.get(s);
        if(wordDict.contains(s)) return true;
        int index = 0;
        for(int i=1; i<s.length(); i++){
            String left = s.substring(0, i);
            if(wordDict.contains(left) && word(s.substring(i), wordDict, hm)){
                hm.put(s,true);
                return true;
            }
        }
        
        hm.put(s,false);
        return false;
    }
