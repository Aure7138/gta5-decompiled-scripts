#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 16;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	char* sLocal_158 = NULL;
	int iLocal_159[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_176 = 0;
	float fLocal_177 = 0f;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	float fLocal_187 = 0f;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	bool bLocal_192 = 0;
	var uLocal_193 = 0;
	struct<22> Local_194 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 2;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 2;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 2;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = -1027211264;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	char* sLocal_268 = NULL;
	char cLocal_269[24] = "";
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	char cLocal_275[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	char cLocal_281[24] = "";
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 12;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 1065353216;
	struct<9> Local_985 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	struct<263> Local_996 = { 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 32, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0 } ;
	var uLocal_1259 = 0;
	struct<5> Local_1260[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_156 = joaat("prop_ld_ferris_wheel");
	iLocal_157 = joaat("prop_ferris_car_01");
	sLocal_158 = "MISSFINALE_C2IG_5";
	fLocal_177 = 2f;
	Local_178 = { -1663.97f, -1126.7f, 30.7f };
	Local_181 = { 0.5f, 0.5f, -1.94f };
	fLocal_187 = 13f;
	iLocal_188 = -1;
	iLocal_189 = -1;
	iLocal_190 = -1;
	iLocal_191 = -1;
	bLocal_192 = true;
	sLocal_268 = "anim@mp_ferris_wheel";
	iLocal_296 = 1;
	bVar0 = unk_0xD95428C8AA1DBBF2();
	if (bVar0)
	{
		if (!func_183(ScriptParam_0))
		{
			func_174();
		}
		func_171();
		unk_0x3DBE2A7AF9E71C82(&Global_68315, 6);
	}
	while (true)
	{
		func_170();
		if (func_162())
		{
			func_174();
		}
		if (((!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1645.555f, -1123.872f, 17.3436f, 300f, 300f, 300f, 0, 1, 0) || func_161()) || unk_0x0971F0C5992C6780()) || (func_156() && !func_154()))
		{
			Local_1260[unk_0x9DCF1243D4AAD942() /*5*/] = 3;
		}
		func_141();
		if (unk_0x61D8FEAF64881CDA(uLocal_287, 3))
		{
			if (!Global_89836.f_1318)
			{
				unk_0xCD27BF29FB9012E2(&uLocal_287, 3);
			}
		}
		switch (func_140(unk_0x9DCF1243D4AAD942()))
		{
			case 0:
				if (func_139() > 0)
				{
					Local_1260[unk_0x9DCF1243D4AAD942() /*5*/] = 1;
				}
				break;
			
			case 1:
				if (func_139() > 1)
				{
					if (func_134())
					{
						Local_1260[unk_0x9DCF1243D4AAD942() /*5*/] = 2;
					}
				}
				break;
			
			case 2:
				if (func_139() == 2)
				{
					func_29();
				}
				break;
			
			case 3:
				if (!func_28(&uLocal_994))
				{
					if (!unk_0x9DBF5ADC61595373())
					{
						func_21(64, 0, 0, 1, 0);
					}
				}
				if (((func_19(&uLocal_994, 3000, 0) || func_18()) || func_17()) || func_13(unk_0xAF65E5A58BE87D95()))
				{
					func_174();
				}
				break;
		}
		if (unk_0x2CCDE625E685C339())
		{
			switch (func_139())
			{
				case 0:
					if (func_11())
					{
						Local_996.f_1 = 1;
					}
					break;
				
				case 1:
					if (func_10())
					{
						Local_996.f_1 = 2;
					}
					break;
				
				case 2:
					func_6();
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	
	if (iLocal_266 == 0)
	{
	}
	if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iLocal_266)))
	{
		uVar1 = unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iLocal_266));
		switch (Local_996.f_0)
		{
			case 0:
				if (unk_0x61D8FEAF64881CDA(Local_1260[iLocal_266 /*5*/].f_2, 4) && !unk_0x61D8FEAF64881CDA(Local_996.f_3[iLocal_266], 1))
				{
					unk_0xCD27BF29FB9012E2(&(Local_996.f_2), 0);
					unk_0xCD27BF29FB9012E2(&(Local_996.f_3[iLocal_266]), 0);
					unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 2);
					iLocal_290 = 30000;
					Local_996.f_0 = 1;
					func_5(&uLocal_288);
					unk_0x3DBE2A7AF9E71C82(&(Local_996.f_3[iLocal_266]), 1);
				}
				if (unk_0x61D8FEAF64881CDA(Local_1260[iLocal_266 /*5*/].f_2, 3) && !unk_0x61D8FEAF64881CDA(Local_996.f_3[iLocal_266], 0))
				{
					iVar0 = func_4(iLocal_266);
					if (iVar0 == -1)
					{
					}
					else
					{
						Local_996.f_197[iLocal_266 /*2*/].f_1 = uVar1;
						Local_996.f_197[iLocal_266 /*2*/] = iVar0;
						Local_996.f_262 = func_2();
						unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 0);
						unk_0x3DBE2A7AF9E71C82(&(Local_996.f_3[iLocal_266]), 0);
					}
				}
				break;
			
			case 1:
				if (unk_0x61D8FEAF64881CDA(Local_996.f_3[iLocal_266], 1))
				{
					unk_0xCD27BF29FB9012E2(&(Local_996.f_3[iLocal_266]), 1);
				}
				break;
		}
	}
	else if ((Local_996.f_3[iLocal_266] != 0 || Local_996.f_197[iLocal_266 /*2*/] != -1) || Local_996.f_197[iLocal_266 /*2*/].f_1 != 0)
	{
		Local_996.f_3[iLocal_266] = 0;
		Local_996.f_197[iLocal_266 /*2*/] = -1;
		Local_996.f_197[iLocal_266 /*2*/].f_1 = 0;
		Local_996.f_262 = func_2();
	}
	iLocal_266++;
	if (iLocal_266 == unk_0x0F0C172200951A9A())
	{
		iLocal_266 = 0;
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = func_3();
	iVar0 = iVar2;
	while (iVar0 != iVar2 || !bVar3)
	{
		if (!bVar3)
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < unk_0x0F0C172200951A9A())
		{
			if (Local_996.f_197[iVar1 /*2*/] == iVar0)
			{
				return iVar1;
			}
			iVar1++;
		}
		iVar0++;
		if (iVar0 == 16)
		{
			iVar0 = 0;
		}
	}
	return -1;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		if (Local_996.f_36[iVar0 /*10*/].f_6 >= Global_2450808)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (Local_996.f_36[0 /*10*/].f_6 >= Global_2450808)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (unk_0x61D8FEAF64881CDA(Local_1260[iParam0 /*5*/].f_2, 0))
		{
			return Local_1260[iParam0 /*5*/].f_3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (iVar0 == 0)
				{
					iVar0 = 1;
				}
				if (!Local_996.f_36[iVar0 /*10*/].f_3 >= 2)
				{
					if (Local_996.f_36[iVar0 /*10*/].f_6 >= Global_2450808)
					{
						if (!Local_996.f_36[iVar0 /*10*/].f_3 > 0 || bVar2)
						{
							return iVar0;
						}
					}
				}
				iVar0++;
			}
			if (!Local_996.f_36[0 /*10*/].f_3 >= 2)
			{
				if (Local_996.f_36[0 /*10*/].f_6 >= Global_2450808)
				{
					if (!Local_996.f_36[0 /*10*/].f_3 > 0 || bVar2)
					{
						return 0;
					}
				}
				else
				{
					return 1;
				}
			}
			if (!bVar2)
			{
				bVar2 = true;
			}
			else
			{
				return -1;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6()
{
	int iVar0;
	int iVar1;
	
	switch (Local_996.f_0)
	{
		case 0:
			break;
		
		case 1:
			if (func_19(&uLocal_288, iLocal_290, 0))
			{
				if (func_9())
				{
					if (Local_996.f_262 != -1)
					{
						iVar1 = Local_996.f_197[Local_996.f_262 /*2*/];
						iVar0 = 0;
						while (iVar0 < 32)
						{
							if (Local_996.f_197[iVar0 /*2*/] == iVar1)
							{
								unk_0xCD27BF29FB9012E2(&(Local_996.f_3[iVar0]), 0);
								unk_0xCD27BF29FB9012E2(&(Local_996.f_3[iVar0]), 1);
								Local_996.f_197[iVar0 /*2*/] = -1;
								Local_996.f_197[iVar0 /*2*/].f_1 = 0;
							}
							iVar0++;
						}
						Local_996.f_197[Local_996.f_262 /*2*/] = -1;
						Local_996.f_197[Local_996.f_262 /*2*/].f_1 = 0;
					}
					if (func_8())
					{
						Local_996.f_262 = func_2();
					}
					else
					{
						Local_996.f_262 = -1;
					}
					if (Local_996.f_262 != -1)
					{
						unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 0);
					}
					unk_0xCD27BF29FB9012E2(&(Local_996.f_2), 3);
					unk_0xCD27BF29FB9012E2(&(Local_996.f_2), 4);
					Local_996.f_0 = 0;
				}
				else
				{
					iLocal_290 = 1000;
					func_5(&uLocal_288);
				}
			}
			else
			{
				if ((30000 - func_7(&uLocal_288, 0, 0)) < 4000)
				{
					unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 4);
				}
				if ((30000 - func_7(&uLocal_288, 0, 0)) < 3000)
				{
					unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 3);
				}
				if (((Local_996.f_262 != -1 && !unk_0x61D8FEAF64881CDA(Local_1260[Local_996.f_262 /*5*/].f_2, 6)) && unk_0x594EB70937EC1486(unk_0x687D51F360787909(Local_996.f_197[Local_996.f_262 /*2*/].f_1), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0)) && unk_0x61D8FEAF64881CDA(Local_996.f_2, 2))
				{
					if (!unk_0x61D8FEAF64881CDA(Local_996.f_2, 1))
					{
						unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 1);
					}
				}
				else if (unk_0x61D8FEAF64881CDA(Local_996.f_2, 1))
				{
					unk_0xCD27BF29FB9012E2(&(Local_996.f_2), 1);
				}
			}
			break;
	}
}

