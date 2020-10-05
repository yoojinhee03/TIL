  
$(document).ready(function () {

    $('register-table').DataTable({
        "serverSide": true,
        "processing": true,
        ajax:{
            'url':'user-data.json',
            // 'type':'POST',
            'dataSrc':''
        },
        
        order : [[1, 'desc']],
        column:[
            {"data":"name"},
            {"data":"company"},
            {"data":"phone_number"},
            {"data":"age"},
            {"data":"location"},
        ]
    })
});