#include <iostream>
#include <cstdlib> // 包含 system 函数的头文件

int main() {
    system("cd llama.cpp");
    system("make");
    system("pip3 install -U huggingface_hub");
    system("pip install -U \"huggingface_hub[cli]\"");
    system("export HF_ENDPOINT=https://hf-mirror.com");
    system("huggingface-cli download TheBloke/Llama-2-7b-Chat-GGUF llama-2-7b-chat.Q4_K_M.gguf --local-dir .");
    system("./main -m llama-2-7b-chat.Q4_K_M.gguf -c 4096 --temp 0.7 --repeat_penalty 1.1 -i");

    return 0;
}

