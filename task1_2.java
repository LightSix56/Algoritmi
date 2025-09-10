import java.util.List;
import java.util.Arrays;

public class PalindromeStack {
    public static void main(String[] args) {
        // Создаем списки палиндромов
        List<String> palindromes1 = Arrays.asList("ЗАКАЗ", "ЗАМАЗ", "ЗУЗ", "И ЧИ", "И", "ИААИ", "ИАИ", "ИБИ");
        List<String> palindromes2 = Arrays.asList("ЗАКАЗ", "ЗАМАЗ", "ЗУЗ", "И ЧИ", "И", "ИААИ", "ИВИ", "ИДИ-ИДИ");
        List<String> palindromes3 = Arrays.asList("ЗАКАЗ", "ЗАМАЗ", "ЗУЗ", "И ЧИ", "И", "ИБИ", "ИВИ", "ИДИ-ИДИ");
        
        // Создаем стек для хранения списков строк
        Stack<List<String>> stack = new Stack<>();
        
        // Добавляем списки в стек
        stack.push(palindromes1);
        stack.push(palindromes2);
        stack.push(palindromes3);
        
        // Выводим содержимое стека
        System.out.println(stack);
    }
}