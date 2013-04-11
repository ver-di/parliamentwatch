function DownloadAsCSV(source_table){
    var csv_value = source_table.table2CSV({
        separator : ',',
        delivery:'value'
    });
    $("#csv_data").val(csv_value);
    $("#csv_data").parents('form').submit();
}