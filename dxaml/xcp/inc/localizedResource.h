// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once
// NB: Make sure that the numbers in this file don't overlap with the numbers in nonLocalizedResource.h -
// one use case of the latter file is to contain strings that are under a Velocity feature and which
// should not yet be localized, but will likely need to be localized in the future.  That becomes a lot
// more difficult if the numbers must be changed.

#define TEXT_CONTEXT_MENU_CUT                   5034
#define TEXT_CONTEXT_MENU_COPY                  5035
#define TEXT_CONTEXT_MENU_PASTE                 5036
#define TEXT_CONTEXT_MENU_UNDO                  5037
#define TEXT_CONTEXT_MENU_REDO                  5038
#define TEXT_CONTEXT_MENU_SELECT_ALL            5039

#define TEXT_TOGGLESWITCH_ON                    5041
#define TEXT_TOGGLESWITCH_OFF                   5042

#define TEXT_MEDIA_AUDIO_TRACK_UNTITLED                 5077
#define TEXT_MEDIA_AUDIO_TRACK_SELECTED                 5078

#define TEXT_PASSWORDBOX_SHOW_PASSWORD                  5088

#define TEXT_MEDIA_CC_OFF                               5099

#define TEXT_HUB_SEE_MORE                               5102

#define TEXT_CALENDARDATEPICKER_DEFAULT_PLACEHOLDER_TEXT    5105

#define TEXT_HUB_SEE_LESS                               5109

#define TEXT_MEDIA_AUDIO_TRACK_SEPARATOR                5112

#include <ColorNamesLocalizedResource.h>

#define KEYBOARD_ACCELERATOR_TEXT_JOIN                  5159
#define KEYBOARD_ACCELERATOR_TEXT_TOOLTIP               5160


