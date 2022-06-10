# Google I/O Developer Keynote 2022 


<a href="https://www.youtube.com/watch?v=qBkyU1TJKDg">Youtube</a>


## Introduction

- Developers power the way we live today creating the software that makes it possible to continuouly improve and adapt how we learn, work, communicate, ...
- Google is bringing simplicity to the challenges that developers face.


- Users expect to have polished,highly-interactive, and fast experiences that run across many different devices, form factors, and platforms.
- We need to deliver systems that scale to sudden user demand while protecting their privacy and safety.


- Simplicity : first, by connecting out products so that they work even better when you use them together. <bold>(work better together)</bold>
- second, by providing guidance and best practices to help you improve your entire workflow.


- Augmented Reality, Android, Flutter, Chrome, Firebase, Google Cloud, Machine Learning.


---


## Augmented Reality
- ARCore
- new launched! <a href="https://developers.google.com/ar/develop/geospatial#android-kotlinjava">'ARCore Geospatial API'</a> on Android and iOS.
- At no cost, in 87 countries
- Google map API 정보를 View and our visual positioning service를 이용해서 만듦.
- Partners : NBA, Snpa, Bird, Lime, Donkey, docomo, WeMo,...
- AR experience Demo - <a href="https://github.com/googlecreativelab/balloon-pop"> 'Balloon Pop' </a>


---


## Android
- Better Together
- Developer productivity


`'Modern Android Development'`
```
    - Android Studio, Kotlin -> productive development
    - Material, Jetpack Compose -> UI framework, guidance
    - Jetpack -> reduce the code you need to write
    - Google services- > enhance your application
    - Google Play -> front store
```

### 1. Better Together


- **'wearables' and 'large screens'**
- ` 1. Wear OS, with Fitbit `
    - launch <a href="https://android-developers.googleblog.com/2022/05/announcing-compose-for-wear-os-beta.html#:~:text=With%20this%20Beta%20release%2C%20Compose,components%20for%20the%201.0%20release.">the beta of Jetpack Compose for Wear OS</a>
    - Jetpack의 Form Factor를 통해 다양한 사이즈의 스크린에 대응 할 수 있음


    - <a href="https://developer.android.com/guide/health-and-fitness/health-connect">'Health Connect'</a> (collab. Google and Samsung) : Simplify connectivity between apps
    - Health관련 API를 안전하게 불러올 수 있음.


- ` 2. 'large screens', Tablet `
    - In 2022 시장 상황, Chrome OS(Chromebook models), Foldables(OPPO's Find N, Samsung's Fold/Flip 3),  Tablets(Lenovo's Tab P12Pro, Samsung's Galaxy Tab S8)
    - this year, launch Pixel Tablets
    - Android 12, 13 has optimizations. 'Taskbar, Multi-tasking, Keyboard and Mouse support, Compatibility mode'
    - <a href="https://developer.android.com/guide/topics/large-screens/get-started-with-large-screens">'large-screen quality guidelines'</a>
    - Jetpack library "DragAndDrop" and "WindowManager" have reached their 1.0 stable release.

    - Changes of **the Play Store**
        - the best large-screen optimized apps
        - focused editorial content / Separate review and rating system


### 2. Developer Productivity
- Changes of **Android Studio**
    - In Android Studio Electric Eel, we can see the new features
        - <a href="https://developer.android.com/studio/preview/features#compose_multipreview_annotations">'Multipreview API' </a> : different screen sizes에서 어떻게 보이는지 확인하고 싶을 때 preview code를 작성하지 않고 확인할 수 있음.
        - One annotation(@PreviewDevices) 작성만 하면 됨.


    - **Screen Mirroring Updates**
        - IDE flow에 머무르고 싶을 때가 있다.
        - feel my app(validate gestures, scoll events)
        - We can stream the interaction of a physical device screen right into Android Studio (over Wi-Fi or USB).
        - Live Edit without rebuilding
        - 이거말고도 여러가지 <a href="https://android-developers.googleblog.com/2022/05/13-things-to-know-for-android-developers-at-google-io.html"> 업데이트 </a>가 있으니 피드백 부탁!


    - in Lastest Jetpack Compose APIs
> Every Developer said they never want to go back to XML once they've tried Compose
    
    - Twitter, Airbnb, Play Store가 Jetpack Compose로 만들어짐.

