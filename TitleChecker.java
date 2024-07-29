public class TitleChecker {
    private static boolean isTitle(String checkedText){
        for (String word : checkedText.split(" ")){
            if(Character.isLowerCase(word.charAt(0))) return false;
        }
        return true;
    }
}
