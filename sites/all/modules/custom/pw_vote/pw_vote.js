// handles onclick which sets filter
(function ($) {
  Drupal.behaviors.pwVoteFilter = {
    attach: function (context, settings) {
      $('a[rel^=filter-]').click(function(){
        var filter = $(this).attr('rel').split('-');
        var party = filter[1];
        var vote = filter[2];
        $('#edit-keyword').val('');
        $('#edit-ss-vote-user-party option:contains(' + party + ')').attr('selected', "selected");
        $('#edit-ss-vote-user-vote-text option:contains(' + vote + ')').attr('selected', "selected");
        $('#edit-submit-pw-vote-search').click();
        $("#pw_vote_positions")[0].scrollIntoView();
      });
    }
  };
}(jQuery));
