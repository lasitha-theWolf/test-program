//JSON data type

// String  - "brand":"honda"
// Number =  "num":123

//json eka athule object,arraay,boolean value tiyenna plwn

//json.parse()     -- covert string to javascript object
   // ex- JSON.parse(MYaasd) ;

//json.stringify()     -- covert js object to String
   // ex- JSON.parse(MYaasd) ;


   function display(vehicle){

   const vehicleinfo = ` <h2>Brand : ${vehicle.Brand}</h2>
    <h2>Date :${vehicle.date}</h2>
    <h2>Country :${vehicle.country}</h2>
    <h2>Number:${vehicle.number}</h2>
    <h2>Engine :${vehicle.Engine.key}</h2>`

    document.querySelector('.data').innerHTML = vehicleinfo;
   }
   const xhr = new XMLHttpRequest();

   xhr.onreadystatechange = function(){
    if(xhr.readyState === 4 && xhr.status===200){

        console.log(JSON.parse(xhr.responseText));
        display(JSON.parse(xhr.responseText));
    }
   }
   

   xhr.open('GET', '3.JSON.json');
   xhr.send()