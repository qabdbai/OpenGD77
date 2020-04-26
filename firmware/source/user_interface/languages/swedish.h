/* -*- coding: windows-1252-unix; -*- */
/*
 * Copyright (C)2019 Roger Clark. VK3KYY / G4KYF
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
/*
 * Translators: SA6CCZ
 *
 *
 * Rev: 1
 */
#ifndef USER_INTERFACE_LANGUAGES_SWEDISH_H_
#define USER_INTERFACE_LANGUAGES_SWEDISH_H_
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
const stringsTable_t swedishLanguage =
{
.LANGUAGE_NAME 			= "Svenska",
.language				= "Språk",
.menu					= "Meny",
.credits				= "Krediter",
.zone					= "Zon",
.rssi					= "RSSI",
.battery				= "Batteri",
.contacts				= "Kontakter",
.firmware_info			= "Firmware info",
.last_heard				= "Hört sist",
.options				= "Inställningar",
.display_options		= "Skärminställning",
.sound_options			= "Ljudinställning", // MaxLen: 16
.channel_details		= "Kanal detaljer",
.new_contact			= "Ny Kontakt",
.new_channel			= "Ny kanal", // MaxLen: 16, leave room for a space and four channel digits after
.contact_list			= "Kontakt lista",
.hotspot_mode			= "Hotspot mode",
.contact_details		= "Kontakt Detaljer",
.built					= "Version",
.zones					= "Zoner",
.keypad					= "Tangentbord",
.ptt					= "PTT",
.locked					= "Låst",
.press_blue_plus_star	= "Tryck Blå + *",
.to_unlock				= "Läs upp",
.unlocked				= "Upplåst",
.power_off				= "Stänger ner...",
.error					= "MISSLYCKAS",
.rx_only				= "Rx bara",
.out_of_band			= "Utifrån FRQ",
.timeout				= "TIDAVBROTT",
.tg_entry				= "TG inträde",
.pc_entry				= "PC inträde",
.user_dmr_id			= "Användare DMR ID",
.contact 				= "Kontakt",
.accept_call			= "Mottag anrop?",
.private_call			= "Privat anrop",
.squelch				= "Squelch",
.quick_menu 			= "Quick menu",
.filter					= "Filter",
.all_channels			= "Alla kanaler",
.gotoChannel			= "Goto",
.scan					= "Skan",
.channelToVfo			= "Kanal --> VFO",
.vfoToChannel			= "VFO --> Kanal",
.vfoToNewChannel		= "VFO --> Ny Kanal", // MaxLen: 16
.group					= "Grupp",
.private				= "Privat",
.all					= "Alla",
.type					= "Slag",
.timeSlot				= "Timeslot",
.none					= "Ingen",
.contact_saved			= "Kontakt sparade",
.duplicate				= "Duplikat",
.tg						= "TG",
.pc						= "PC",
.ts						= "TS",
.mode					= "Läge",
.colour_code			= "Color Code",
.n_a					= "N/A",
.bandwidth				= "Bandbredd",
.stepFreq				= "Step",
.tot					= "TOT",
.off					= "Av",
.zone_skip				= "Zone skip",
.all_skip				= "Alla skip",
.yes					= "Ja",
.no						= "Nej",
.rx_group				= "Rx grupp",
.on						= "På",
.timeout_beep			= "Tidavbrott bip",
.factory_reset			= "Fabriksinst",
.calibration			= "Justering",
.band_limits			= "�ppna FRQ",
.beep_volume			= "Pip vol",
.dmr_mic_gain			= "DMR mic",
.fm_mic_gain			= "FM mic", // MaxLen: 16 (with ':' + 0..31)
.key_long				= "Anrop lång ",
.key_repeat				= "Anrop rpt",
.dmr_filter_timeout		= "Filter tid",
.brightness				= "Ljus styrke",
.brightness_off			= "Minst ljusniv�",
.contrast				= "Kontrast",
.colour_invert			= "F�rg:Omv�nt",
.colour_normal			= "F�rg:Normal",
.backlight_timeout		= "Timeout",
.scan_delay				= "Skanfördröjning",
.YES					= "JA",
.NO						= "NEJ",
.DISMISS				= "AVFÄRDA",
.scan_mode				= "Skanläge",
.hold					= "Hold",
.pause					= "Pause",
.empty_list				= "Tom List",
.delete_contact_qm			= "Ta bort kontakt?",
.contact_deleted			= "kontakt tagit bort",
.contact_used				= "Kontakt användade",
.in_rx_group				= "i RX grupp",
.select_tx				= "Välj TX",
.edit_contact				= "Redigera kontakt",
.delete_contact				= "Ta bort kontakt",
.group_call				= "Grupp anrop",
.all_call				= "Alla anrop",
.tone_scan				= "Tone skan",//// MaxLen: 16
.cc_scan				= "CC skan",//// MaxLen: 16
.low_battery			= "LÅG BATTERI !!!",//// MaxLen: 16
.Auto					= "Auto", // MaxLen 16 (with .mode + ':')
.manual					= "Manual",  // MaxLen 16 (with .mode + ':')
.ptt_toggle				= "PTT toggle", // MaxLen 16 (with ':' + .on or .off)
.private_call_handling			= "Handle PC", // MaxLen 16 (with ':' + .on ot .off)
.stop					= "Stopp", // Maxlen 16 (with ':' + .scan_mode)
.one_line				= "1 linj", // MaxLen 16 (with ':' + .contact)
.two_lines				= "2 linjar", // MaxLen 16 (with ':' + .contact)
.priority_order				= "Order", // MaxLen 16 (with ':' + 'Cc/DB/TA')
.dmr_beep				= "DMR pip", // MaxLen 16 (with ':' + .star/.stop/.both/.none)
.start					= "Börja", // MaxLen 16 (with ':' + .dmr_beep)
.both					= "Båda" // MaxLen 16 (with ':' + .dmr_beep)
};
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
#endif /* USER_INTERFACE_LANGUAGES_SWEDISH_H_ */
