import openai

openai.api_key = "sk-<api-key>" # change the api key here to yours

def chat_with_gpt(prompt):
    try:
        response = openai.ChatCompletion.create(
            model="gpt-3.5-turbo",  # change the model dependent on which api key using, or change based on pay thingy
            messages=[{"role": "user", "content": prompt}],
        )
        return response.choices[0].message.content.strip()
    except Exception as e:
        return f"Error: {str(e)}"

if __name__ == "__main__":
    while True:
        user_input = input("You: ")
        if user_input.lower() in ["quit", "exit", "end"]:
            print("Exiting the chat. Goodbye!")
            break
        response = chat_with_gpt(user_input)
        print("Chatbot: ", response)
