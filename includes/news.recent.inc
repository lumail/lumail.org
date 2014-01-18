  <dl>
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
  </dl>
 <p class="right"><a href="/news/">Archived news</a> is available for posterity.</p>
 <p>&nbsp;</p>