int func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xD95428C8AA1DBBF2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0);
		}
		else
		{
			return unk_0x88702B74B95C046D(unk_0x49BD9731DF21C969(), *uParam0);
		}
	}
	return unk_0x88702B74B95C046D(unk_0xF976C624234A4AA8(), *uParam0);
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0F0C172200951A9A())
	{
		if (Local_996.f_197[iVar0 /*2*/] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	iVar0 = 30;
	while (iVar0 >= 0)
	{
		if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iVar0)))
		{
			if (unk_0x61D8FEAF64881CDA(Local_1260[iVar0 /*5*/].f_2, 9) || unk_0x61D8FEAF64881CDA(Local_1260[iVar0 /*5*/].f_2, 10))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Local_996.f_36[iVar0 /*10*/].f_6 = (((360f / 16f) * IntToFloat(iVar0)) - 21.5f);
		iVar0++;
	}
	Local_996.f_36[0 /*10*/].f_6 = (Local_996.f_36[0 /*10*/].f_6 + 360f);
	return 1;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xAE744CCC666ACB74(iVar0);
		if (func_12(iVar1, 0, 1))
		{
			if (unk_0x594EB70937EC1486(unk_0x687D51F360787909(iVar1), -1662.01f, -1126.869f, 12.6973f, 500f, 500f, 500f, 0, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB832D52B86777A35(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		if (Global_1582048[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_15(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	return func_16(iParam0);
}

bool func_16(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

bool func_17()
{
	return unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_31.f_18, 0);
}

var func_18()
{
	return Global_1315898;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (unk_0xD95428C8AA1DBBF2() && !bParam2)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xF976C624234A4AA8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFACC0E85E40AD425();
			}
			else
			{
				*uParam0 = unk_0x49BD9731DF21C969();
			}
		}
		else
		{
			*uParam0 = unk_0xF976C624234A4AA8();
		}
		uParam0->f_1 = 1;
	}
}

void func_21(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_68067)
		{
			Global_2421967.f_73.f_226[iParam0] = iParam1;
		}
		else
		{
			Global_97173.f_5518.f_226[iParam0] = iParam1;
		}
		Global_31959[iParam0] = iParam2;
		Global_32158[iParam0] = 1;
		func_24(iParam0, bParam3, iParam4, 0);
		func_22(iParam0, iParam1);
	}
}

void func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x5860C94BA023F898("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x5860C94BA023F898("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xBA7E29B25EE2D1D9("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xBA7E29B25EE2D1D9("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_23(0, 0);
			}
			else
			{
				func_23(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x5860C94BA023F898("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x5860C94BA023F898("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x1FF21428E29781B9("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x09692E4714D73176("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x09692E4714D73176("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x09692E4714D73176("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x09692E4714D73176("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_95815, iParam0);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_95815, iParam0);
	}
	Global_95814 = 1;
}

bool func_24(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_27(&Var3, iParam0);
	if (func_25())
	{
		iVar1 = Global_97173.f_5518.f_226[iParam0];
	}
	else
	{
		iVar1 = Global_2421967.f_73.f_226[iParam0];
	}
	iVar2 = Global_32357[iParam0];
	if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x3BA42EA02A10243D(unk_0x3ED5FA3F61EC9E68()) != unk_0x3BA42EA02A10243D("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_31959[iParam0] && unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || unk_0x87AF94EA533AA9EA(unk_0x507DA4994C3D8EBD()))
				{
					if (!unk_0xC2C705ED6124A7C2())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0x9DBF5ADC61595373() && (!unk_0xA4ADA92842355D33() || unk_0x34F66A7928F4DB93() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xB59362C1B4E8772E(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x259C96726C65FE5C(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_33553[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xF5C0693050707613(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("REMOVE_ALL_STATES")) && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xF5C0693050707613(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D(""))
						{
							if (!unk_0x70AE5EB0F832620B(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x601E476BBE5247E8(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_34)) != unk_0x3BA42EA02A10243D(""))
						{
							if (!unk_0x70AE5EB0F832620B(&(Var3.f_34)))
							{
								unk_0x601E476BBE5247E8(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x3BA42EA02A10243D(&(Var3.f_34)) != unk_0x3BA42EA02A10243D(""))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_34)))
							{
								unk_0xF5C0693050707613(&(Var3.f_34));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xF5C0693050707613(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("REMOVE_ALL_STATES")) && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xF5C0693050707613(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D(""))
						{
							if (!unk_0x70AE5EB0F832620B(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x601E476BBE5247E8(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x3BA42EA02A10243D(&(Var3.f_34)) != unk_0x3BA42EA02A10243D(""))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_34)))
							{
								unk_0xF5C0693050707613(&(Var3.f_34));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xF5C0693050707613(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x70AE5EB0F832620B(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xF5C0693050707613(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("REMOVE_ALL_STATES"))
						{
							if (!unk_0x70AE5EB0F832620B(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x601E476BBE5247E8(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_33354[iParam0] = 1;
					Global_33553[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x9C3273B36FEFD46F(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x3BA42EA02A10243D(&(Var3.f_50)) != unk_0x3BA42EA02A10243D(""))
						{
							if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_50)))
							{
								unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D(""))
							{
								if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("REMOVE_ALL_STATES")) && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D(""))
							{
								if (!unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x6D43802190E4B6DC(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D(""))
							{
								if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("REMOVE_ALL_STATES")) && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D(""))
							{
								if (!unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x6D43802190E4B6DC(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[0 /*8*/])) != unk_0x3BA42EA02A10243D(""))
							{
								if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[1 /*8*/])) != unk_0x3BA42EA02A10243D(""))
							{
								if (unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xC42E13CCC0E4D216(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("") && unk_0x3BA42EA02A10243D(&(Var3.f_8[2 /*8*/])) != unk_0x3BA42EA02A10243D("REMOVE_ALL_STATES"))
							{
								if (!unk_0xFF309D90AE93DDE1(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x6D43802190E4B6DC(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x37F4E82E5B10AADF(iVar100);
						}
					}
					Global_33553[iParam0] = 1;
					Global_33354[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x8FE221761D524CFE(Var3, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), 1) < 250f)
					{
						uVar98 = unk_0xCF09B28F3F88F4A2(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x2EAEFE87D100B20F(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0xCE30B2ED864F51C2(uVar98, 3);
								Global_33553[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x9D3DEC1AC03F824C(uVar98) != 6 && unk_0x9D3DEC1AC03F824C(uVar98) != 7) && unk_0x9D3DEC1AC03F824C(uVar98) != 8)
								{
									unk_0xCE30B2ED864F51C2(uVar98, 10);
									Global_33553[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x78EAA9E51EE74647(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xCD27BF29FB9012E2(&(Global_31706[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0xDCFF52D7A029D648(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x3DBE2A7AF9E71C82(&(Global_31706[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32158[iParam0] = 0;
				Global_32357[iParam0] = iVar1;
				if (!func_25())
				{
					if (!Global_32954[iParam0])
					{
						Global_32954[iParam0] = 1;
						Global_33153++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_25()
{
	if (func_26() == -1 || func_26() == 999)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	return Global_24444;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

bool func_28(var uParam0)
{
	return uParam0->f_1;
}

void func_29()
{
	switch (Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_1)
	{
		case 0:
			if (Local_996.f_0 == 1)
			{
				unk_0x4A4C1A1BC79EFE8F(1);
				unk_0xCD27BF29FB9012E2(&uLocal_287, 1);
				unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 4);
				iLocal_267 = 0;
				Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_1 = 1;
			}
			else
			{
				if (unk_0x61D8FEAF64881CDA(Local_996.f_2, 0))
				{
					if (Local_996.f_262 != -1)
					{
						if (Global_2450808 != Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_6)
						{
							func_130();
						}
					}
				}
				else
				{
					func_130();
				}
				if (unk_0x61D8FEAF64881CDA(Local_996.f_3[unk_0x9DCF1243D4AAD942()], 0))
				{
					Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3 = Local_996.f_197[unk_0x9DCF1243D4AAD942() /*2*/];
					if (Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3 != -1)
					{
						if (Global_2450808 != Local_996.f_36[Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3 /*10*/].f_6)
						{
							if (unk_0x61D8FEAF64881CDA(uLocal_287, 0))
							{
								unk_0x4A4C1A1BC79EFE8F(1);
								unk_0xCD27BF29FB9012E2(&uLocal_287, 0);
							}
							if (!unk_0x61D8FEAF64881CDA(uLocal_287, 1))
							{
								if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
								{
									func_129("AMFW_WAIT_OFF", -1);
								}
								else
								{
									func_129("AMFW_WAIT", -1);
								}
								unk_0x3DBE2A7AF9E71C82(&uLocal_287, 1);
							}
						}
						else if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 4))
						{
							unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 4);
							unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 3);
							iLocal_296 = 1;
						}
					}
					else
					{
						unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 3);
						iLocal_296 = 1;
					}
				}
				else if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 8))
				{
					if (((!func_128(0) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) && !unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) && unk_0x9A67DC5FE3A03F32(-1661.95f, -1127.011f, 12.6973f, 1f, 0, 6) == 0)
					{
						if (!func_125())
						{
							if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
							{
								if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0))
								{
									func_124("AMFW_ENTER", Global_262145.f_6092, -1);
									unk_0x3DBE2A7AF9E71C82(&uLocal_287, 0);
									if (unk_0x58FC9C7DF8FE009B(2, 51))
									{
										func_110();
										unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 3);
									}
								}
								else if (unk_0x61D8FEAF64881CDA(uLocal_287, 0))
								{
									unk_0x4A4C1A1BC79EFE8F(1);
									unk_0xCD27BF29FB9012E2(&uLocal_287, 0);
								}
							}
						}
						else if ((unk_0xF976C624234A4AA8() % 1000) < 50)
						{
						}
					}
				}
			}
			func_84();
			break;
		
		case 1:
			if (Local_996.f_0 == 0)
			{
				if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 5) || unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 7))
				{
					func_76();
					func_61(25);
				}
				if (!unk_0x61D8FEAF64881CDA(Local_996.f_3[unk_0x9DCF1243D4AAD942()], 0))
				{
					unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 8);
				}
				unk_0x4A4C1A1BC79EFE8F(1);
				unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 7);
				unk_0xCD27BF29FB9012E2(&uLocal_287, 2);
				unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 11);
				unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 6);
				Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_1 = 0;
				if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
				{
					func_84();
				}
			}
			else
			{
				if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
				{
					if ((Local_996.f_262 != -1 && Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3 != -1) && Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3 == Local_996.f_197[Local_996.f_262 /*2*/])
					{
						if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 7))
						{
							if (!unk_0x61D8FEAF64881CDA(Local_996.f_2, 4))
							{
								func_129("AMFW_GET_OUT", -1);
							}
							func_60(&uLocal_264, 0);
							func_60(&uLocal_193, 0);
							func_59(&Local_194, 0, 1);
							unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 7);
						}
						if (!unk_0x61D8FEAF64881CDA(Local_996.f_2, 3))
						{
							if (unk_0x58FC9C7DF8FE009B(2, 23))
							{
								func_57(func_58(1));
							}
						}
					}
					else
					{
						func_84();
					}
				}
				else if (((!func_128(0) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) && !unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) && unk_0x9A67DC5FE3A03F32(-1661.95f, -1127.011f, 12.6973f, 1f, 0, 6) == 0)
				{
					if (!func_125())
					{
						if (unk_0x61D8FEAF64881CDA(Local_996.f_2, 1))
						{
							if (Local_996.f_197[Local_996.f_262 /*2*/].f_1 == unk_0xAF65E5A58BE87D95())
							{
								if (!unk_0x61D8FEAF64881CDA(Local_996.f_2, 3))
								{
									if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 11))
									{
										func_57(func_58(1));
										unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 11);
									}
								}
							}
						}
						else if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0))
						{
							if ((!unk_0x61D8FEAF64881CDA(Local_996.f_2, 3) && !unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 9)) && Local_996.f_262 != -1)
							{
								if (!Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_3 >= 2)
								{
									if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 8))
									{
										func_129("AMFW_GET_IN", -1);
									}
									else
									{
										func_124("AMFW_GET_IN_P", Global_262145.f_6092, -1);
									}
									if (unk_0x58FC9C7DF8FE009B(0, 23))
									{
										if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 8))
										{
											func_110();
										}
										func_57(func_58(1));
									}
								}
								else if (!unk_0x61D8FEAF64881CDA(uLocal_287, 2))
								{
									func_129("AMFW_CAR_FULL", -1);
									unk_0x3DBE2A7AF9E71C82(&uLocal_287, 2);
								}
							}
						}
					}
					else if ((unk_0xF976C624234A4AA8() % 1000) < 50)
					{
					}
				}
				if (Local_996.f_262 != -1)
				{
					if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 9))
					{
						func_49();
					}
					if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 10))
					{
						func_35();
					}
				}
			}
			break;
	}
	if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
	{
		func_31();
	}
	if (!unk_0x9DBF5ADC61595373())
	{
		unk_0xF5C0693050707613("ferris_finale_Anim");
	}
	func_30();
}

void func_30()
{
	struct<3> Var0;
	
	if (unk_0x1DB23BF4B2FFF9BA(-1666.711f, -1127.518f, 12.6973f, 3f) && (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1666.711f, -1127.518f, 12.6973f, 0.5f, 0.5f, 1f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), -1666.383f, -1126.286f, 12.6973f, 0.5f, 0.5f, 1f, 0, 1, 0)))
	{
		if (!unk_0x61D8FEAF64881CDA(uLocal_287, 5))
		{
			if (((unk_0x000C40D123602BB8(unk_0x507DA4994C3D8EBD()) || unk_0x1048D0AFAF445C32(unk_0x507DA4994C3D8EBD())) || unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD())) || unk_0x2B12BB6C095B3C83(unk_0x507DA4994C3D8EBD()))
			{
				func_5(&uLocal_291);
				unk_0x3DBE2A7AF9E71C82(&uLocal_287, 5);
			}
		}
		else if (func_19(&uLocal_291, 2000, 0))
		{
			if (((unk_0x000C40D123602BB8(unk_0x507DA4994C3D8EBD()) || unk_0x1048D0AFAF445C32(unk_0x507DA4994C3D8EBD())) || unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD())) || unk_0x2B12BB6C095B3C83(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Var0.f_0, Var0.f_1, (Var0.f_2 + 2f), 1, 0, 0, 1);
				unk_0xCD27BF29FB9012E2(&uLocal_287, 5);
			}
		}
	}
}

