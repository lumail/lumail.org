  <dl>
    <dt>13th October 2013</dt>
    <dd>
    <p>This release contains only minor changes, but these changes improve the speed of handling large mailboxes, and large directories.</p>
    <p>The only significant new functionality is the introduction of the "/lua/hostname.html">hostname()</a> primitive.</p></dd>
    <dt>9th September 2013</dt>
    <dd>
      <p>A new release has been made, version 0.22, which improves support for reading non-MIME messages with foreign character sets.</p>
      <p>The release also fixes a minor issue which affected <a href="/faq/technical/#faq_msmtp">sending mail via <span class="tt">msmtp</span></a>.</p>
    </dd>
    <dt>3rd September 2013</dt>
    <dd>
      <p>A new release has been made, version 0.21, which improves support for mail handling, via the addition of two new primitives <a href="/lua/forward.html">forward()</a> and <a href="/lua/bounce.html">bounce()</a>.  The <a href="/lua/reply.html">reply()</a> primitive now honours the <span class="tt">Reply-To:</span> header.</p>
      <p>Beyond that this release also decodes boday parts retrieved via <a href="/lua/get_body_part.html">get_body_part()</a> and fixes several minor bugs.</p>
    </dd>
    <dt>24th August 2013</dt>
    <dd>
      <p>A new release has been made, version 0.20, which adds the ability for Lua to replace message-bodies via the <a href="http://lumail.org/lua/on_get_body.html">on_get_body()</a> primitive.  This can be used for crude but functional <a href="/examples/html2text.html">HTML-mail reading</a>.</p>
      <p>We also allow the user to control how message/index highlighting is carried out via <a href="http://lumail.org/lua/index_highlight_mode.html">index_highlight_mode()</a> &amp; <a href="http://lumail.org/lua/maildir_highlight_mode.html">maildir_highlight_mode()</a>.</p>
    </dd>
  </dl>
 <p class="right"><a href="/news/">Archived news</a> is available for posterity.</p>
 <p>&nbsp;</p>