---


## Web
- Web makes sharing and collaboration easy with over 4 billion people.
- the open-source project <a href="https://github.com/chromium/chromium">Chromium </a>designed to push the web forward.
- Vision : **Instant, Powerful, Safe**
    - 유저들을 빠르게 이탈한다. 그러기에 작은 성능 향상만으로 큰 차이를 만들 수 있다.
        - 그래서 몇 년간 구글은 Chrome을 Fine-tuning하였고 이는 Speedometer Score의 증가로 이어졌다.
        - Release 87 -> 100, 점수 3배 증가


    - 브라우저의 성능 향상만으로는 부족. the way a website's built가 중요.
        - 3개의 기준으로 판단. Loading, Interactivity, Visual stability.
        - On<a href="https://pagespeed.web.dev/">`web.dev`</a>, you can learn how to improve your scores(Discover site's Core Web Vitals.)
        - Chrome - 개발자 도구 - 'Performance Insights' 패널에서 사이트의 Vitals 진단 가능


    - 최근, 웹의 가능성은 OS와 Hardware와의 integrating으로 further해졌다. 이는 `instant and seamless` model한 경험으로 이어졌다.
        - favorite example: <a href="https://spike.legoeducation.com/">LEGO's online learning experience</a> - Bluetooth, USB API를 통한 cool한 코딩 가능
        - Adobe 또한 WebAssembly를 통한 기존의 경험을 re-envision하고 있음.
        - Google Sheet 또한 Java를 빠르게 실행중임.


    - We're working closely with the Android team on the `Privacy Sandbox`
        - We rethink online privacy and enable personalized experiences that don't rely on tracking users across apps or sites.
        - We're currently testing trial versions of <a href="https://privacysandbox.com/intl/en_us/">the Privacy Sandbox APIs</a> in Chrome
        - One of these is <a href="https://developer.chrome.com/docs/privacy-sandbox/fedcm/">Federated Credential Management</a> which is a new way for browsers to support logins **without relying on third-party cookies or libraries**.


    - 개발자들은 브라우저 종류와 상관없이 web APIs가 consistently perform하도록 작업한다.
        - This year, All of the major browsers have come together on an effort
        - <a href="https://web.dev/interop-2022/">Interop 2022</a>
        - cooperatively improve compatibility in **15 key areas of the web**
        - CSS grid와 같은 최신 웹기술을 자신감있게, 쉽게 사용할 수 있음.
        - ref) <a href="https://wit.nts-corp.com/2022/02/24/6490"> CSS 2022 </a>

---

## Flutter
- We built Flutter to revolutionize UI development.
- over 500K apps are built with Flutter
- `Flutter 3`
- you can build high-quality, beautiful experiences for all six platforms(**Android, iOS, Web, Windows, Mac, Linux**) from a single code base
- We want to give you `the flexibility` also to take full advantage of that underlying OS whenever you build a Flutter app


    - more than just rendering pixels, includes **new inputs, interaction models compilation, build supports, accessibility, internationalization, platform-specific integration.**

    - sharing as much UI and logic as you choose
        - On Linux, <a href="https://canonical.com/">Canonical</a> has been contributing to offer a highly integrated option for development. 
        - On macOS, we've invested in supporting both Intel and Apple silicon with <a href ="https://github.com/flutter/flutter/wiki/Developing-with-Flutter-on-Apple-Silicon">`support for Universal Binary`</a>

    - One example of how Flutter 3 enable beautiful desktop experience is <a href="https://www.superlist.com/"> `Superlist` </a>
        - They started with macOS as their target platform
        - But, since they're using Flutter, they also get Windows, Android, and iOS apps, all from the same code.

    - Plus, We've got new performance tooling.
        ```
            Material 3, folable device support, new language features in Dart
        ```

    - Today, we are also announcing the <a href="https://flutter.dev/games?gclid=Cj0KCQjwqPGUBhDwARIsANNwjV7lKwvjm8VrSSG66I45k99Z3loMGg2z4wMhfEuIqP4utzb6Fv64VeAaAuUxEALw_wcB&gclsrc=aw.ds">`Flutter Casual Game Toolkit`</a>
        - including a sample game, learnign materials, community spaces, and information about credits for Google Developer Services

    - `Flutter-Firebase Fully-supported integration` : Fully supported core part of the Firebase offering
        - 62% of Flutter developers use Firebase
        - we're moving the source code and the documentation into the main Firebase repo and site.
        - Today, we are releasing <a href="https://firebase.flutter.dev/docs/crashlytics/overview/"> `Flutter support for Crashlytics`</a>


