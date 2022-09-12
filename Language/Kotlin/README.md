<img width="128px" src="https://www.notion.so/image/https%3A%2F%2Fdevjhlee.github.io%2Fassets%2Fimg%2Fapps%2FLanguage%2Fkotlin.png?table=block&id=800981a2-5ccd-4b37-b0b8-ef93069af46d&spaceId=1c56ed47-28ff-418e-802f-0db5ea361e5c&width=250&userId=18a9f9c4-6b18-4bd8-9e8d-2f2b54b19987&cache=v2" />

# Kotlin

<aside>
🚨 본 문서는 Kotlin 언어와 관련된 내용만 작성한다
</aside>

# ❤ Kotlin Official Site

[Kotlin Programming Language](https://kotlinlang.org/)

---

# 🧡 Motivation

<aside>
💡 

2015, 안드로이드를 taught myself하며 경험했던 몰입이 나에게 행복했던 기억으로 남아있음.

2017, 안드로이드가 Kotlin을 공식 언어로 발표했을 때, 고등학생으로써 학업으로 인한 학습을 하지 못한 것에 대한 아쉬움

2022, 학습하지 못한 아쉬움을 채우기 위해 학습
→ Android 최신 기술들과 함께 배우며, `함수형 프로그래밍` 과 `Android` 에 대한 이해도 상승 목표
</aside>


## ✔ 2021 Kotlin 현황

- Kotlin은 현재 `Android 개발` 및 `서버 측 개발` 용도로 사용됨
    - 전체 사용자 중 각각 63%, 52% 점유
    - 데이터 과학(Visualization 등)에도 사용
- **개발자들이 가장 많이 사용하는 Jetbrains Kotlin 라이브러리 및 프레임워크** : `kotlinx.coroutines`
    - 비동기 프레임워크 `Ktor` 은 24%로 4위
- ****현재 사용하는 다른 Kotlin 라이브러리 및 프레임워크**** : `Gson` https://github.com/google/gson
    - 3위, 31% :  **Spring/Spring Boot**
- StackOverFlow Survey 결과 Most Popular Language에서 `15위`, 8.32%

[Kotlin 프로그래밍 - 2021년도 개발자 에코시스템 현황 인포그래픽](https://www.jetbrains.com/ko-kr/lp/devecosystem-2021/kotlin/)

[Stack Overflow Developer Survey 2021](https://insights.stackoverflow.com/survey/2021#technology-most-popular-technologies)

---

# 💛 Introduction

### 코틀린 맛보기

1. `Simple`
    
    ```kotlin
    fun main() {
        val name = "stranger"
        println("Hi, $name!")
        print("Current count:")
        for (i in 0..10) {
            print(" $i")
        }
    }
    ```
    
    - **함수 정의** : `fun name() {}`
    - **변수 선언** : `val name = "stranger"`
    - **기본 출력** : `println()`, `print()`
    - **String Template Literal** : `""` + `$name`
    - **반복문**
        - iterator 지원 *(foreach-like in C#)*
    - **Range Expresion**
        
        ```kotlin
        if (i in 1..4) // equivalent of i >= 1 && i <= 4
        for (i in 4 downTo 1) print(i) // in reverse order
        ```
        
    - 세미콜론 ";" 작성 하지 않음 (JavaScript와 경쟁하기 위해서)

- What is `Kotlin`?
    - **Modern, concise and safe programming language**
        - Easy to pick up, so you can create powerful applications immediately.