const express = require("express");
const https = require('https');
const bodyParser = require("body-parser");

const app = express();

app.use(bodyParser.urlencoded({extended: true}));

app.get("/", function(req, res){
    res.sendFile(__dirname+ "/index.html");
});

app.post("/", function(req, res){

    const query = req.body.cityName;
    const apiKey = "c2e92a107d690f0dcec34773f9041de8";
    const unit = "metric";
    const url = "https://api.openweathermap.org/data/2.5/weather?q="+ query +"&appid="+ apiKey +"&units="+ unit;
    
    https.get(url, function(response){
        console.log(response.statusCode);

        response.on("data", function(data){
            console.log(data);

            const weatherData = JSON.parse(data);
            console.log(weatherData);

            const temp = weatherData.main.temp;
            console.log(temp);
            const description = weatherData.weather[0].description;
            const iconCode = weatherData.weather[0].icon;
            const iconUrl = "http://openweathermap.org/img/wn/"+iconCode+"@2x.png";
            res.write("<p>The weather description is: " + description + "</p>");
            res.write("<h1>The temprature in "+query+" is " + temp + " degrees Celcius</h1>");
            res.write("<img src=" + iconUrl + ">");
            res.send();
        });
    });

});



app.listen(process.env.PORT || 3000, function(){
    console.log("Server running at port 3000");
});

