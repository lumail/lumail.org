<dl>
  <dt>10th May 2017</dt>
  <dd><p>Version 3.0 of Lumail is now available upon our <a href="/download/">download page</a>.</p>
    <p>This release introduces corrects several bugs relating to message-saving, allow index-formatting to become templated (and thus more flexible), as well as fixing minor issues with the display of the panel, and parsing of messages.</p>
  <dt>9th January 2017</dt>
  <dd><p>Version 2.9 of Lumail is now available upon our <a href="/download/">download page</a>.</p>
    <p>This release introduces the ability to sort message-lists by threads, and display them appropriately.  In addition to the usual bugfixes we now support the correct use of <code>References</code> and <code>In-Reply-To</code> headers in outgoing messages, and have significantly sped up message deletion.</p>
  <dt>13th August 2016</dt>
  <dd><p>Version 2.8 of Lumail is now available upon our <a href="/download/">download page</a>.</p>
    <p>This release improves the correctness of allocating C++ objects, which are accessible to Lua, as well as offering support for binding functions to multiple-keypresses.  (For example you can bind the string "111" to jump to line 111 of the current folder; this is done by default, to provide a mutt-like "jump" function.)</p>
  </dd>
  <dt>8th July 2016</dt>
  <dd><p>Version 2.7 of Lumail is now available upon our <a href="/download/">download page</a>.</p>
    <p>This release further improves the correctness of our drawing code, adds support for <a href="/gpg/">GPG</a>, includes a more modular set of configuration files, and finally fixes several small memory leaks.</p>
  </dd>
  <dt>24th June 2016</dt>
  <dd><p>Version 2.6 of Lumail is now available upon our <a href="/download/">download page</a>.</p>
    <p>This release improves the display-handling, adds some minor bugfixes, and introduces an integrated set of (self)test-cases.</p>
  </dd>
  <dt>2nd February 2016</dt>
  <dd><p>A new release of Lumail 2 is available upon our <a href="/download/">download page</a>.</p>
    <p>This release improves IMAP performance, adds support for
      line-wrapping, and improves the display of coloured emails.</p>
  </dd>
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
  <p>Lumail 0.25 has been released and <a href="/download/">is available for download</a>.  This release adds a new mode to the client, the ability to show text from a file (<tt>show_file_contents()</tt>) or programatically (<tt>show_text()</tt>).</p>
  <p>There were several bugfixes relating to TAB-completion, and new features relating to the current working-directory (<tt>cd()</tt>, <tt>cwd()</tt>), along with support for reading arbitrary lua via a Unix domain-socket.</p>
</dd>
<dt>18th Janaury 2014</dt>
<dd>
  <p>This release contains several bug-fixes relating to handling oddly formed messages, and updates some of the primitives such as <tt>hostname()</tt> which may now be overridden.</p>
  <p>The command-line handling was improved, and the <tt>clear()</tt> primitive will now work correctly in all circumstances.</p>
</dd>
<dt>13th October 2013</dt>
<dd>
  <p>This release contains only minor changes, but these changes improve the speed of handling large mailboxes, and large directories.</p>
  <p>The only significant new functionality is the introduction of the <tt>hostname()</tt> primitive.</p></dd>
<dt>9th September 2013</dt>
<dd>
  <p>A new release has been made, version 0.22, which improves support for reading non-MIME messages with foreign character sets.</p>
  <p>The release also fixes a minor issue which affected <a href="/faq/technical/#faq_msmtp">sending mail via <span class="tt">msmtp</span></a>.</p>
</dd>
<dt>3rd September 2013</dt>
<dd>
  <p>A new release has been made, version 0.21, which improves support for mail handling, via the addition of two new primitives <tt>forward()</tt> and <tt>bounce()</tt>.  The <tt>reply()</tt> primitive now honours the <span class="tt">Reply-To:</span> header.</p>
  <p>Beyond that this release also decodes boday parts retrieved via <tt>get_body_part()</tt> and fixes several minor bugs.</p>
</dd>
<dt>24th August 2013</dt>
<dd>
  <p>A new release has been made, version 0.20, which adds the ability for Lua to replace message-bodies via the <tt>on_get_body()</tt> primitive.  This can be used for crude but functional HTML-mail reading.</p>
  <p>We also allow the user to control how message/index highlighting is carried out via <tt>index_highlight_mode()</tt> &amp; <tt>maildir_highlight_mode()</tt>.</p>
</dd>
<dt>20th August 2013</dt>
<dd>
  <p>A new release has been made, version 0.19, which focused upon improving the keyboard and input functions to work with UTF-8.  In addition to these changes there were also minor bugfixes made relating to attachment handling.</p>
  <p>Two new primitives were added in this release, the callback <tt>on_delete_message</tt>, and the <tt>message_offset()</tt> function.  The documentation for <tt>DEBUG</tt> and <tt>VERSION</tt> global-variables was added.</p></dd>
</dd>
<dt>14th August 2013</dt>
<dd>
  <p>A new release has been made, version 0.18, which was focused upon improving MIME handling.  This was achieved by migrating away from <a href="http://www.codesink.org/mimetic_mime_library.html">mimetic</a>, instead using <a href="http://spruce.sourceforge.net/gmime/">GMime</a> for all MIME parsing, and manipulation.</p>
  <p>The release also features several new primitives: <tt>body()</tt>, <tt>index_offset()</tt>, <tt>history_file()</tt>, <tt>maildir_offset()</tt>, &amp; <tt>on_mode_change()</tt>.</p>
  <p>Two existing filters <span class="tt">msg_filter</span>, and <span class="tt">message_filter</span> were renamed.</p>
</dd>
<dt>9th August 2013</dt>
<dd><p>A new release has been made, version 0.17, which features several significant bugfixes relating to message-parsing.   We've introduced the new primitives <tt>is_maildir()</tt>, <tt>create_maildir()</tt>, updated the <tt>msg()</tt> primitive to display more types and updated the TAB-completion code to allow you to <a href="/faq/technical/">disable case-insensitivy</a>.</p></dd>
<dt>4th August 2013</dt>
<dd><p>A new release has been made, version 0.16, which features a complete overhaul of the TAB-completion support and adds several new hooks and primitives; <tt>on_message_aborted()</tt>, <tt>on_edit_message()</tt>, <tt>on_send_message()</tt>, <tt>on_message_parse()</tt>, <tt>stuff()</tt>, and <tt>completion_chars</tt>.</p></dd>
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
