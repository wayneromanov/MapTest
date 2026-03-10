Full Year Calendar Generator
Develop a C++ program that generates and displays the complete calendar for a
given year. The program must correctly handle leap years, display each month
with proper alignment, and maintain the continuity of weekdays from one month
to the next.
Inputs:
1. Year number as an integer (e.g., 2026)
2. First day of the year - a string indicating the day of the week on January 1st.
Valid values are:
Sun, Mon, Tue, Wed, Thu, Fri, Sat
Example input: 2003 Wed
Meaning: ▪ The year is 2003 ▪ January 1st, 2003 falls on Wednesday
Strict Input Validation
• If the year is less than 1, display an error message and prompt again.
• If the first day string is not one of the valid weekday names {Sun, Mon, Tue,
Wed, Thu, Fri, Sat}, display an error message and prompt again.
• Continue prompting the user until valid inputs are provided.
Output:
The program must display:
• The complete calendar for all twelve months of the input year, formatted
month by month.
• Correct alignment of dates under corresponding weekdays.
• Continuity of weekdays between months.
Output Formatting Requirements
• Month names should be clearly labeled.
• Dates must be aligned under the correct weekdays.
• Weekday continuity must be maintained across months.
Example:
Requirements:
1. You must use:
o Conditional statements (if, if-else, switch)
o Loops (for and/or while)
o Parallel arrays
2. You are NOT allowed to use:
▪ Functions ▪ Pointers ▪ Structures ▪ Classes
3. You must use parallel arrays similar to:
string months[12] = { "January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December" };
int daysInMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
You may use additional arrays if needed.
4. The program must:
o Correctly handle leap years. (divisible by 4, not divisible by 100 unless
divisible by 400)
o Print each month with correct alignment.
o Continue weekdays correctly from one month to the next
o Use meaningful variable names.
o Use appropriate indentation.
o Use comments, especially for the header, variables, and blocks of
code.
Submission Requirements:
• Submit a single .cpp source file.
• Include a brief comment header with your name(s), student ID(s), and
course details.
• Ensure the code compiles and runs correctly before submission.
• All group members must submit the assignment individually.
