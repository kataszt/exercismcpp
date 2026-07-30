#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) 
{
    int students_count = student_scores.size();
    std::vector<int> rounded_down_scores {};
    for (int i{0}; i<students_count; i++)
    {
        rounded_down_scores.push_back(static_cast<int>(student_scores[i]));
    }    
    return rounded_down_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) 
{
    // TODO: Implement count_failed_students
    int students_count = student_scores.size();
    int failing_students {};
    for (int i{0}; i<students_count ; i++)
    {
        if (student_scores[i] <= 40)
        {
            failing_students += 1;
        }
    }
    
    return failing_students;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) 
{
    /*
    The score needed to avoid failing is always 41, since an "F" is <= 40. 
    The remaining score range, from 41 to the highest score, should be divided into four equal intervals, one for each letter grade.
    Subtract 40 from the highest score to get the total range of scores that qualify for letter grades (A to D).
    Divide this total range by 4 to get the size of each grade interval.
    Add this interval size to 40 repeatedly to calculate the lower bounds for each letter grade.
    static_cast<int> without parameters should round off increments nicely.
    You are expected to return an array, not a vector.
    */
    int lowest_passing_score {41};
    std::array<int, 4> grade_letters {lowest_passing_score};
    int highest_score_difference {highest_score - 40};
    int grading_stages {4};
    int grading_increment = highest_score_difference / grading_stages;
    for (int i{1}; i<grading_stages; i++)
    {
        lowest_passing_score += grading_increment;
        grade_letters[i] ={lowest_passing_score};
        
    }
    return grade_letters;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) 
{
    std::vector<std::string> result{};
    for (size_t i{0}; i< student_names.size(); i++)
    {
        result.push_back(std::to_string(i+1) + ". "+ student_names[i] + ": "+ std::to_string(student_scores[i]));
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    
    for (size_t i{0}; i< student_names.size(); i++)
    {
        if (student_scores[i] == 100)
        {
           return student_names[i];
        } 
    }
    return "";
}