void func_31()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_128(0))
		{
			func_32(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_32(int iParam0)
{
	if (Global_14551)
	{
		func_34(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_33())
	{
		Global_14393.f_1 = 3;
	}
}

int func_33()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_128(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

void func_35()
{
	StringCopy(&cLocal_281, "exit_player_", 24);
	if (Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4 == 0)
	{
		StringConCat(&cLocal_281, "one", 24);
	}
	else
	{
		StringConCat(&cLocal_281, "two", 24);
	}
	uLocal_294 = unk_0xE9581057DA227F4B(Local_184, 0f, 0f, 0f, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x864A7869C9418424(unk_0x507DA4994C3D8EBD(), uLocal_294, sLocal_268, &cLocal_281, 8f, -8f, 131072, 0, 1148846080, 0);
	unk_0x1CF38F11D5249AB4(uLocal_294);
	unk_0x4A4C1A1BC79EFE8F(1);
	func_45(unk_0xAF65E5A58BE87D95(), 1, 0, 1);
	func_39();
	if (func_38(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xDF75DAAACD32E49E(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x5B97F41A7BE54877(unk_0x507DA4994C3D8EBD(), 1, 1);
		}
	}
	func_37(func_58(0));
	if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xAB5C0FE0C680BC7F("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 6);
	unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 7);
	unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 0);
	unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 5);
	unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 10);
	Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_316 = 0;
	func_36(func_58(1), Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4, 0);
	Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4 = -1;
	unk_0x6C912BA9B35A9F3F(0);
}

void func_36(int iParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 346;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Var0.f_2 = uParam1;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 4, iParam0);
	}
}

void func_37(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 342;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 2, iParam0);
	}
}

bool func_38(var uParam0)
{
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	return !unk_0xE5D56342B0FF1D0D(uParam0);
}

void func_39()
{
	if (Global_1312418.f_1 == 1)
	{
		func_40(0);
		Global_1312418.f_1 = 0;
	}
}

void func_40(int iParam0)
{
	if (func_44())
	{
		if (iParam0 == 1)
		{
			if (Global_2446210.f_4225 == -1)
			{
				Global_2446210.f_4225 = 60000;
			}
			func_43(&(Global_2446210.f_4223), 0, 0);
			if (Global_2446210.f_4228 == -1)
			{
				Global_2446210.f_4228 = 10000;
			}
			func_43(&(Global_2446210.f_4226), 0, 0);
		}
		else
		{
			Global_1312418 = 0;
			func_42();
		}
		if ((!unk_0x0971F0C5992C6780() && !func_41()) && !func_13(unk_0xAF65E5A58BE87D95()))
		{
			Global_971736 = 0;
		}
	}
}

bool func_41()
{
	return Global_2427935.f_708;
}

void func_42()
{
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (!func_44())
		{
			if (func_12(unk_0xAF65E5A58BE87D95(), 1, 1))
			{
				unk_0xEA0F21C3BB415566(unk_0x507DA4994C3D8EBD(), 1);
				unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 342, 0);
				unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 122, 0);
			}
			unk_0xD557CE7EE0E091DC(unk_0xAF65E5A58BE87D95(), 1f);
			unk_0x8BA60D9E3B5CB149(0);
			unk_0x3DD000A6AF075873(1);
			if (Global_1312418.f_1 == 0)
			{
				unk_0x86C8D7FA3535C5CB(0);
			}
		}
		else
		{
			if (func_12(unk_0xAF65E5A58BE87D95(), 1, 1))
			{
				unk_0xEA0F21C3BB415566(unk_0x507DA4994C3D8EBD(), 0);
				unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
				unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 342, 1);
				unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 122, 1);
				unk_0xD557CE7EE0E091DC(unk_0xAF65E5A58BE87D95(), 0.5f);
				if (Global_1312418.f_1 == 0)
				{
					unk_0x86C8D7FA3535C5CB(1);
				}
			}
			unk_0x8BA60D9E3B5CB149(1);
			unk_0x3DD000A6AF075873(0);
		}
	}
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xD95428C8AA1DBBF2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xFACC0E85E40AD425();
		}
		else
		{
			*uParam0 = unk_0x49BD9731DF21C969();
		}
	}
	else
	{
		*uParam0 = unk_0xF976C624234A4AA8();
	}
	uParam0->f_1 = 1;
}

bool func_44()
{
	return Global_1312418;
}