---

## Firebase
- Firebase is Google's app development platform that brings together tools, technology, and backend services in one place.
- We've continued to invest in making app development faster and easier so you can focus on building and growing apps people love.
- Crashlytics crashes and the events that led up to them.




    - To reproduce, debug, and resolve issues, you need to jump into your IDE like Android Studio.
    - That's why we're launching the new <a href="https://youtu.be/RFv8GkLd5OY?t=1821">`App Quality Insights window`</a> in Android Studio.
    - The App Quality Insights window helps you discover, investigate, and reproduce issues reported by Crashlytics within the context of your Android Studio.
        - Android Studio에서 프로젝트를 열고 'App Insights' 탭을 열면 각 Issue 리스트와 affecting a number of users를 보여준다.
        - by highlighting the lines of code that have appeared in crash reports.
        > No more extra time spent on searching for and linking crashes from the console to our codebase. -Adobe Acrobat-




    - Firebase also makes it easier to use with multiple third-party tools.
    - Most apps use betwwen 20 to 40 different APIs.
    - <a href="https://firebase.google.com/products/extensions">`Firebase Extensions`</a> prepackaged solutions that lets you quickly and functionalities to your apps from Google or other companies.
        - You **just deploy and the code is pulled into your codebase.**
        - The trade-off is that they might not always fit your specific needs.
    - `Extensions events` allows you to **customize an extension with your own custom code.**
        - For example, if you're using the Payments with Stripe extension for subscription billing, you can now write your own custom code to trigger a discount offer upon subscription cancellation.
        - Check out the new extensions from 'Snap, Stream, RenenueCat, Typesense, and more'




    - Regardless of what tools and platforms you use, you shouldn't have to worry about security risks to your backend, like phishing, app impersonation, or data theft.
    - <a href="https://firebase.google.com/docs/app-check">`App Check`</a>, you can help safeguard your data, protect your users, and control who has access to your resources and infrastructure.
        - App Check does this by **attesting that incoming traffic is coming from your app** on a legitmate device and is certified under major compliance and security standards.
        - you can use App Check with Firebase, Cloud, and even API endpoints on your own custom servers.

---

# Google Cloud
- Google Cloud is a cloud built by developers for developers.
- We focus on creating **intuitive experiences to help you to easily build** apps and services that your users love
    
    
    - One example of what excites developers about Google Cloud is <a href="https://cloud.google.com/run?hl=ko">`Cloud Run`</a>, our serverless platform.
        - which allows you to build and run applications without having to manage infrastructures.
        - It supports your favorite languages and frameworks, like Kotlin, Node.js, Dart, and Python.
        - In just a few clicks, you can simply connect Cloud Run to your git repo to automatically deploy your code changes.
            > Users werw able to build and deploy an app on their first try in **less than 5 minutes.**

    
    - <a href="https://cloud.google.com/run/docs/create-jobs"> `Cloud Run Jobs` </a>
        - You probably spend a lot of time running administrative tasks like database migration, managing scheduled jobs like nightly reports, or doing batch data transformation.
        - With Cloud Run jobs, you can excute code to completion on the same highly scalable Cloud Run platform.
        - Example), I want my app's users to receive personalized push notifications every week with a recap of their week's activity.
            - Here, a Cloud Run job is generating notification content for each user and using Firebase Admin SDK to send them out.
            - Demo - <a href="https://github.com/GoogleCloudPlatform/jobs-demos">GitHub</a>


    - <a href="https://cloud.google.com/alloydb">`AlloyDB for PostgreSQL`</a>
        - PostgreSQL is a great fit because it's one the most popular database engines.
        - PostgreSQL is conbined with Google-native storage, Fully-managed database operations, and built-in ML.
        - **4X faster** than standard PostgreSQL for transactional workloads.
        - From my code, I can run SQL queries using the standard PostgreSQL library.
        
        ``` JavaScript
        const { Pool } = require('pg')

        const pool = new Pool({
            host : process.env.DB_HOST,
            port : 5432,
            database : process.env.DB_NAME,
            user : process.env.DB_USER,
            pass : process.env.DB_PASS,
        }) 

        res = await pool.query(
            "SELECT customer, SUM(usage) FROM records GROUP BY customer"
        );
        for(const row of res.rows){
            console.log("customer: %s, usage: %s", row[0], row[1]);
        }
        ```