#define UIA_AP_BUTTON                           5200
#define UIA_AP_CALENDAR                         5201
#define UIA_AP_CHECKBOX                         5202
#define UIA_AP_COMBOBOX                         5203
#define UIA_AP_EDIT                             5204
#define UIA_AP_HYPERLINK                        5205
#define UIA_AP_IMAGE                            5206
#define UIA_AP_LISTITEM                         5207
#define UIA_AP_LIST                             5208
#define UIA_AP_MENU                             5209
#define UIA_AP_MENUBAR                          5210
#define UIA_AP_MENUITEM                         5211
#define UIA_AP_PROGRESSBAR                      5212
#define UIA_AP_RADIOBUTTON                      5213
#define UIA_AP_SCROLLBAR                        5214
#define UIA_AP_SLIDER                           5215
#define UIA_AP_SPINNER                          5216
#define UIA_AP_STATUSBAR                        5217
#define UIA_AP_TAB                              5218
#define UIA_AP_TABITEM                          5219
#define UIA_AP_TEXT                             5220
#define UIA_AP_TOOLBAR                          5221
#define UIA_AP_TOOLTIP                          5222
#define UIA_AP_TREE                             5223
#define UIA_AP_TREEITEM                         5224
#define UIA_AP_CUSTOM                           5225
#define UIA_AP_GROUP                            5226
#define UIA_AP_THUMB                            5227
#define UIA_AP_DATAGRID                         5228
#define UIA_AP_DATAITEM                         5229
#define UIA_AP_DOCUMENT                         5230
#define UIA_AP_SPLITBUTTON                      5231
#define UIA_AP_WINDOW                           5232
#define UIA_AP_PANE                             5233
#define UIA_AP_HEADER                           5234
#define UIA_AP_HEADERITEM                       5235
#define UIA_AP_TABLE                            5236
#define UIA_AP_TITLEBAR                         5237
#define UIA_AP_SEPARATOR                        5238
#define UIA_AP_SEMANTICZOOM                     5239
#define UIA_AP_TOGGLESWITCH                     5240
#define UIA_DRAG_ITEM                           5241
#define UIA_DRAG_ITEMS_COUNT                    5242
#define UIA_DRAG_CANCEL_DRAGGING                5243
#define UIA_DRAG_PLACE_BETWEEN                  5244
#define UIA_DRAG_AFTER                          5245
#define UIA_DRAG_BEFORE                         5246
#define UIA_DRAG_PLACE_3                        5247
#define UIA_DRAG_PLACE_ITEM                     5248
#define UIA_DRAG_MOVE                           5249
#define UIA_FLIPVIEW_NEXT                       5250
#define UIA_FLIPVIEW_PREVIOUS                   5251
#define UIA_MEDIA_PLAY                          5252
#define UIA_MEDIA_PAUSE                         5253
#define UIA_MEDIA_TIME_ELAPSED                  5254
#define UIA_MEDIA_TIME_REMAINING                5256
#define UIA_MEDIA_DOWNLOAD_PROGRESS             5259
#define UIA_MEDIA_BUFFERING_PROGRESS            5260
#define UIA_MEDIA_SEEK                          5261
#define UIA_MEDIA_MUTE                          5262
#define UIA_MEDIA_VOLUME                        5263
#define UIA_MEDIA_ERROR                         5264
#define UIA_DATEPICKER_DAY                      5265
#define UIA_DATEPICKER_MONTH                    5266
#define UIA_DATEPICKER_YEAR                     5267
#define UIA_TIMEPICKER_HOUR                     5268
#define UIA_TIMEPICKER_MINUTE                   5269
#define UIA_TIMEPICKER_PERIOD                   5270
#define UIA_AP_DATEPICKER                       5271
#define UIA_AP_TIMEPICKER                       5272
#define UIA_POPUP_NAME                          5273
#define UIA_LIGHTDISMISS_NAME                   5274
#define UIA_MEDIA_FULLSCREEN                    5275
#define UIA_MEDIA_EXIT_FULLSCREEN               5276
#define UIA_MEDIA_AUDIO_SELECTION               5277
#define UIA_AP_APPBAR                           5280
#define UIA_SCROLLBAR_VERTICAL                  5281
#define UIA_SCROLLBAR_HORIZONTAL                5282
#define UIA_TEXTBOX_DELETE                      5286
#define UIA_MEDIA_CC_SELECTION                  5287
#define UIA_MEDIA_PLAYBACKRATE                  5288
#define UIA_MEDIA_FASTFORWARD                   5289
#define UIA_MEDIA_REWIND                        5290
#define UIA_MEDIA_STOP                          5291
#define UIA_WINDOWED_POPUP_HOST                 5292
#define UIA_SCROLLBAR_HORIZONTALLARGEINCREASE   5293
#define UIA_SCROLLBAR_HORIZONTALSMALLINCREASE   5294
#define UIA_SCROLLBAR_HORIZONTALLARGEDECREASE   5295
#define UIA_SCROLLBAR_HORIZONTALSMALLDECREASE   5296
#define UIA_SCROLLBAR_HORIZONTALTHUMB           5297
#define UIA_SCROLLBAR_VERTICALALLARGEINCREASE   5298
#define UIA_SCROLLBAR_VERTICALSMALLINCREASE     5299
#define UIA_SCROLLBAR_VERTICALLARGEDECREASE     5300
#define UIA_SCROLLBAR_VERTICALSMALLDECREASE     5301
#define UIA_SCROLLBAR_VERTICALTHUMB             5302
#define UIA_MEDIA_CAST                          5304
#define UIA_MORE_BUTTON                         5305
#define UIA_MEDIA_ASPECTRATIO                   5306
#define UIA_NAME_DATEPICKER                     5307
#define UIA_NAME_TIMEPICKER                     5308
#define UIA_DRAG_DROPINTO                       5309
#define UIA_MEDIA_SKIPBACKWARD                  5310
#define UIA_MEDIA_SKIPFORWARD                   5320
#define UIA_MEDIA_NEXTRACK                      5321
#define UIA_MEDIA_PREVIOUSTRACK                 5322
#define UIA_MEDIA_FASTFORWARD_2X                5323
#define UIA_MEDIA_FASTFORWARD_4X                5324
#define UIA_MEDIA_FASTFORWARD_8X                5325
#define UIA_MEDIA_FASTFORWARD_16X               5326
#define UIA_MEDIA_REWIND_2X                     5327
#define UIA_MEDIA_REWIND_4X                     5328
#define UIA_MEDIA_REWIND_8X                     5329
#define UIA_MEDIA_REWIND_16X                    5330
#define UIA_AUTOSUGGESTBOX_QUERY                5331
#define UIA_LESS_BUTTON                         5332
#define UIA_PASSWORDBOX_REVEAL                  5333
#define UIA_PASSWORDBOX_REVEAL_ACCELERATORKEY   5334
#define UIA_AP_APPBAR_BUTTON                    5335
#define UIA_AP_APPBAR_TOGGLEBUTTON              5336
#define UIA_AP_MEDIAPLAYERELEMENT               5338
#define UIA_MEDIA_REPEAT_NONE                   5339
#define UIA_MEDIA_REPEAT_ONE                    5340
#define UIA_MEDIA_REPEAT_ALL                    5341
#define UIA_MEDIA_UNMUTE                        5342
#define UIA_AP_FLIPVIEW                         5343