void func_45(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0xBDB6BD580ED1F954())
		{
			unk_0x8311E913E07031CD(0);
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		uVar0 = iParam2;
		unk_0xFAAA53BBE1EEF174(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_154())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xB832D52B86777A35(iParam0) && unk_0x52A84D9C3A400EA8(iParam0))
		{
			uVar23 = unk_0x687D51F360787909(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xD95428C8AA1DBBF2())
				{
					unk_0x341B81CE859F7C97(1);
				}
				else
				{
					unk_0x07E0AE075425AA06(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0xD95428C8AA1DBBF2() && !bVar18)
					{
						unk_0x341B81CE859F7C97(0);
					}
					Global_2413868[iParam0 /*253*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_48(uVar23) && !unk_0xB9D0211AF48761E5(uVar23))
				{
					if (!bVar21)
					{
						unk_0xCC8C6873CFB069A4(uVar23, true, 0);
					}
				}
				if (!unk_0xDF75DAAACD32E49E(uVar23))
				{
					if (!bVar20)
					{
						unk_0x479E7EEEBDEE245D(uVar23, false);
					}
					unk_0x5BA593EA32D0187E(uVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0x479E7EEEBDEE245D(uVar23, false);
				}
				unk_0x6A750A31D18DA81A(uVar23, true);
				unk_0x60D71C675384BFB1(iParam0, 0);
				unk_0x8576187A1C5FF880(uVar23);
				unk_0x6A8A5F1A990BB700(uVar23, 1);
				func_47();
				func_46();
				if (unk_0x09CAFDEAB6242673())
				{
				}
				if (unk_0x9DBF5ADC61595373())
				{
				}
				Global_2413868[iParam0 /*253*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_48(uVar23) && !unk_0xB9D0211AF48761E5(uVar23))
				{
					if (!bVar21)
					{
						unk_0xCC8C6873CFB069A4(uVar23, !bVar14, 0);
					}
					if (!unk_0xDF75DAAACD32E49E(uVar23))
					{
						if (!bVar20)
						{
							unk_0x479E7EEEBDEE245D(uVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x5BA593EA32D0187E(uVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x60D71C675384BFB1(iParam0, 0);
				}
				else
				{
					unk_0x60D71C675384BFB1(iParam0, 1);
				}
				unk_0x6A750A31D18DA81A(uVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0x50CD51844ED01084(uVar23) && !unk_0x2A24448FF232F834(uVar23, 0))
					{
						unk_0xCEBD1B99CF343672(uVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			unk_0xFAAA53BBE1EEF174(iParam0, bParam1, iVar24);
		}
	}
}

void func_46()
{
	struct<2> Var0;
	
	Global_2421967.f_675 = 0;
	Global_2421967.f_676 = 0;
	Global_2421967.f_677 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404546.f_1374 = { Var0 };
}

void func_47()
{
	Global_2404546.f_537 = 0;
	Global_2404546.f_1415 = 0;
	Global_2404546.f_420 = 0;
	Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_204 = 0;
}

int func_48(var uParam0)
{
	int iVar0;
	
	if (unk_0x2A24448FF232F834(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xEC043AB2FEE0E94F(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	Var0 = { -1661.914f, -1126.842f, 12.6973f };
	switch (iLocal_295)
	{
		case 0:
			if (func_12(unk_0xAF65E5A58BE87D95(), 1, 1))
			{
				Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3 = Local_996.f_197[Local_996.f_262 /*2*/];
				Local_184 = { unk_0x0CAFB9D38494283D(iLocal_159[Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3], 0f, 0f, 0f) };
				if (!Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/][0])
				{
					Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4 = 0;
				}
				else if (!Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/][1])
				{
					Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4 = 1;
				}
				StringCopy(&cLocal_269, "enter_player_", 24);
				StringCopy(&cLocal_275, "idle_a_player_", 24);
				if (Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4 == 0)
				{
					StringConCat(&cLocal_269, "one", 24);
					StringConCat(&cLocal_275, "one", 24);
				}
				else
				{
					StringConCat(&cLocal_269, "two", 24);
					StringConCat(&cLocal_275, "two", 24);
				}
				func_45(unk_0xAF65E5A58BE87D95(), 0, 260, 1);
				func_55();
				unk_0x804E88DCA0C40FF8(unk_0x507DA4994C3D8EBD(), Var0, 1f, 20000, 98.6981f, 0.2f);
				Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_316 = 1;
				unk_0x6C912BA9B35A9F3F(1);
				func_51();
				iLocal_295 = 1;
			}
			else
			{
				unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 9);
				func_36(func_58(1), Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4, 1);
			}
			break;
		
		case 1:
			if (unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), 2106541073) != 0 && unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), 2106541073) != 1)
			{
				uLocal_293 = unk_0xE9581057DA227F4B(Local_184, 0f, 0f, 0f, 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x864A7869C9418424(unk_0x507DA4994C3D8EBD(), uLocal_293, sLocal_268, &cLocal_269, 8f, -8f, 131072, 0, 1148846080, 0);
				unk_0x1CF38F11D5249AB4(uLocal_293);
				iLocal_295 = 2;
			}
			break;
		
		case 2:
			uVar6 = unk_0xBF636E78B6E9E404(uLocal_293);
			if (unk_0x6385FE4ECBDF05D2(uVar6) > 0.99f)
			{
				uLocal_293 = unk_0xE9581057DA227F4B(Local_184, 0f, 0f, 0f, 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x864A7869C9418424(unk_0x507DA4994C3D8EBD(), uLocal_293, sLocal_268, &cLocal_275, 8f, -8f, 131072, 0, 1148846080, 0);
				unk_0x1CF38F11D5249AB4(uLocal_293);
				iLocal_295 = 3;
			}
			break;
		
		case 3:
			if (func_38(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x94A4D627D865396B(unk_0x507DA4994C3D8EBD(), 1000);
			}
			Var3 = { unk_0xC9351EFF34BB33C0(iLocal_159[Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) };
			unk_0x26030664C7D28388(unk_0x507DA4994C3D8EBD(), iLocal_159[Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3], 0, Var3, 0f, 0f, unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD()), 0, 0, 0, 0, 2, 1);
			unk_0x767B987327A45DE0(unk_0x507DA4994C3D8EBD(), 1);
			func_50(func_58(0), Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3, Var3, unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD()));
			unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 5);
			unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 0);
			unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 9);
			iLocal_295 = 0;
			func_36(func_58(1), Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_4, 1);
			break;
	}
}

void func_50(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 341;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Var0.f_2 = uParam1;
	Var0.f_3 = { Param2 };
	Var0.f_6 = uParam5;
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 7, iParam0);
	}
}

void func_51()
{
	if (func_54() || func_53())
	{
		func_52();
	}
}

void func_52()
{
	Global_2427935.f_627 = 1;
}

var func_53()
{
	return Global_2427935.f_606;
}

bool func_54()
{
	return unk_0x61D8FEAF64881CDA(Global_2427935.f_2, 11);
}

void func_55()
{
	if (!func_14(unk_0xAF65E5A58BE87D95(), 1))
	{
		if (!func_44())
		{
			Global_1312418.f_1 = 1;
			func_56();
		}
	}
}

void func_56()
{
	if (!func_44())
	{
		Global_1312418 = 1;
		func_42();
		if ((!unk_0x0971F0C5992C6780() && !func_41()) && !func_13(unk_0xAF65E5A58BE87D95()))
		{
			Global_971736 = 1;
		}
	}
}

void func_57(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 344;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 2, iParam0);
	}
}

int func_58(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x0F0C172200951A9A())
	{
		if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iVar1)))
		{
			iVar2 = unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xAF65E5A58BE87D95() || iParam0)
				{
					unk_0x3DBE2A7AF9E71C82(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_59(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x17D71902CA06091B(*uParam0))
	{
		if (bParam2)
		{
			unk_0x92931D2249E68921(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0xB44AF0EB1FA3729D(*uParam0))
		{
			unk_0x6F430D0F1783A56E(*uParam0, 0);
		}
		unk_0x44151B6071157DDD(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0x465FDAA9130F8F45();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_60(var uParam0, int iParam1)
{
	if (unk_0x17D71902CA06091B(*uParam0))
	{
		unk_0x92931D2249E68921(0, iParam1, 3000, 1, 0, 0);
		unk_0x6F430D0F1783A56E(*uParam0, 0);
		unk_0x44151B6071157DDD(*uParam0, 0);
		*uParam0 = 0;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6809)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_75() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_75() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_75() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_75() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				unk_0x3DBE2A7AF9E71C82(&Global_2445276, (8 + iVar2));
				func_70(2093, -1);
				func_65(67, -1);
				unk_0x53B471E359546EFA(1000, iVar1);
				if (iVar3 < 2)
				{
					func_62(15, 0);
				}
			}
		}
	}
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_64(iParam0, iParam1))
	{
		iVar0 = func_63();
		Global_2434883[iVar0] = iParam0;
	}
}

int func_63()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_64(int iParam0, var uParam1)
{
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, func_68(iParam1));
	iVar0++;
	func_66(iParam0, iVar0, iParam1);
}

void func_66(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2474212[iParam0 /*6*/][func_68(uParam2)];
	unk_0x96B68C67633472DC(iVar0, iParam1, 1);
}

