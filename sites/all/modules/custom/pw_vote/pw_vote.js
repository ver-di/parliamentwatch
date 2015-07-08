// handles onclick which sets filter
(function ($) {
  Drupal.behaviors.pwVoteFilter = {
    attach: function (context, settings) {
      $('a[rel^=filter-]').click(function(e){
        e.preventDefault();
        var filter = $(this).attr('rel').split('-');
        var parties = filter[1].split('/');
        var vote = filter[2];
        $('#edit-keyword').val('');
        $('#edit-ss-vote-user-party option').attr('selected', false);
        $.each(parties, function(index, party){
          $('#edit-ss-vote-user-party option:contains(' + party + ')').attr('selected', 'selected');
        });
        // $('#edit-ss-vote-user-vote-text input').attr('checked', false);
        // $('#edit-ss-vote-user-vote-text label:contains(' + vote + ')').parent().children('input').attr('checked', 'checked');
        $('#edit-ss-vote-user-vote-text option').attr('selected', false);
        $('#edit-ss-vote-user-vote-text option:contains(' + vote + ')').attr('selected', 'selected');
        $('#edit-submit-pw-vote-search').click();
        //$("#pw_vote_positions")[0].scrollIntoView({behavior: 'smooth'});
      });
    }
  };
}(jQuery));