#define AG_E_MEDIA_CONTROLS_LONG_ERR_ABORTED_VIDEO           5349
#define AG_E_MEDIA_CONTROLS_LONG_ERR_NETWORK_VIDEO           5350
#define AG_E_MEDIA_CONTROLS_LONG_ERR_DECODE_VIDEO            5352
#define AG_E_MEDIA_CONTROLS_LONG_ERR_SRC_NOT_SUPPORTED_VIDEO 5353
#define AG_E_MEDIA_CONTROLS_LONG_ERR_DEFAULT                 5354
#define AG_E_MEDIA_CONTROLS_LONG_ERR_ABORTED_AUDIO           5355
#define AG_E_MEDIA_CONTROLS_LONG_ERR_NETWORK_AUDIO           5356
#define AG_E_MEDIA_CONTROLS_LONG_ERR_DECODE_AUDIO            5357
#define AG_E_MEDIA_CONTROLS_LONG_ERR_SRC_NOT_SUPPORTED_AUDIO 5358

#define UIA_PROGRESSRING_BUSY                              5359
#define UIA_PROGRESSRING_NOTBUSY                           5360

#define TEXT_VK_A 5361
#define TEXT_VK_ACCEPT 5362
#define TEXT_VK_ADD 5363
#define TEXT_VK_APPLICATION 5364
#define TEXT_VK_B 5365
#define TEXT_VK_BACK 5366
#define TEXT_VK_C 5367
#define TEXT_VK_CANCEL 5368
#define TEXT_VK_CAPITALLOCK 5369
#define TEXT_VK_CLEAR 5370
#define TEXT_VK_CONTROL 5371
#define TEXT_VK_CONVERT 5372
#define TEXT_VK_D 5373
#define TEXT_VK_DECIMAL 5374
#define TEXT_VK_DELETE 5375
#define TEXT_VK_DIVIDE 5376
#define TEXT_VK_DOWN 5377
#define TEXT_VK_E 5378
#define TEXT_VK_END 5379
#define TEXT_VK_ENTER 5380
#define TEXT_VK_ESCAPE 5381
#define TEXT_VK_EXECUTE 5382
#define TEXT_VK_F 5383
#define TEXT_VK_F1 5384
#define TEXT_VK_F10 5385
#define TEXT_VK_F11 5386
#define TEXT_VK_F12 5387
#define TEXT_VK_F13 5388
#define TEXT_VK_F14 5389
#define TEXT_VK_F15 5390
#define TEXT_VK_F16 5391
#define TEXT_VK_F17 5392
#define TEXT_VK_F18 5393
#define TEXT_VK_F19 5394
#define TEXT_VK_F2 5395
#define TEXT_VK_F20 5396
#define TEXT_VK_F21 5397
#define TEXT_VK_F22 5398
#define TEXT_VK_F23 5399
#define TEXT_VK_F24 5400
#define TEXT_VK_F3 5401
#define TEXT_VK_F4 5402
#define TEXT_VK_F5 5403
#define TEXT_VK_F6 5404
#define TEXT_VK_F7 5405
#define TEXT_VK_F8 5406
#define TEXT_VK_F9 5407
#define TEXT_VK_FAVORITES 5408
#define TEXT_VK_FINAL 5409
#define TEXT_VK_G 5410
#define TEXT_VK_GAMEPADA 5411
#define TEXT_VK_GAMEPADB 5412
#define TEXT_VK_GAMEPADDPADDOWN 5413
#define TEXT_VK_GAMEPADDPADLEFT 5414
#define TEXT_VK_GAMEPADDPADRIGHT 5415
#define TEXT_VK_GAMEPADDPADUP 5416
#define TEXT_VK_GAMEPADLEFTSHOULDER 5417
#define TEXT_VK_GAMEPADLEFTTHUMBSTICKBUTTON 5418
#define TEXT_VK_GAMEPADLEFTTHUMBSTICKDOWN 5419
#define TEXT_VK_GAMEPADLEFTTHUMBSTICKLEFT 5420
#define TEXT_VK_GAMEPADLEFTTHUMBSTICKRIGHT 5421
#define TEXT_VK_GAMEPADLEFTTHUMBSTICKUP 5422
#define TEXT_VK_GAMEPADLEFTTRIGGER 5423
#define TEXT_VK_GAMEPADMENU 5424
#define TEXT_VK_GAMEPADRIGHTSHOULDER 5425
#define TEXT_VK_GAMEPADRIGHTTHUMBSTICKBUTTON 5426
#define TEXT_VK_GAMEPADRIGHTTHUMBSTICKDOWN 5427
#define TEXT_VK_GAMEPADRIGHTTHUMBSTICKLEFT 5428
#define TEXT_VK_GAMEPADRIGHTTHUMBSTICKRIGHT 5429
#define TEXT_VK_GAMEPADRIGHTTHUMBSTICKUP 5430
#define TEXT_VK_GAMEPADRIGHTTRIGGER 5431
#define TEXT_VK_GAMEPADVIEW 5432
#define TEXT_VK_GAMEPADX 5433
#define TEXT_VK_GAMEPADY 5434
#define TEXT_VK_GOBACK 5435
#define TEXT_VK_GOFORWARD 5436
#define TEXT_VK_GOHOME 5437
#define TEXT_VK_H 5438
#define TEXT_VK_HANGUL 5439
#define TEXT_VK_HANJA 5440
#define TEXT_VK_HELP 5441
#define TEXT_VK_HOME 5442
#define TEXT_VK_I 5443
#define TEXT_VK_INSERT 5444
#define TEXT_VK_J 5445
#define TEXT_VK_JUNJA 5446
#define TEXT_VK_K 5447
// These VKs evaluate to the same enum value as Hangul and Hanja, respectively,
// as they refer to the same concept, just in Japanese instead of Korean.
// Because of that, we can't give them their own key string representation.
//#define TEXT_VK_KANA 5439
//#define TEXT_VK_KANJI 5440
#define TEXT_VK_L 5448
#define TEXT_VK_LEFT 5449
#define TEXT_VK_LEFTBUTTON 5450
#define TEXT_VK_M 5451
#define TEXT_VK_MENU 5452
#define TEXT_VK_MIDDLEBUTTON 5453
#define TEXT_VK_MODECHANGE 5454
#define TEXT_VK_MULTIPLY 5455
#define TEXT_VK_N 5456
#define TEXT_VK_NAVIGATIONACCEPT 5457
#define TEXT_VK_NAVIGATIONCANCEL 5458
#define TEXT_VK_NAVIGATIONDOWN 5459
#define TEXT_VK_NAVIGATIONLEFT 5460
#define TEXT_VK_NAVIGATIONMENU 5461
#define TEXT_VK_NAVIGATIONRIGHT 5462
#define TEXT_VK_NAVIGATIONUP 5463
#define TEXT_VK_NAVIGATIONVIEW 5464
#define TEXT_VK_NONCONVERT 5465
#define TEXT_VK_NONE 5466
#define TEXT_VK_NUMBER0 5467
#define TEXT_VK_NUMBER1 5468
#define TEXT_VK_NUMBER2 5469
#define TEXT_VK_NUMBER3 5470
#define TEXT_VK_NUMBER4 5471
#define TEXT_VK_NUMBER5 5472
#define TEXT_VK_NUMBER6 5473
#define TEXT_VK_NUMBER7 5474
#define TEXT_VK_NUMBER8 5475
#define TEXT_VK_NUMBER9 5476
#define TEXT_VK_NUMBERKEYLOCK 5477
#define TEXT_VK_NUMBERPAD0 5478
#define TEXT_VK_NUMBERPAD1 5479
#define TEXT_VK_NUMBERPAD2 5480
#define TEXT_VK_NUMBERPAD3 5481
#define TEXT_VK_NUMBERPAD4 5482
#define TEXT_VK_NUMBERPAD5 5483
#define TEXT_VK_NUMBERPAD6 5484
#define TEXT_VK_NUMBERPAD7 5485
#define TEXT_VK_NUMBERPAD8 5486
#define TEXT_VK_NUMBERPAD9 5487
#define TEXT_VK_O 5488
#define TEXT_VK_P 5489
#define TEXT_VK_PAGEDOWN 5490
#define TEXT_VK_PAGEUP 5491
#define TEXT_VK_PAUSE 5492
#define TEXT_VK_PRINT 5493
#define TEXT_VK_Q 5494
#define TEXT_VK_R 5495
#define TEXT_VK_REFRESH 5496
#define TEXT_VK_RIGHT 5497
#define TEXT_VK_RIGHTBUTTON 5498
#define TEXT_VK_S 5499
#define TEXT_VK_SCROLL 5500
#define TEXT_VK_SEARCH 5501
#define TEXT_VK_SELECT 5502
#define TEXT_VK_SEPARATOR 5503
#define TEXT_VK_SHIFT 5504
#define TEXT_VK_SLEEP 5505
#define TEXT_VK_SNAPSHOT 5506
#define TEXT_VK_SPACE 5507
#define TEXT_VK_STOP 5508
#define TEXT_VK_SUBTRACT 5509
#define TEXT_VK_T 5510
#define TEXT_VK_TAB 5511
#define TEXT_VK_U 5512
#define TEXT_VK_UP 5513
#define TEXT_VK_V 5514
#define TEXT_VK_W 5515
#define TEXT_VK_WINDOWS 5516
#define TEXT_VK_X 5517
#define TEXT_VK_XBUTTON1 5518
#define TEXT_VK_XBUTTON2 5519
#define TEXT_VK_Y 5520
#define TEXT_VK_Z 5521


