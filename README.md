**cTiVo** is a free Mac application to download shows from your TiVo (Bolt, Roamio, Premiere, HD, S3, or S2 devices) and convert them to many popular formats and devices. Its goal is to be extremely simple to set up and use, taking full advantage of the Mac OS, but very flexible. 

cTiVo provides complete hands-off operation: once you choose or subscribe to your shows, everything else is automated. For example, after you've set it up, every morning, you will find all your favorite shows from your TiVos loaded onto your iPhone or iPad. And although using cTiVo is very easy, you also have complete control over what it does.

cTiVo was inspired by the great work done on iTiVo, but written in Cocoa/Objective C for better performance and  compatibility. Current or former users of iTiVo will find a detailed comparison and upgrade path described in [iTivo Users](wiki/iTiVoUsers.md).

##Automatic Download and Conversions
  * Auto-discovery of all your TiVos (using Bonjour).
  * Drag/drop and contextual menus for ease of use; submit, reschedule, delete all by dragging the shows.
  * Download queue for batch processing, restored on restart.
  * 'Subscriptions' to your regular shows: automatically downloading shows whenever new episodes are available.
  * Even subscribe to "ALL" shows, including suggestions or not
  * Removes commercials from downloaded shows, or just mark for quick skip in player.
  * Extracts closed caption info (adjusted for removal of commercials); adds to MPEG and creates subtitle files.
  * Adds episode-specific artwork from theTVDB and theMovieDB (as available).
  * Copies shows to iTunes with all data about the show (metadata) transferred as well.
  * Generates metadata appropriate for use by tools such as pyTivo and Plex.
  * Performs an 'iTunes sync' to your device when the download is completed. 
  * Maximum parallel processing, including downloading from multiple TiVos simultaneously.
  * Wide selection of predefined video Formats.
  * Target devices include iPhone, iPad, AppleTV, Xbox, YouTube.
  * Imports old iTiVo preferences, including subscriptions and Media Access Key.

##Complete Control Over Process
  * Change conversion formats for each download or subscription.
  * Change commercial handling/captioning/metadata/iTunes submittal for each download or subscription.
  * Change download directories for each download.
  * Create custom Formats with completely customizable encoder options for multiple formats.
  * Show only the encoding formats you actually use.
  * Specify filename formats for compatability with Plex or other media systems.
  * Support for different encoders, including HandBrake, mencoder, ffmpeg, Elgato.
  * Scheduling of when the queue will be processed.
  * Options to prevent sleep or quitting until processing complete.
  * Access remote TiVos (requires network reconfiguration).
  * Folders optionally created for each series.

##Information About Your Shows
  * Customizable columns about shows, downloads and subscriptions; show exactly what you want to see and no more.
  * Detailed info available for each show.
  * Contextual menus to play downloaded video, show in Finder, etc.
  * See which shows have already been downloaded with Spotlight tracking of shows already downloaded by cTiVo.
  * Filter which shows are seen by keywords or TiVo.
  * Show/Hide copy-protected shows and TiVo suggestions.
  * Growl or Apple notifications when downloads complete.

## 2.4 features

*   MP4 metadata integration with PyTiVo (no TXT files needed)
*   Performance monitoring.
*   Simplified top bar of window
*   New Drag/Drop options
*   New Status column for Download table DL Stage to allow sorting by stage of downloads
*   Added access to TheMovieDB posters for movies
*   Option to choose to “trust” TVDB’s episode numbers over TiVo's
*   Better background transfer management and Rate limiting for TVDB
*   Show Logs command; many other logging improvements

##To install:

Download the [cTiVo application](https://github.com/dscottbuch/cTiVo/releases), and drag it to your Applications Folder.

cTiVo is fully compatible with OS X El Capitan (10.11) back through Lion (10.7); not compatible with Snow Leopard or earlier.

*cTiVo* is free to use, and the source is available for anyone to browse and contribute to. Please let us know of any problems/suggestions at [Issues](https://github.com/dscottbuch/cTiVo/releases).
