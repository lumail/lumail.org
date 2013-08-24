  <dl>
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

    <dt>14th August 2013</dt>
    <dd>
      <p>A new release has been made, version 0.18, which was focused upon improving MIME handling.  This was achieved by migrating away from <a href="http://www.codesink.org/mimetic_mime_library.html">mimetic</a>, instead using <a href="http://spruce.sourceforge.net/gmime/">GMime</a> for all MIME parsing, and manipulation.</p>
      <p>The release also features several new primitives: <a href="http://lumail.org/lua/body.html">body()</a>, <a href="http://lumail.org/lua/index_offset.html">index_offset()</a>, <a href="http://lumail.org/lua/history_file.html">history_file()</a>, <a href="http://lumail.org/lua/maildir_offset.html">maildir_offset()</a>, &amp; <a href="http://lumail.org/lua/on_mode_change.html">on_mode_change()</a>.</p>
      <p>Two existing filters <span class="tt">msg_filter</span>, and <span class="tt">message_filter</span> were renamed.</p>
    </dd>
  </dl>
 <p class="right"><a href="/news/">Archived news</a> is available for posterity.</p>
 <p>&nbsp;</p>
