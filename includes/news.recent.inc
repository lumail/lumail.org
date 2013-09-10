  <dl>
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
    <dt>20th August 2013</dt>
    <dd>
      <p>A new release has been made, version 0.19, which focused upon improving the keyboard and input functions to work with UTF-8.  In addition to these changes there were also minor bugfixes made relating to attachment handling.</p>
      <p>Two new primitives were added in this release, the callback <a href="http://lumail.org/lua/on_delete_message.html">on_delete_message</a>, and the <a href="http://lumail.org/lua/message_offset.html">message_offset()</a> function.  The documentation for <a href="http://lumail.org/lua/DEBUG.html">DEBUG</a> and <a href="http://lumail.org/lua/VERSION.html">VERSION</a> global-variables was added.</p></dd>
    </dd>
  </dl>
 <p class="right"><a href="/news/">Archived news</a> is available for posterity.</p>
 <p>&nbsp;</p>
