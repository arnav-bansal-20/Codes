#  create a program capable of displaying the questions and answers of the KBC game show. The program should have a list of questions and answers, and should randomly select a question to display to the user. The user should be able to input their answer, and the program should check if it is correct or not.
# also it should display the value of the question and keep track of the user's score.
# also display total amopunt in rupees he is taking home after each question.
# List of questions and answers
questions = [
    {
        "question": "What is the capital of India?",
        "options": ["A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"],
        "answer": "B",
    },
    {
        "question": "Who is the current Prime Minister of India?",
        "options": ["A. Narendra Modi", "B. Rahul Gandhi", "C. Arvind Kejriwal", "D. Mamata Banerjee"],
        "answer": "A",
    },
    {
        "question": "What is the largest planet in our solar system?",
        "options": ["A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"],
        "answer": "C",
    },
    {
        "question": "Who wrote the novel 'Pride and Prejudice'?",
        "options": ["A. Jane Austen", "B. Charles Dickens", "C. Mark Twain", "D. Leo Tolstoy"],
        "answer": "A",
    },
    {
        "question": "What is the chemical symbol for gold?",
        "options": ["A. Au", "B. Ag", "C. Fe", "D. Hg"],
        "answer": "A",
    }
]
levels = [1000, 2000, 3000, 4000, 5000]
for i in range(len(questions)):
    questions = questions[i]
    print(f"Question for Rs. {levels[i]}: {questions['question']}")
    for option in questions['options']:
        print(option)
    user_answer = input("Enter your answer (A/B/C/D): ").upper()
    if user_answer == questions['answer']:
        print("Correct! You have won Rs. ", levels[i])
    else:
        print("Incorrect! The correct answer is: ", questions['answer'])
        break
    