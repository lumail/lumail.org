  <dl>
   <dt>19th January 2016</dt>
     <dd><p>A new release of Lumail 2 is available upon our <a href="/download/">download page</a>.</p>
         <p>This release adds a significant feature - you can now <b>access remote mail <a href="/imap/">via IMAP</a></b>!</p></p>
     </dd>
   <dt>19th December 2015</dt>
     <dd><p>A new release of Lumail 2 is available upon our <a href="/download/">download page</a>.</p>
         <p>This release updates and improves the handling of MIME-parts, and attachments.  Now MIME-parts are returned to Lua as a tree, rather than a list, preserving the structure on-disk.</p>
     </dd>
    <dt>4th December 2015</dt>
    <dd><p>A new release of Lumail 2 is available upon our <a href="/download/">download page</a>.</p>
        <p>This release improves the screen-display, the handling of foreign character-sets, and makes significant changes to the handling of attachments - both those attached to incoming mails and those added to outgoing messages.</p></dd>
    <dt>17th November 2015</dt>
    <dd><p>A new release of Lumail 2 is available upon our <a href="/download/">download page</a>.</p></dd>
    <dt>6th November 2015</dt>
    <dd>
    <p>Work is well underway upon a rewrite of Lumail.  The rewrite aims to have a much more unified approach to the Lua functions, as well as moving as much of the core from C++ into Lua.</p></dd>
    <dt>16th September 2014</dt>
    <dd>
    <p>Lumail 0.26 has been released and <a href="/download/">is available for download</a>.  This release adds multiple minor bugfixes, and features including the ability to support multiple Maildir prefixes, and the support for wrapping headers.</p></dd>
    <dt>14th May 2014</dt>
    <dd>
    <p>Lumail 0.25 has been released and <a href="/download/">is available for download</a>.  This release adds a new mode to the client, the ability to show text from a file (<a href="/lua/show_file_contents.html"><tt>show_file_contents()</tt></a>) or programatically (<a href="/lua/show_text.html"><tt>show_text()</tt></a>).</p>
    <p>There were several bugfixes relating to TAB-completion, and new features relating to the current working-directory (<a href="/lua/cd.html"><tt>cd()</tt></a>, <a href="/lua/cwd.html"><tt>cwd()</tt></a>), along with support for reading arbitrary lua via <a href="/docs/external-input.html">a Unix domain-socket</a>.</p>
    </dd>
    <dt>18th Janaury 2014</dt>
    <dd>
    <p>This release contains several bug-fixes relating to handling oddly formed messages, and updates some of the primitives such as <a href="/lua/hostname.html">hostname()</a> which may now be overridden.</p>
    <p>The command-line handling was improved, and the <a href="/lua/clear.html">clear()</a> primitive will now work correctly in all circumstances.</p>
    </dd>
    <dt>13th October 2013</dt>
    <dd>
    <p>This release contains only minor changes, but these changes improve the speed of handling large mailboxes, and large directories.</p>
    <p>The only significant new functionality is the introduction of the <a href="/lua/hostname.html">hostname()</a> primitive.</p></dd>
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
