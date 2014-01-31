jQuery(document).ready(function() {

// show free amount input field
 /*   jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-4").click(function() {
            jQuery("#webform-component-fieldset-donationform-yourdonation--donation-free-amount").show();
    });
*/

// set values and labels
    jQuery("#webform-component-fieldset-donationform-yourdonation--donation-amount").click(function() {

        pw_amount = jQuery("input:radio[name ='submitted[fieldset_donationform_yourdonation][donation_amount]']:checked").val();
        pw_interval = jQuery("input:radio[name ='submitted[fieldset_donationform_yourdonation][donation_frequency]']:checked").val();

		// when one time donation multiple by 2
		pw_interval = pw_interval == 0?1:pw_interval;
        /* if (pw_interval == 0 && pw_amount != 'free') {
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-1 + label").text("10 €");
            //jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-1").val(10);
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-2 + label").text("20 €");
            //jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-2").val(20);
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-3 + label").text("50 €");
            //jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-3").val(50);

        } else if (pw_amount == 'free') {
            // pw_amount = jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-free-amount").val();
            // jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-4").val(pw_amount);

        } else {
*/ 
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-1 + label").text(pw_interval * 10 + " €");
            //jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-1").val(pw_interval * 10);
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-2 + label").text(pw_interval * 20 + " €");
            //jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-2").val(pw_interval * 20);
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-3 + label").text(pw_interval * 50 + " €");
            jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-4 + label").text(pw_interval * 100 + " €");
            //jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-3").val(pw_interval * 50);
   //     }

    });

// call the same function from pw-choose-amount again
    jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-frequency").click(function() {
        jQuery("#webform-component-fieldset-donationform-yourdonation--donation-amount").click();
    });

// call the same function on page load
    jQuery( document ).ready(function() {
        jQuery("#webform-component-fieldset-donationform-yourdonation--donation-amount").click();
    });
/*
    jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-free-amount").on('keyup keypress blur change', function() {
        pw_amount = jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-free-amount").val();
        jQuery("#edit-submitted-fieldset-donationform-yourdonation-donation-amount-4").val(pw_amount);
    });
*/
});
