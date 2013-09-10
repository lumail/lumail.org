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
    <dt>14th August 2013</dt>
    <dd>
      <p>A new release has been made, version 0.18, which was focused upon improving MIME handling.  This was achieved by migrating away from <a href="http://www.codesink.org/mimetic_mime_library.html">mimetic</a>, instead using <a href="http://spruce.sourceforge.net/gmime/">GMime</a> for all MIME parsing, and manipulation.</p>
      <p>The release also features several new primitives: <a href="http://lumail.org/lua/body.html">body()</a>, <a href="http://lumail.org/lua/index_offset.html">index_offset()</a>, <a href="http://lumail.org/lua/history_file.html">history_file()</a>, <a href="http://lumail.org/lua/maildir_offset.html">maildir_offset()</a>, &amp; <a href="http://lumail.org/lua/on_mode_change.html">on_mode_change()</a>.</p>
      <p>Two existing filters <span class="tt">msg_filter</span>, and <span class="tt">message_filter</span> were renamed.</p>
    </dd>
    <dt>9th August 2013</dt>
    <dd><p>A new release has been made, version 0.17, which features several significant bugfixes relating to message-parsing.   We've introduced the new primitives <a href="/lua/is_maildir.html">is_maildir()</a>, <a href="/lua/create_maildir.html">create_maildir()</a>, updated the <a href="/lua/msg.html">msg()</a> primitive to display more types and updated the TAB-completion code to allow you to <a href="/faq/technical/">disable case-insensitivy</a>.</p></dd>
    <dt>4th August 2013</dt>
    <dd><p>A new release has been made, version 0.16, which features a complete overhaul of the TAB-completion support and adds several new hooks and primitives; <a href="http://lumail.org/lua/on_message_aborted.html">on_message_aborted()</a>, <a href="/lua/on_edit_message.html">on_edit_message()</a>, <a href="http://lumail.org/lua/on_send_message.html">on_send_message()</a>, <a href="http://lumail.org/lua/on_message_parse.html">on_message_parse()</a>, <a href="http://lumail.org/lua/stuff.html">stuff()</a>, and <a href="/lua/completion_chars.html">completion_chars</a>.</p></dd>
    <dt>26th July 2013</dt>
    <dd><p>A new release has been made, version 0.15, which adds some new primitives (<span class="tt">wrap_lines</span>, <span class="tt">alert</span>, <span class="tt">sort</span>) and fixes maildir discovery and display.</p></dd>
    <dt>17th July 2013</dt>
    <dd><p>A new release has been made, version 0.14, which fixes a serious segfault bug in the display of folder lists.</p></dd>
    <dt>11th July 2013</dt>
    <dd><p>A new release has been made, version 0.12, which is available from the <a href="/download/">download page</a>.</p></dd>
    <dt>9th July 2013</dt>
    <dd><p>A new release has been made, version 0.11, which is available from the <a href="/download/">download page</a>.</p></dd>
    <dt>5th July 2013</dt>
    <dd><p>A new release has been made, version 0.10, which is available from the <a href="/download/">download page</a>.</p></dd>
    <dt>29th June 2013</dt>
    <dd><p>A new release has been made, version 0.09, which is available from the <a href="/download/">download page</a>.</p></dd>
    <dt>6th June 2013</dt>
    <dd><p>A new release of lumail, version 0.08.  Changes include bugfixes, additional primitives, and code cleanps.</p></dd>
    <dt>4th June 2013</dt>
    <dd>
      <p>The examples were removed from the <a href="https://raw.github.com/skx/lumail/master/lumail.lua">default config file</a>, and instead placed in the <a href="/examples/">online examples area</a>.</p>
    </dd>
    <dt>1st June 2013</dt>
    <dd>
      <p>Thanks to the reddit user <a href="http://www.reddit.com/user/Bigbuddhabelly">Bigbuddhabelly</a> we have a logo.</p>
      <p>Thanks to James Turner we are now included in the <a href="http://www.openbsd.org/cgi-bin/cvsweb/ports/mail/lumail/">OpenBSD ports</a> system.</p>
      <p>Documentation of all <a href="/cmdline/">command-line flags</a> was added.</p>
      <p>Binary packages for the Wheezy release of Debian GNU/Linux were produced and published.</p>
    </dd>
  </dl>
