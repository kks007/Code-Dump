const express = require("express");
const https = require('https');
const bodyParser = require("body-parser");
const { time } = require("console");

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
            const description = weatherData.weather[0].description;
            const iconCode = weatherData.weather[0].icon;
            const iconUrl = "http://openweathermap.org/img/wn/"+iconCode+"@2x.png";
            const feels = weatherData.main.feels_like;
            const humidity = weatherData.main.humidity;
            const maxtemp = weatherData.main.temp_max;
            const mintemp = weatherData.main.temp_min;
            const timezone = (weatherData.timezone)/3600;
            const cloudiness = weatherData.clouds.all;

            res.write("<p>Description: " +description +"</p>");
            res.write("<h1>The temprature in "+query+" is " + temp + " degrees Celcius</h1>");
            res.write("<h3> Feels like " + feels + " Degrees</h3>")
            res.write("<h3> Cloudiness: " + cloudiness + "%</h3>")
            res.write("<img src=" + iconUrl + ">");
            res.write("<h2> Max: "+ maxtemp + " degrees</h2>")
            res.write("<h2> Min: "+ mintemp + " degrees</h2>")
            res.write("<h2> Humidity: "+ humidity + "%</h2>")
            res.write("<h2> Timezone: "+ timezone + "</h2>")
            res.send();
        });
    });

});



app.listen(process.env.PORT || 3000, function(){
    console.log("Server running at port 3000");
});