int func_67(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474212[iParam0 /*6*/][func_68(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_69();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

var func_69()
{
	return Global_1312736;
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, func_68(iParam1), 0);
	iVar0++;
	if (!func_73(iParam0))
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_71(iParam0, iVar0, iParam1, 1);
	}
}

void func_71(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_68(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 774:
			Global_1333776[func_68(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333782[func_68(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333788[func_68(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1333794[func_68(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333752[func_68(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333758[func_68(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333764[func_68(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1333770[func_68(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333728[func_68(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333734[func_68(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333740[func_68(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1333746[func_68(uParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333800[func_68(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333806[func_68(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333812[func_68(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1333818[func_68(uParam2)] = iParam1;
			break;
		
		case 1289:
			Global_1333824[func_68(uParam2)] = iParam1;
			break;
		
		case 626:
			Global_1333830[func_68(uParam2)] = iParam1;
			break;
		
		case 1264:
			Global_1333836[func_68(uParam2)] = iParam1;
			break;
		
		case 1861:
			Global_2474981[0 /*6*/][func_68(uParam2)] = iParam1;
			break;
		
		case 2250:
			Global_2474981[1 /*6*/][func_68(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333842[func_68(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333848[func_68(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333854[func_68(uParam2)] = iParam1;
			break;
		
		case 1222:
			Global_1333860[func_68(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_72(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_68(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
}

int func_73(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 744:
			case 745:
			case 746:
			case 747:
			case 1289:
			case 626:
			case 1264:
			case 751:
			case 752:
			case 753:
			case 1222:
			case 1861:
			case 2250:
				return 1;
				break;
			}
	}
	return 0;
}

int func_74(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_68(uParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76()
{
	func_82(&uLocal_225, -1703.854f, -1082.222f, 42.006f, -8.3096f, 0f, -111.8213f, 0, 0);
	func_80(&uLocal_225, &uLocal_264, 0, 0, 1, 1);
	iLocal_188 = unk_0xCA225EEF4090469C();
	unk_0xC4E6094A4C954E29(iLocal_188, "GENERATOR", uLocal_176, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_190 = unk_0xCA225EEF4090469C();
	unk_0xC4E6094A4C954E29(iLocal_190, "SLOW_SQUEAK", uLocal_176, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_191 = unk_0xCA225EEF4090469C();
	unk_0xC4E6094A4C954E29(iLocal_191, "SLOW_SQUEAK", iLocal_159[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_189 = unk_0xCA225EEF4090469C();
	unk_0xC4E6094A4C954E29(iLocal_189, "CARRIAGE", iLocal_159[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	func_77();
	unk_0xCD27BF29FB9012E2(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 5);
}

void func_77()
{
	if (func_38(unk_0x507DA4994C3D8EBD()))
	{
		func_78(&uLocal_248);
		func_59(&Local_194, 0, 1);
		func_80(&uLocal_225, &uLocal_264, 0, 0, 1, 1);
		iLocal_265 = 0;
		if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE"))
		{
			unk_0xAB5C0FE0C680BC7F("FAIRGROUND_RIDES_FERRIS_WHALE");
		}
		unk_0xD56AC40382654643("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
}

void func_78(var uParam0)
{
	if (unk_0x17D71902CA06091B(uParam0->f_10))
	{
		func_79(uParam0);
		unk_0x44151B6071157DDD(uParam0->f_10, 0);
	}
	uParam0->f_10 = 0;
}

void func_79(var uParam0)
{
	if (unk_0x17D71902CA06091B(uParam0->f_10))
	{
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x6F430D0F1783A56E(uParam0->f_10, 0);
	}
}

void func_80(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	func_60(uParam1, 0);
	Var0 = { uParam0->f_1[0 /*3*/] };
	if (bParam2)
	{
		Var0.f_2 = (Var0.f_2 + uParam0->f_18);
	}
	*uParam1 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", Var0, uParam0->f_8[0 /*3*/], uParam0->f_15[0], 1, 2);
	if (!unk_0x17D71902CA06091B(*uParam1))
	{
		return;
	}
	uParam0->f_19 = unk_0xF976C624234A4AA8();
	unk_0x6F430D0F1783A56E(*uParam1, 1);
	unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
	if ((!bParam3 && uParam0->f_20 > 0) && !func_81(uParam0->f_1[1 /*3*/]))
	{
		Var0 = { uParam0->f_1[1 /*3*/] };
		if (bParam2)
		{
			Var0.f_2 = (Var0.f_2 + uParam0->f_18);
		}
		if (fVar3 == 0f)
		{
			fVar3 = uParam0->f_15[0];
		}
		unk_0x6F713DCD73DFF545(*uParam1, Var0, uParam0->f_8[1 /*3*/], fVar3, uParam0->f_20, iParam4, iParam5, 2);
	}
	else if (func_38(uParam0->f_21))
	{
		unk_0x93C2314254F245A2(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}

int func_81(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_82(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8)
{
	func_83(uParam0);
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_8[0 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_21 = iParam7;
	uParam0->f_18 = iParam8;
	uParam0->f_20 = 0;
}

void func_83(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_15[0] = 50f;
	uParam0->f_15[1] = 0f;
	uParam0->f_21 = 0;
	uParam0->f_20 = 0;
}

void func_84()
{
	if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
	{
		unk_0x0DCB93E7DEB1CC3F();
		unk_0x500F4CA776CEBD0A(1, 0, 1);
		if (unk_0x00585B724989D978(2))
		{
			iLocal_296 = 1;
		}
		if (!unk_0xBB02FD0C8166DE6D())
		{
			if (unk_0x58FC9C7DF8FE009B(2, 236))
			{
				if (iLocal_265 == 0)
				{
					func_106();
				}
				else
				{
					func_77();
				}
			}
			if ((!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 4) && !unk_0x61D8FEAF64881CDA(Local_996.f_3[unk_0x9DCF1243D4AAD942()], 0)) && !unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 3))
			{
				if (unk_0x58FC9C7DF8FE009B(2, 51))
				{
					unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 3);
					iLocal_296 = 1;
				}
			}
		}
		if (iLocal_265 == 1)
		{
			if (bLocal_192 == 0)
			{
				func_103(&uLocal_248);
			}
			else
			{
				func_99(&Local_194, 1, 1, 0, 0, 0.1f, 0);
				unk_0x46AA97C6CB72D170(Local_194.f_0, unk_0xAD9A5677421290F3(unk_0x507DA4994C3D8EBD(), 2) + Local_194.f_14, 2);
				unk_0x92A9EE374F4560B0(0);
			}
		}
	}
	func_85();
}

void func_85()
{
	if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
	{
		if (unk_0x61D8FEAF64881CDA(uLocal_287, 4))
		{
			if (unk_0xE908465F9CDF4F1A(uLocal_297))
			{
				if (iLocal_296)
				{
					Local_985 = { func_98() };
					func_96(&uLocal_298);
					func_95(unk_0xB588E50C18B98D3F(2, 236, 1), "AMFW_BTNCV", &uLocal_298, 0);
					if (!unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 3))
					{
						func_95(unk_0xB588E50C18B98D3F(2, 51, 1), "AMFW_BTNEX", &uLocal_298, 0);
					}
					iLocal_296 = 0;
				}
				unk_0x24A6BECBE7FB7072(unk_0xE4DC0BC078803F6C());
				unk_0xED73E1F1A255F54E(0);
				func_94(1);
				func_93(1);
				func_86(&uLocal_297, &Local_985, &uLocal_298, func_92(&uLocal_298));
			}
		}
		else
		{
			uLocal_297 = unk_0xAFBDE0BB5C885026("instructional_buttons");
			unk_0x3DBE2A7AF9E71C82(&uLocal_287, 4);
		}
	}
	else
	{
		unk_0x86FF04BBB2EC839F(&uLocal_297);
		unk_0xCD27BF29FB9012E2(&uLocal_287, 4);
		iLocal_296 = 1;
	}
}

void func_86(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x00585B724989D978(2))
	{
		*uParam2 = 0;
		if (unk_0xE908465F9CDF4F1A(*uParam0))
		{
			if (unk_0x80AD636AD4184F2B())
			{
				unk_0xF48C88BD1F0007E8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5D559A5DDC88A4EF(0);
				unk_0xA52FC2467E672B55();
			}
			unk_0xF48C88BD1F0007E8(*uParam0, "CLEAR_ALL");
			unk_0xA52FC2467E672B55();
		}
		func_91(uParam2);
	}
	if (Global_1318742 < 2)
	{
		func_93(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xE908465F9CDF4F1A(*uParam0))
		{
			*uParam0 = unk_0xAFBDE0BB5C885026("instructional_buttons");
		}
		if (unk_0xE908465F9CDF4F1A(*uParam0))
		{
			unk_0xBEEABE099826EB55(*uParam0, "CLEAR_ALL");
			if (unk_0x80AD636AD4184F2B())
			{
				unk_0xF48C88BD1F0007E8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5D559A5DDC88A4EF(1);
				unk_0xA52FC2467E672B55();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x61D8FEAF64881CDA(uParam2->f_676, iVar0))
				{
					unk_0xF48C88BD1F0007E8(*uParam0, "SET_DATA_SLOT");
					unk_0x876C5D0739031E15(iVar0);
					if (!unk_0x61D8FEAF64881CDA(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_90(unk_0xB588E50C18B98D3F(iVar1, iVar2, 1));
						if (iVar3 < 332)
						{
							func_90(unk_0xB588E50C18B98D3F(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_90(unk_0xA493E672277131FE(uVar4, uVar5, 1));
					}
					if (unk_0x61D8FEAF64881CDA(uParam2->f_674, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x5D89BC4A497AE832(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x844339A27F0F1508(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x113A6F657EE871A3();
					}
					else if (unk_0x61D8FEAF64881CDA(uParam2->f_675, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xD1F22DD7F7363AB6(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x113A6F657EE871A3();
					}
					else
					{
						func_89(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x80AD636AD4184F2B())
					{
						if (unk_0x61D8FEAF64881CDA(uParam2->f_678, iVar0))
						{
							unk_0x5D559A5DDC88A4EF(1);
							unk_0x876C5D0739031E15(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x5D559A5DDC88A4EF(0);
							unk_0x876C5D0739031E15(332);
						}
					}
					unk_0xA52FC2467E672B55();
				}
				else
				{
					unk_0xF48C88BD1F0007E8(*uParam0, "SET_DATA_SLOT");
					unk_0x876C5D0739031E15(iVar0);
					func_90(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x8FA72E132AAFA62F(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_90(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x61D8FEAF64881CDA(uParam2->f_674, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x5D89BC4A497AE832(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x844339A27F0F1508(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x113A6F657EE871A3();
					}
					else if (unk_0x61D8FEAF64881CDA(uParam2->f_675, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xD1F22DD7F7363AB6(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x113A6F657EE871A3();
					}
					else
					{
						func_89(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x80AD636AD4184F2B())
					{
						unk_0x5D559A5DDC88A4EF(0);
						unk_0x876C5D0739031E15(332);
					}
					unk_0xA52FC2467E672B55();
				}
				iVar0++;
			}
			unk_0xF48C88BD1F0007E8(*uParam0, "SET_MAX_WIDTH");
			unk_0xA8F7908868900538(uParam2->f_686);
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x876C5D0739031E15(0);
			unk_0xA52FC2467E672B55();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_88(*uParam0, uParam1);
	}
	func_87();
}

void func_87()
{
	unk_0xD9E638F7F8DCAA60(7);
	unk_0xD9E638F7F8DCAA60(6);
	unk_0xD9E638F7F8DCAA60(8);
	unk_0xD9E638F7F8DCAA60(9);
}

void func_88(var uParam0, var uParam1)
{
	unk_0x4A383EC377D451D0(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_89(var uParam0)
{
	unk_0x44F4D219F8513945(uParam0);
	unk_0x113A6F657EE871A3();
}

void func_90(char* sParam0)
{
	unk_0x3F8884039D21AA69(sParam0);
}

void func_91(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_92(var uParam0)
{
	return uParam0->f_679;
}

void func_93(int iParam0)
{
	Global_1318742 = iParam0;
}

void func_94(int iParam0)
{
	Global_1328798.f_404 = iParam0;
}

void func_95(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

void func_96(var uParam0)
{
	func_97(uParam0);
	uParam0->f_679 = 1;
}

void func_97(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 332;
		uParam0->f_1[iVar0 /*56*/].f_55 = 332;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

struct<9> func_98()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	unk_0xD56126DC7330EEF3(2);
	func_102(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0xEEBA0A292090EE79())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		fVar5 = unk_0xD009084906064511(2, 239);
		fVar6 = unk_0xD009084906064511(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF34EE736CF047844(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF34EE736CF047844(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF34EE736CF047844(((unk_0xD009084906064511(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF34EE736CF047844(((unk_0xD009084906064511(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_101((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_101((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0xF976C624234A4AA8())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x30E5EC01C9ACF9BC(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0xF976C624234A4AA8() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(unk_0xBBDA792448DB5A89(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(unk_0xBBDA792448DB5A89(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * unk_0x0000000050597EE2());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x30E5EC01C9ACF9BC(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_100((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_100((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_100((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_100(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_100(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_100(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0x30E5EC01C9ACF9BC(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x30E5EC01C9ACF9BC(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0x02AC213158CF29AE(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0xF976C624234A4AA8() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x02AC213158CF29AE(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0xF976C624234A4AA8() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_100(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_100(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam3)
		{
			if (unk_0xBBDA792448DB5A89(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	unk_0x6F713DCD73DFF545(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x17D71902CA06091B(*uParam0))
	{
		if (unk_0xB44AF0EB1FA3729D(*uParam0))
		{
			if (unk_0xA9AF865CDD15DFF4(*uParam0))
			{
				unk_0x9871B9F47D2318AE();
			}
		}
	}
}

float func_100(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_102(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xD009084906064511(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF31E3F8B0F8BAB29(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xDA6E836529BF74AC(2, 218) * 127f));
		}
		if (!unk_0xF31E3F8B0F8BAB29(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xDA6E836529BF74AC(2, 219) * 127f));
		}
		if (!unk_0xF31E3F8B0F8BAB29(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xDA6E836529BF74AC(2, 220) * 127f));
		}
		if (!unk_0xF31E3F8B0F8BAB29(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xDA6E836529BF74AC(2, 221) * 127f));
		}
	}
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		if (bParam5)
		{
			if (unk_0xEEBA0A292090EE79())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xC91404D4E0A94981())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_103(var uParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	if (!uParam0->f_1 == 1)
	{
		return;
	}
	unk_0xD56126DC7330EEF3(2);
	if (*uParam0 == 1)
	{
		if (unk_0x75E01E8585722F89(unk_0x3A32FF422A47D4D2(2, 220)) > 0.1f)
		{
			uParam0->f_12 = (uParam0->f_12 - ((unk_0x3A32FF422A47D4D2(2, 220) * 60f) * unk_0x0000000050597EE2()));
			if (uParam0->f_15)
			{
				if (uParam0->f_12 < -180f)
				{
					uParam0->f_12 = (uParam0->f_12 + 360f);
				}
				if (uParam0->f_12 > 180f)
				{
					uParam0->f_12 = (uParam0->f_12 - 360f);
				}
			}
			else
			{
				uParam0->f_12 = func_100(uParam0->f_12, -80f, 80f);
			}
		}
		if (unk_0x75E01E8585722F89(unk_0x3A32FF422A47D4D2(2, 221)) > 0.1f)
		{
			fVar2 = ((unk_0x3A32FF422A47D4D2(2, 221) * 60f) * unk_0x0000000050597EE2());
			if (unk_0xEEBA0A292090EE79())
			{
				fVar2 = (fVar2 * -1f);
			}
			uParam0->f_11 = (uParam0->f_11 - fVar2);
			if (uParam0->f_14)
			{
				if (uParam0->f_11 < -180f)
				{
					uParam0->f_11 = (uParam0->f_11 + 360f);
				}
				if (uParam0->f_11 > 180f)
				{
					uParam0->f_11 = (uParam0->f_11 - 360f);
				}
			}
			else
			{
				uParam0->f_11 = func_100(uParam0->f_11, -30f, 30f);
			}
		}
		if (unk_0x58FC9C7DF8FE009B(2, 231))
		{
			uParam0->f_11 = 0f;
			uParam0->f_12 = 0f;
		}
		if (unk_0x75E01E8585722F89(unk_0x3A32FF422A47D4D2(2, 219)) > 0.1f)
		{
			fVar2 = ((unk_0x3A32FF422A47D4D2(2, 219) * (60f / 2f)) * unk_0x0000000050597EE2());
			uParam0->f_13 = (uParam0->f_13 + fVar2);
			uParam0->f_13 = func_100(uParam0->f_13, 20f, 50f);
		}
		if (unk_0x17D71902CA06091B(uParam0->f_10))
		{
			unk_0x435B97ECA622D5B0(uParam0->f_10, uParam0->f_13);
			if (!func_38(uParam0->f_8) && func_38(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x46AA97C6CB72D170(uParam0->f_10, unk_0xAD9A5677421290F3(unk_0x507DA4994C3D8EBD(), 2) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
			else if (func_38(uParam0->f_8) && func_38(uParam0->f_9))
			{
				func_104(unk_0xBF1B13057E5119A4(uParam0->f_8, 1), unk_0xBF1B13057E5119A4(uParam0->f_9, 1), &uVar0, &uVar1, 1);
				unk_0x46AA97C6CB72D170(uParam0->f_10, Vector(uVar1, 0f, uVar0) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
		}
	}
}

void func_104(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	func_105(Var0, uParam6, uParam7, iParam8);
}

void func_105(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0x1E7EBED5BB2C078C(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0x1E7EBED5BB2C078C(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

void func_106()
{
	struct<3> Var0;
	
	if (func_38(unk_0x507DA4994C3D8EBD()))
	{
		func_60(&uLocal_264, 0);
		Local_194.f_20 = 160;
		Local_194.f_21 = 20;
		if (bLocal_192)
		{
			Var0 = { unk_0xC5B1818639240D24(unk_0x507DA4994C3D8EBD(), 31086, 0f, -0.25f, 0f) };
			func_109(&Local_194, Var0, unk_0xAD9A5677421290F3(unk_0x507DA4994C3D8EBD(), 2), 50f, Local_194.f_20, Local_194.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
			unk_0x58F32532D161F8D0(Local_194.f_0, unk_0x507DA4994C3D8EBD(), 31086, 0f, -0.25f, 0f, 1);
		}
		else
		{
			func_108(&uLocal_248, 1);
			func_107(&uLocal_248, 0, 3000);
		}
		if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
		{
			unk_0xAB5C0FE0C680BC7F("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
		}
		unk_0xD56AC40382654643("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iLocal_265 = 1;
}

int func_107(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_1 == 1)
	{
		return 0;
	}
	uParam0->f_13 = 50f;
	if (!unk_0x17D71902CA06091B(uParam0->f_10))
	{
		uParam0->f_10 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", uParam0->f_2, uParam0->f_5, 50f, 1, 2);
	}
	if (func_38(uParam0->f_8))
	{
		unk_0x04BEA87701970868(uParam0->f_10, uParam0->f_8, 0f, 0f, 0f, 1);
	}
	if (*uParam0 == 1)
	{
		if (func_38(unk_0x507DA4994C3D8EBD()) && !func_38(uParam0->f_8))
		{
			unk_0x58F32532D161F8D0(uParam0->f_10, unk_0x507DA4994C3D8EBD(), 31086, 0f, 0.2f, 0f, 1);
		}
		uParam0->f_11 = 0f;
		uParam0->f_12 = 0f;
	}
	else if (func_38(uParam0->f_9))
	{
		unk_0x93C2314254F245A2(uParam0->f_10, uParam0->f_9, 0f, 0f, 0f, 1);
	}
	if (unk_0x17D71902CA06091B(uParam0->f_10))
	{
		unk_0x6F430D0F1783A56E(uParam0->f_10, 1);
		unk_0x92931D2249E68921(1, iParam1, iParam2, 1, 0, 0);
	}
	return 1;
}

void func_108(var uParam0, bool bParam1)
{
	*uParam0 = 1;
	uParam0->f_1 = 1;
	uParam0->f_9 = unk_0x507DA4994C3D8EBD();
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	if (bParam1)
	{
		uParam0->f_15 = 1;
	}
}

void func_109(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = uParam8;
	uParam0->f_21 = uParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = iParam11;
	*uParam0 = unk_0x07A7435490ED9AAB("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x6F430D0F1783A56E(*uParam0, 1);
	unk_0x6F713DCD73DFF545(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0xB98DF10F1936BD70(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0x80EA879A2C86EFE7(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0xAA609466F47F9ED0(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_110()
{
	int iVar0;
	
	if (func_123(1) >= Global_262145.f_6092)
	{
		if (unk_0xD2C51FB6128E84C0(Global_262145.f_6092, 0, 0, 1, -1))
		{
			if (func_122())
			{
				func_115(1643659499, Global_262145.f_6092, &iVar0, 0, 1);
				Global_2539072[iVar0 /*68*/].f_8.f_1 = 2;
			}
			else
			{
				unk_0x96CD36BAF0A29413(Global_262145.f_6092, 2, 0, 1);
			}
			unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 8);
		}
	}
	else if (!unk_0x61D8FEAF64881CDA(uLocal_287, 3))
	{
		func_111(0, 31, 5);
		unk_0x3DBE2A7AF9E71C82(&uLocal_287, 3);
	}
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xB67050B59E08385A())
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2() && func_14(unk_0xAF65E5A58BE87D95(), 1))
	{
		return;
	}
	if (unk_0xBD883E84B4B6E14E(2, 199) || unk_0x25F05AE8FAE80806(2, 199))
	{
		return;
	}
	if (unk_0x3821D11074DB6AF2() != 0)
	{
		return;
	}
	if (unk_0xBB02FD0C8166DE6D())
	{
		return;
	}
	if (unk_0x82F85CC376273040())
	{
		return;
	}
	if (unk_0xDAF2549B28FDF97C())
	{
		return;
	}
	if (func_114())
	{
		return;
	}
	if (!func_112())
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2() || iParam0)
	{
		if (!Global_89836.f_1318 && !unk_0xC7DB3B0FD27ABAAD())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2435590 = iParam1;
			Global_89836.f_1318 = 1;
			Global_89836.f_1319 = iParam2;
		}
	}
}

int func_112()
{
	if (func_113())
	{
		return 0;
	}
	if (unk_0x5F65F01B2E04B349() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_113()
{
	return Global_2435039;
}

bool func_114()
{
	return Global_2435610;
}

void func_115(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_116(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_116(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_122())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5C2F44EAEA6674B9(func_69()) || unk_0xE44D5F7B9ECB1B3D())
		{
			Global_2539483 = 1;
			return 0;
		}
		if (Global_2435610)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2539484 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2539072[iVar1 /*68*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x92B90704D2F9B3AF(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x0B76AB231270A606(iVar3))
		{
			*uParam0 = func_121(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2539072[*uParam0 /*68*/].f_62 = 1;
				}
			}
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2539482 = 1;
			Global_2539485 = iParam4;
			Global_2539487 = iParam3;
			Global_2539488 = 1;
			Global_2539486 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2539485 = iParam4;
			Global_2539487 = iParam3;
			Global_2539488 = 1;
			Global_2539486 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_120(1, iParam4);
			Global_2539482 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_117(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_117(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x3DBE2A7AF9E71C82(&(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_118(iParam0);
	}
}

void func_118(int iParam0)
{
	bool bVar0;
	struct<68> Var1;
	
	bVar0 = false;
	if (!func_122())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_119(iParam0))
		{
			if (!bVar0)
			{
				unk_0xCEBF7A17B05CC993();
			}
		}
		else if (!bVar0)
		{
			unk_0x185C3EB8FA1F5445(Global_2539072[iParam0 /*68*/]);
		}
		Var1 = 2147483647;
		Global_2539072[iParam0 /*68*/] = { Var1 };
	}
}

int func_119(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2539072[iParam0 /*68*/].f_5 == 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1)
{
	Global_2436789 = uParam1;
	Global_2436788 = iParam0;
}

int func_121(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2539072[iVar0 /*68*/].f_2 == 0)
		{
			if (!func_122())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2539072[iVar0 /*68*/].f_2 = 1;
			Global_2539072[iVar0 /*68*/].f_1 = uParam5;
			Global_2539072[iVar0 /*68*/].f_3 = uParam1;
			Global_2539072[iVar0 /*68*/].f_4 = uParam2;
			Global_2539072[iVar0 /*68*/].f_7 = uParam3;
			Global_2539072[iVar0 /*68*/].f_5 = 0;
			Global_2539072[iVar0 /*68*/] = iParam0;
			Global_2539072[iVar0 /*68*/].f_6 = iParam4;
			Global_2539072[iVar0 /*68*/].f_65 = uParam8;
			Global_2539072[iVar0 /*68*/].f_64 = uParam7;
			if (bParam6)
			{
				Global_2539072[iVar0 /*68*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_122()
{
	if (unk_0x80AD636AD4184F2B())
	{
		return 1;
	}
	return 0;
}

int func_123(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0x67F16E47B5610AAF();
	}
	iVar0 = (iVar0 + unk_0x5A1D7FBA416DF110(-1));
	return iVar0;
}

void func_124(char* sParam0, var uParam1, int iParam2)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x844339A27F0F1508(uParam1);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam2);
}

bool func_125()
{
	return (((func_127() || func_156()) || func_126() == 2) || func_126() == 16);
}

int func_126()
{
	return Global_971737;
}

bool func_127()
{
	return unk_0x61D8FEAF64881CDA(Global_2427935, 5);
}

int func_128(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_129(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_130()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (iLocal_267 != 0)
	{
		fVar4 = (IntToFloat(unk_0x88702B74B95C046D(unk_0x49BD9731DF21C969(), iLocal_267)) / 1000f);
	}
	iLocal_267 = unk_0x49BD9731DF21C969();
	if (((Local_996.f_262 != -1 && unk_0x61D8FEAF64881CDA(Local_996.f_2, 0)) && Global_2450808 < Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_6) && (Global_2450808 + (fLocal_177 * fVar4)) > Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_6)
	{
		Global_2450808 = Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_6;
	}
	else
	{
		Global_2450808 = (Global_2450808 + (fLocal_177 * fVar4));
	}
	if (Global_2450808 >= 360f)
	{
		Global_2450808 = (Global_2450808 - 360f);
	}
	if (func_38(uLocal_176))
	{
		unk_0xF85858E5CBF4D9F0(uLocal_176, Local_178, 1, 0, 0, 1);
		unk_0xC1619F9F00BCB470(uLocal_176, (-Global_2450808 - (360f / 16f)), 0f, 0f, 2, 1);
		unk_0x479E7EEEBDEE245D(uLocal_176, true);
	}
	if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		if (func_38(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
		unk_0x0A17E2149BA8DF25("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (Var1.f_2 - fLocal_187));
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_131(&(Local_996.f_36[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_131(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { func_133(uParam0->f_5) };
	if (func_132(iLocal_159[uParam0->f_5]))
	{
		unk_0xF85858E5CBF4D9F0(iLocal_159[uParam0->f_5], Var0, 1, 0, 0, 1);
		unk_0x94A4D627D865396B(iLocal_159[uParam0->f_5], 1000);
		unk_0x479E7EEEBDEE245D(iLocal_159[uParam0->f_5], true);
	}
}

int func_132(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_133(int iParam0)
{
	float fVar0;
	
	fVar0 = ((360f / unk_0xBBDA792448DB5A89(16)) * unk_0xBBDA792448DB5A89(iParam0));
	return unk_0x0CAFB9D38494283D(uLocal_176, 0f, (15.3f * unk_0x0BADBFA3B172435F(fVar0)), (-15.3f * unk_0xD0FFB162F40A139C(fVar0)));
}

int func_134()
{
	unk_0x395C5D98343F0040(sLocal_268);
	unk_0x395C5D98343F0040(sLocal_158);
	unk_0xCBE6AC5010E5CE5C(iLocal_156);
	unk_0xCBE6AC5010E5CE5C(iLocal_157);
	if (!unk_0xCE40391AB65FE305(sLocal_268))
	{
		return 0;
	}
	if (!unk_0xCE40391AB65FE305(sLocal_158))
	{
		return 0;
	}
	if (!unk_0xD291857D0C9C7FEC(iLocal_156))
	{
		return 0;
	}
	if (!unk_0xD291857D0C9C7FEC(iLocal_157))
	{
		return 0;
	}
	func_137();
	func_136(func_58(0));
	func_135(func_58(0));
	iLocal_295 = 0;
	return 1;
}

void func_135(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 340;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 2, iParam0);
	}
}

void func_136(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 343;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 2, iParam0);
	}
}

void func_137()
{
	int iVar0;
	
	iVar0 = 0;
	Global_2450808 = 0f;
	uLocal_176 = unk_0xCEC985247737A30E(iLocal_156, 0f, 1f, 2f, 0, 0, 0);
	unk_0xF85858E5CBF4D9F0(uLocal_176, Local_178, 1, 0, 0, 1);
	unk_0xC1619F9F00BCB470(uLocal_176, Global_2450808, 0f, 0f, 2, 1);
	unk_0x479E7EEEBDEE245D(uLocal_176, true);
	unk_0x94A4D627D865396B(uLocal_176, 1000);
	unk_0xF732465E1FF70CE4(uLocal_176, 1);
	unk_0x36F8F6D4F1ED9877(uLocal_176, 0);
	if (!unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xD56AC40382654643("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_138(&(Local_996.f_36[iVar0 /*10*/]), iVar0);
		iVar0++;
	}
	if (!unk_0x9DBF5ADC61595373())
	{
		func_21(64, 1, 0, 1, 0);
	}
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	iLocal_159[uParam0->f_5] = unk_0xCEC985247737A30E(iLocal_157, 0f, 1f, 2f, 0, 0, 0);
	unk_0xF732465E1FF70CE4(iLocal_159[uParam0->f_5], 1);
	func_131(uParam0);
}

int func_139()
{
	return Local_996.f_1;
}

int func_140(int iParam0)
{
	return Local_1260[iParam0 /*5*/];
}

void func_141()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		switch (iVar1)
		{
			case 168:
				unk_0x6EDD33D6B8546C95(1, iVar0, &Var2, 2);
				if (func_12(Var2.f_1, 0, 1))
				{
					if (unk_0xE0AA590C8D413E3F(Var2.f_1))
					{
						switch (Var2.f_0)
						{
							case 343:
								func_153(iVar0);
								break;
							
							case 341:
								func_152(iVar0);
								break;
							
							case 342:
								func_151(iVar0);
								break;
							
							case 339:
								func_150(iVar0);
								break;
							
							case 340:
								func_148(iVar0);
								break;
							
							case 344:
								func_145(iVar0);
								break;
							
							case 345:
								func_144(iVar0);
								break;
							
							case 346:
								func_143(iVar0);
								break;
							
							case 347:
								func_142(iVar0);
								break;
							}
						}
				}
				break;
		}
		iVar0++;
	}
}

void func_142(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x2CCDE625E685C339())
	{
		if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
		{
			Local_996.f_3[Var0.f_2] = 0;
			Local_996.f_197[Var0.f_2 /*2*/] = -1;
			Local_996.f_197[Var0.f_2 /*2*/].f_1 = 0;
			Local_996.f_262 = func_2();
		}
	}
}

void func_143(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x2CCDE625E685C339())
	{
		if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 4))
		{
			unk_0xCD27BF29FB9012E2(&(Local_996.f_2), 3);
			unk_0xCD27BF29FB9012E2(&(Local_996.f_2), 2);
			if ((Local_996.f_262 != -1 && Local_996.f_197[Local_996.f_262 /*2*/] != -1) && Var0.f_2 != -1)
			{
				if (!Var0.f_3)
				{
					Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_3 = (Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_3 - 1);
					Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/][Var0.f_2] = 0;
				}
				else
				{
					Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/].f_3++;
					Local_996.f_36[Local_996.f_197[Local_996.f_262 /*2*/] /*10*/][Var0.f_2] = 1;
				}
			}
		}
	}
}

void func_144(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (!Var0.f_2)
		{
			if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
			{
				unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 10);
			}
			else
			{
				unk_0x3DBE2A7AF9E71C82(&(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2), 9);
			}
		}
	}
}

void func_145(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	
	if (unk_0x2CCDE625E685C339())
	{
		if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 2))
		{
			bVar2 = unk_0x61D8FEAF64881CDA(Local_996.f_2, 3);
			func_146(func_147(Var0.f_1), bVar2);
			if (!bVar2)
			{
				unk_0x3DBE2A7AF9E71C82(&(Local_996.f_2), 3);
			}
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 345;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 3, iParam0);
	}
}

int func_147(int iParam0)
{
	var uVar0;
	
	unk_0x3DBE2A7AF9E71C82(&uVar0, iParam0);
	return uVar0;
}

void func_148(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x2CCDE625E685C339())
	{
		if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 2))
		{
			func_149(func_147(Var0.f_1));
		}
	}
}

void func_149(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_0 = 339;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Var0.f_2 = Global_2450808;
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 3, iParam0);
	}
}

void func_150(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		Global_2450808 = Var0.f_2;
	}
}

void func_151(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 2))
	{
		uVar2 = unk_0x687D51F360787909(Var0.f_1);
		if (func_12(Var0.f_1, 1, 1))
		{
			unk_0x767B987327A45DE0(uVar2, 1);
			unk_0x5B97F41A7BE54877(uVar2, 0, 1);
		}
	}
}

void func_152(int iParam0)
{
	struct<7> Var0;
	var uVar7;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 7))
	{
		if (Var0.f_2 != -1)
		{
			uVar7 = unk_0x687D51F360787909(Var0.f_1);
			if (func_12(Var0.f_1, 1, 1))
			{
				unk_0x767B987327A45DE0(uVar7, 1);
				unk_0x26030664C7D28388(uVar7, iLocal_159[Var0.f_2], 0, Var0.f_3, 0f, 0f, Var0.f_6, 0, 0, 0, 0, 2, 1);
			}
		}
	}
}

void func_153(int iParam0)
{
	struct<2> Var0;
	struct<3> Var2;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 2))
	{
		if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
		{
			unk_0x767B987327A45DE0(unk_0x507DA4994C3D8EBD(), 1);
			Var2 = { unk_0xC9351EFF34BB33C0(iLocal_159[Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3], unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) };
			func_50(func_147(Var0.f_1), Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_3, Var2, unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD()));
		}
	}
}

int func_154()
{
	if (func_155() == 0)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	return Global_1312466.f_18;
}

int func_156()
{
	if (((func_160() || func_159()) || func_158()) || func_157())
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return unk_0x61D8FEAF64881CDA(Global_2427935, 1);
}

bool func_158()
{
	return unk_0x61D8FEAF64881CDA(Global_2427935, 2);
}

bool func_159()
{
	return unk_0x61D8FEAF64881CDA(Global_2427935, 20);
}

bool func_160()
{
	return Global_2427935.f_570;
}

bool func_161()
{
	return Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_165 != 0;
}

int func_162()
{
	bool bVar0;
	
	func_167(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_166())
	{
		return 1;
	}
	if (Global_2436715)
	{
		return 1;
	}
	if (func_165())
	{
		return 1;
	}
	if (func_164(157))
	{
		if (!func_160())
		{
			return 1;
		}
	}
	if (func_164(155))
	{
		return 1;
	}
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_163() != 0)
	{
		if (unk_0x25531002BCF0D968(func_163()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_163()
{
	switch (func_26())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_164(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_165()
{
	return Global_2434971;
}

bool func_166()
{
	return Global_2427935.f_565;
}

void func_167(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_168(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(uVar3))
			{
				if (unk_0x2A24448FF232F834(uVar3, 0))
				{
					uVar4 = unk_0x78AB10B64129B3D5(uVar3, 0);
					if (unk_0x9067781626AA370D(uVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_169(uVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_169(var uParam0, var uParam1)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0x73E2404DC70203CD(uParam0))
		{
			if (unk_0x9ACF2D423F8B5749(uParam0))
			{
				unk_0xBAE5DF507EEC53C8(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(uParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_170()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_171()
{
	func_172(&uLocal_38, 3, 4, "SCRIPT\FERRIS_WHALE_01", 0);
	func_172(&uLocal_38, 4, 4, "SCRIPT\FERRIS_WHALE_02", 0);
}

int func_172(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (unk_0x61D8FEAF64881CDA(uParam0->f_113, iParam1) || unk_0x61D8FEAF64881CDA(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (unk_0x8FA72E132AAFA62F(sParam3))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 1:
			unk_0xFD4EA8E24903BE82(sParam3);
			break;
		
		case 2:
			unk_0x395C5D98343F0040(sParam3);
			break;
		
		case 3:
			unk_0xC47168D93A3B223B(sParam3);
			break;
		
		case 4:
			unk_0xF08CFB68522305B2(sParam3, 0);
			break;
		
		case 5:
			unk_0xDBB45AE299F05694(sParam3, iParam4);
			break;
		
		case 9:
			unk_0x685EB3667D702B92(sParam3, 0);
			break;
		
		case 11:
			unk_0x909E9D811F9F1AAE(sParam3);
			break;
		
		default:
			return 0;
	}
	func_173(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = iParam2;
	(uParam0[iParam1 /*7*/])->f_3 = sParam3;
	(uParam0[iParam1 /*7*/])->f_4 = iParam4;
	return 1;
}

void func_173(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_174()
{
	func_179();
	func_177(0);
	func_60(&uLocal_264, 0);
	func_60(&uLocal_193, 0);
	func_59(&Local_194, 0, 1);
	if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xAB5C0FE0C680BC7F("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_316 = 0;
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Local_1260[unk_0x9DCF1243D4AAD942() /*5*/].f_2, 0))
		{
			if (unk_0xDF75DAAACD32E49E(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x5B97F41A7BE54877(unk_0x507DA4994C3D8EBD(), 1, 1);
			}
			func_39();
			unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
		}
	}
	func_175(&uLocal_38);
	unk_0x89A307800AC22308("fairgroundHub");
	unk_0x883793591E631A3B();
}

void func_175(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_176(uParam0, iVar0);
		iVar0++;
	}
}

int func_176(var uParam0, int iParam1)
{
	if (!unk_0x61D8FEAF64881CDA(uParam0->f_114, iParam1) || (*uParam0)[iParam1 /*7*/] == 0)
	{
		return 1;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 1:
			if (unk_0xF3F8EABCC34FE806((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xC65F92A82E62133A((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 2:
			if (unk_0xCE40391AB65FE305((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xA878656BC39BBC51((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 3:
			if (unk_0xB3E0182D84120379((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xD0522F98C595B73F((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 4:
			unk_0xEE6010D5E324610F();
			break;
		
		case 5:
			break;
		
		case 6:
			if (unk_0xD291857D0C9C7FEC((uParam0[iParam1 /*7*/])->f_1))
			{
				unk_0xFF467904A8A12BBE((uParam0[iParam1 /*7*/])->f_1);
			}
			break;
		
		case 7:
			if (unk_0x09B3E74864C634DA())
			{
				unk_0x7E0FE22DC929277C();
			}
			break;
		
		case 8:
			if (unk_0x6C741637F73EA9EC((uParam0[iParam1 /*7*/])->f_5))
			{
				unk_0x0474B54D6F301DDF((uParam0[iParam1 /*7*/])->f_5, 0);
			}
			break;
		
		case 9:
			if (unk_0x31920D7070131373((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xB6A951E6C2922F87((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 10:
			if (unk_0xD3536FF14115DA03((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x6F50999A7C4DD6A2((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 11:
			if (unk_0xB16E5DBDEC4BBDEB((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x932057F38C942D3B((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 12:
			if (unk_0xC35CCF23F0A1E055((uParam0[iParam1 /*7*/])->f_2))
			{
				unk_0x59A935DC5B1115A0((uParam0[iParam1 /*7*/])->f_2);
			}
			break;
		
		default:
			return 0;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 12:
			break;
		
		default:
			break;
	}
	func_173(uParam0[iParam1 /*7*/]);
	return 1;
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		func_178();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_128(0))
		{
			func_32(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_178()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_179()
{
	int iVar0;
	
	if (!unk_0x9DBF5ADC61595373())
	{
		func_21(64, 0, 0, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_996.f_36)
	{
		func_182(&(Local_996.f_36[iVar0 /*10*/]));
		iVar0++;
	}
	if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xAB5C0FE0C680BC7F("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	if (unk_0xA2A45E58AC3DF6C5("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
	{
		unk_0xAB5C0FE0C680BC7F("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
	func_181(&iLocal_191);
	func_181(&iLocal_191);
	func_181(&iLocal_188);
	func_181(&iLocal_189);
	func_180(&uLocal_176);
}

void func_180(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		unk_0x4095FD029041DD48(uParam0);
	}
}

void func_181(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x5B438162CCD91A71(*iParam0);
		unk_0x71EA2F1D0184D8C7(*iParam0);
		*iParam0 = -1;
	}
}

void func_182(var uParam0)
{
	if (iLocal_159[uParam0->f_5] == 0)
	{
		return;
	}
	func_180(&(iLocal_159[uParam0->f_5]));
	iLocal_159[uParam0->f_5] = 0;
}

int func_183(struct<20> Param0)
{
	func_188(func_189(Param0.f_0), Param0);
	unk_0x091AADFDC8448CBD(0);
	func_185(0, -1, 0);
	unk_0x661B032797391228(&Local_996, 264);
	unk_0xEF4D8ADC6645E7F7(&Local_1260, 161);
	unk_0xB43679BBB30F1391(0);
	Local_1260[unk_0x9DCF1243D4AAD942() /*5*/] = 0;
	func_184(func_58(1));
	return 1;
}

void func_184(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_0 = 347;
	Var0.f_1 = unk_0xAF65E5A58BE87D95();
	Var0.f_2 = unk_0x9DCF1243D4AAD942();
	if (!iParam0 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Var0, 3, iParam0);
	}
}

int func_185(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2B79F83CAD49E762();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_187();
			}
			else
			{
				return 0;
			}
		}
		if (!func_186())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xD95428C8AA1DBBF2())
				{
					if (!bParam2)
					{
						func_187();
					}
					else
					{
						return 0;
					}
				}
				if (func_166())
				{
					if (!bParam2)
					{
						func_187();
					}
					else
					{
						return 0;
					}
				}
				if (func_164(155))
				{
					if (!bParam2)
					{
						func_187();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xD5762A6870CA7430())
			{
				if (!bParam2)
				{
					func_187();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			if (!bParam2)
			{
				func_187();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xD5762A6870CA7430())
	{
		if (!bParam2)
		{
			func_187();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_186()
{
	return Global_1315872;
}

void func_187()
{
	unk_0x883793591E631A3B();
}

void func_188(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		func_187();
	}
	unk_0x4C2DEED020A287EF(uParam0, 0, Param1.f_16);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