#define UIA_AP_CALENDARDATEPICKER 5522


#define UIA_MEDIA_MINIVIEW 5526
#define UIA_MEDIA_EXIT_MINIVIEW 5527

#define TEXT_COMMAND_LABEL_CUT 5528
#define TEXT_COMMAND_LABEL_COPY 5529
#define TEXT_COMMAND_LABEL_PASTE 5530
#define TEXT_COMMAND_LABEL_SELECTALL 5531
#define TEXT_COMMAND_LABEL_DELETE 5532
#define TEXT_COMMAND_LABEL_SHARE 5533
#define TEXT_COMMAND_LABEL_SAVE 5534
#define TEXT_COMMAND_LABEL_OPEN 5535
#define TEXT_COMMAND_LABEL_CLOSE 5536
#define TEXT_COMMAND_LABEL_PAUSE 5537
#define TEXT_COMMAND_LABEL_PLAY 5538
#define TEXT_COMMAND_LABEL_STOP 5539
#define TEXT_COMMAND_LABEL_FORWARD 5540
#define TEXT_COMMAND_LABEL_BACKWARD 5541
#define TEXT_COMMAND_LABEL_UNDO 5542
#define TEXT_COMMAND_LABEL_REDO 5543
#define TEXT_COMMAND_DESCRIPTION_CUT 5544
#define TEXT_COMMAND_DESCRIPTION_COPY 5545
#define TEXT_COMMAND_DESCRIPTION_PASTE 5546
#define TEXT_COMMAND_DESCRIPTION_SELECTALL 5547
#define TEXT_COMMAND_DESCRIPTION_DELETE 5548
#define TEXT_COMMAND_DESCRIPTION_SHARE 5549
#define TEXT_COMMAND_DESCRIPTION_SAVE 5550
#define TEXT_COMMAND_DESCRIPTION_OPEN 5551
#define TEXT_COMMAND_DESCRIPTION_CLOSE 5552
#define TEXT_COMMAND_DESCRIPTION_PAUSE 5553
#define TEXT_COMMAND_DESCRIPTION_PLAY 5554
#define TEXT_COMMAND_DESCRIPTION_STOP 5555
#define TEXT_COMMAND_DESCRIPTION_FORWARD 5556
#define TEXT_COMMAND_DESCRIPTION_BACKWARD 5557
#define TEXT_COMMAND_DESCRIPTION_UNDO 5558
#define TEXT_COMMAND_DESCRIPTION_REDO 5559
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_CUT 5560
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_COPY 5561
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_PASTE 5562
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_SELECTALL 5563
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_SAVE 5564
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_OPEN 5565
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_CLOSE 5566
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_UNDO 5567
#define TEXT_COMMAND_KEYBOARDACCELERATORKEY_REDO 5568


