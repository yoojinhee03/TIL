  
$(document).ready(function () {

    $('#register-table').DataTable({
        responsive: true,
        orderMulti: true,
        order : [[1, 'desc']],
        ajax:{
            'url':'user-data.json',
            // 'type':'POST',
            'dataSrc':''
        },
        columns:[
            {"data":"name"},
            {"data":"company"},
            {"data":"phone_number"},
            {"data":"age"},
            {"data":"location"},
        ]
    })
});