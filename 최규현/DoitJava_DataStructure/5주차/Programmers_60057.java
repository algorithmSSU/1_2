import java.util.ArrayList;
import java.util.Collections;

class Programmers_60057 {
    public static void main(String[] args) {

    }

    public int solution(String s) {
        if(s.length() == 1)
            return 1;

        ArrayList<Integer> answerList = new ArrayList<>();
        String result = "";
        for(int i = 1; i < s.length()/2 + 1; i++){
            String pattern = s.substring(0, i);
            int count = 1;
            for(int j = i; j < s.length(); j += i){
                if(s.length() < j+i) {
                    result += pattern;
                    pattern = s.substring(j, s.length());
                    continue;
                }
                if(pattern.equals(s.substring(j, j+ i))){
                    count++;
                }else{
                    if(count == 1){
                        result += pattern;
                        pattern = s.substring(j, j+i);
                    }else{
                        result += Integer.toString(count) + pattern;
                        pattern = s.substring(j, j+i);
                        count = 1;
                    }
                }
            }
            if(count == 1){
                result += pattern;
                answerList.add(result.length());
                result = "";
            }else{
                result += Integer.toString(count) + pattern;
                answerList.add(result.length());
                result = "";
            }
        }
        return Collections.min(answerList);
    }
}