#define UIA_AP_PROGRESSRING 5570


#define TEXT_DATEPICKER_DAY_PLACEHOLDER 5574
#define TEXT_DATEPICKER_MONTH_PLACEHOLDER 5575
#define TEXT_DATEPICKER_YEAR_PLACEHOLDER 5576
#define TEXT_TIMEPICKER_HOUR_PLACEHOLDER 5577
#define TEXT_TIMEPICKER_MINUTE_PLACEHOLDER 5578
#define TEXT_TIMEPICKER_PERIOD_PLACEHOLDER 5579

#define TEXT_SPELLCHECK_IGNORE 5580
#define TEXT_SPELLCHECK_STOP_CORRECTING 5581
#define TEXT_SPELLCHECK_ADD_TO_DICTIONARY 5582
#define TEXT_SPELLCHECK_DELETE_REPEATED_WORD 5583

#define TEXT_CARETBROWSING_DIALOG_TURNON_TITLE 5584
#define TEXT_CARETBROWSING_DIALOG_TURNOFF_TITLE 5585
#define TEXT_CARETBROWSING_DIALOG_CONTENT 5586
#define TEXT_CARETBROWSING_DIALOG_CHECKBOX 5587
#define TEXT_CARETBROWSING_DIALOG_YES 5590
#define TEXT_CARETBROWSING_DIALOG_NO 5591

#define TEXT_TOOLTIP_MINIMIZE 5592
#define TEXT_TOOLTIP_MAXIMIZE 5593
#define TEXT_TOOLTIP_CLOSE 5594
#define TEXT_TOOLTIP_RESTORE 5595

#define TEXT_VK_IMEON 5596
#define TEXT_VK_IMEOFF 5597