---

# Machine Learning
*get the ball rolling : to begin an activity or process.


- We believe 2022 is the year ML becomes part of every developer's toolkit.
- Google's machine learning ecosystem covers ***everything you need***, from the data that gets the ball rolling to training, deployment, operations, all while providing the tools to keep responsible AI top of mind.
- We've made training efficient and easier and we ***help you spot potential bias issues.***
    - when you want to get coding, APIs like tf.data reduce your workload and tools like <a href="https://knowyourdata.withgoogle.com/">Know Your Data</a> allow you to mitigate fairness and bias issues.

- We've built cutting-edge research into easy-to-use APIs to make it simple to define neural networks using code.
    - AI research delivered BERT, a model which can do some amazing things, like understand sentiment within text.
        - *<a href="https://ai.googleblog.com/2018/11/open-sourcing-bert-state-of-art-pre.html">BERT</a> : Bidirectional Encoder Representations from Trnsformers
    - We built BERT into <a href="https://www.tensorflow.org/lite/guide/model_maker?hl=ko">TensorFlow Lite Model Maker </a> to encapsulate these cpabilities and make it easy for you to **use them on mobile.**
    ``` Python
    data = TextClassifierDataLoader.from_csv(...),
        text_column = 'phrase',
        label_column = 'sentiment',
        model_spec = 'mobilebert_classifier',
        delimiter = ',', is_training=True)
    train_data, test_data = data.split(0.9)
    bert_model = text_classifier.create(Train_data, model_spec=spec, epochs=100)
    ```

    - And using this, _Mathias Vogt_, a student developer from Germany, created an open-source reference implementation for ML on mobile that can detect predators in chat rooms. (깃헙 찾아보는데 안나오네요 ㅜ 혹시 아시는 분??)

    - All the complexity for language semantics gets reduced from this to this.

<tr>
    <td>
        <img width="565" alt="스크린샷 2022-06-10 오후 4 37 35" src="https://user-images.githubusercontent.com/12531340/173015430-37088055-10eb-4f7e-8dfd-09edb65c84fd.png">
    </td>
    <td>
        <p>
        ``` Kotlin
        import org.tf.lite.task.text.nlclassifier,BertNLClassifier.*;

        BertNLClassifierOption options = BertNLClassifierOption.builder().setMaxSeqLen(seq_len).build();

        BertNLClassifier classifier = BertNLClassifier.createFromBufferAndOptions(mdl_buff, options);

        List<Category> results = classifier.classify(inputText);
        ```
        </p>
    </td>
</tr>

- You can excute ML, whether it's in the cloud, browsers, Android, iOS, even embedded systems and microcontrollers all from the same code and with open-source tools and frameworks.

- It's critical to keep them updated. Open-source tools like <a href="https://www.tensorflow.org/tfx?hl=ko">TensorFlow Extended </a>, let you implement full pipelines quickly and easily.
    - If you want to a managed solution for this, <a href="https://cloud.google.com/vertex-ai">Vertex AI</a> can cover you end to end.
    - ML used to solve developer problems.
        - We hear from web developers that they'd like to make their pages adaptive to user's bandwidth.
        - Wouldn't it be nice if you can predict conditions before sending content to your users, giving them the best possible experience?
            - <a href="https://github.com/linkedin/performance-quality-models">LinkedIn trained a model</a> using TensorFlow in JavaScript to predict download times, optimizing images before sending them.

- If you want to build an app for text sentiment like Mathias, or a whole bunch of other apps in ML, check out <a href="https://developers.google.com/learn/pathways/?category=aiandmachinelearning">the learning paths</a> that take you from data to development  

- Using ML to help protect the environment. <a href="https://youtu.be/5OuHe_skk0M">Youtube</a>, <a href="https://blog.tensorflow.org/2022/05/Kaggle-Great-Barrier-Reef-ML.html">Blog</a>
