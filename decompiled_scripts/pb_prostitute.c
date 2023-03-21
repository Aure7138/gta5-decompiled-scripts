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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char* sLocal_63 = NULL;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
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
	var uLocal_122 = 16;
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
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
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
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
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
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	int iLocal_289[3] = { 0, 0, 0 };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308[4] = { 0, 0, 0, 0 };
	struct<7> Local_313[4];
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
	var uLocal_358 = 10;
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
	var uLocal_369 = 2;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 8;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 8;
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
	float fLocal_392 = 0f;
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
	var uLocal_403 = 15;
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
	var uLocal_676 = 1;
	var uScriptParam_0 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_56 = { 0f, 0f, 0f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_293 = -1;
	fLocal_392 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_533(unk_0xB5CEFD608600A09F(), 1))
		{
			unk_0x95E4B6F3ED223F5A();
		}
		if (func_532(unk_0xB5CEFD608600A09F(), 1))
		{
			unk_0x95E4B6F3ED223F5A();
		}
	}
	if (func_531(13) || func_531(14))
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (!func_530() && !unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xE8A79675302ED812(35))
		{
			func_521();
			func_520(1);
			func_516(&uLocal_403);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_96 = uScriptParam_0;
	if (unk_0x7AF0088ABFA713B6())
	{
		func_515();
		unk_0xBF463BC3D6FFDE31(2, 0, unk_0xB5CEFD608600A09F());
		func_510(0, -1, 0);
		unk_0x6C87EFD58B261C6F(0);
	}
	func_509();
	func_508(128);
	while (iLocal_62)
	{
		bVar0 = true;
		func_505(&uLocal_403);
		if (func_530())
		{
			if (func_504(1024))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0xE58FD1D062663A04(unk_0xBC25C936A095B5BA()) && unk_0xCF9FD9F078487083(unk_0xBC25C936A095B5BA()))
					{
						func_508(1024);
						unk_0xF1B63714B0383791(unk_0xBC25C936A095B5BA());
					}
				}
			}
			if (!func_504(1024) && func_504(2048))
			{
				unk_0x95E4B6F3ED223F5A();
			}
			if (!unk_0x724D816EA203A79E(iLocal_96))
			{
				bVar0 = false;
			}
			else if (!unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				bVar0 = false;
				unk_0xC7587327285D9984(iLocal_96);
			}
		}
		if (!func_530() || !func_504(2048))
		{
			func_497();
			if (func_530())
			{
				func_496();
				if (func_504(128))
				{
					iLocal_62 = 0;
				}
			}
			if (func_491())
			{
				if (bVar0)
				{
					if (iLocal_294 > 0)
					{
						func_486(&uLocal_403);
					}
					func_484();
					func_482();
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (unk_0x26879BF7A62B3FDC(iLocal_96))
								{
									iLocal_293 = func_481();
								}
								else if (func_479())
								{
									iLocal_293 = 4;
								}
							}
							else if (func_474())
							{
								if (func_473())
								{
									if (func_530())
									{
										if (unk_0x4DF785C4DF542CD0(iLocal_96))
										{
											unk_0xA3A7138EAD2268A0(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xC7587327285D9984(iLocal_96);
										}
									}
									else
									{
										unk_0xA3A7138EAD2268A0(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_294 = 1;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_471(iLocal_49, 4096))
							{
								func_470();
							}
							if (func_469())
							{
								iLocal_294 = 2;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_465())
							{
								iLocal_294 = 3;
								func_463(&iLocal_49, 64);
								Global_25429 = 1;
								func_472("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_403);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_471(iLocal_49, 2))
	{
	}
	func_472(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_521();
	func_516(&uLocal_403);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_62 = 1;
	}
	else
	{
		iLocal_62 = 0;
	}
}

void func_3()
{
	if (iLocal_295 > 0)
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_97))
			{
				if (!unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_97) || unk_0x1D403DFADBC2DE3C(iLocal_97, 0))
	{
		func_89(15);
	}
	switch (iLocal_295)
	{
		case 0:
			if (!iLocal_296 == 0)
			{
				iLocal_295 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0x36CEFBE9B745A58D(iLocal_97))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 242628503) == 7)
				{
					iLocal_65 = unk_0x105601648511CC64();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= 10000 || !unk_0xE642C1AC73CE364E(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
					{
						func_472("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x37718415CE714A5B(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x4B656426561BA934(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0x509F549022512095(iLocal_97, iLocal_98, Local_90, (unk_0x2D175DF90F6F05C3(iLocal_98) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_90, unk_0x541C2AEF053615BC(iLocal_96, 1)) < 25f && unk_0xF4FCC3C1048FF2AB(iLocal_97, -1817882002) != 1)
			{
				iLocal_297 = unk_0x491B2241281A03B7(1, 3);
				iLocal_295 = 11;
			}
			if (func_49(iLocal_97))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0x724D816EA203A79E(iLocal_96) && unk_0x724D816EA203A79E(iLocal_98))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_96, iLocal_98, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_97, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_97, -828834893) != 1)
						{
							unk_0xA3981DED4FC2E56E(iLocal_96, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_302)
	{
		case 0:
			unk_0xD40A5C223BC88756(iLocal_96, 0.916f);
			if (func_36(iLocal_97))
			{
				func_34(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), unk_0x541C2AEF053615BC(iLocal_96, 0)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_98);
			if (func_27(iLocal_97))
			{
				func_11(&uLocal_122, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_302 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_23();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_17();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_16())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_15())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_14();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_13();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_14()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_15()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_17()
{
	if (func_531(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_18();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

int func_18()
{
	func_19();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_19()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_22(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_21(unk_0xBC25C936A095B5BA());
			if (func_20(iVar0) && (!func_531(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_20(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_25()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_27(int iParam0)
{
	if (func_28())
	{
		if (!unk_0x5877568DB02F6649(unk_0x6F79ECA8C83E4357(iParam0), unk_0x541C2AEF053615BC(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (Global_16836)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iLocal_297 != 1 && iLocal_297 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0x5EBD7EB63AD5FB1D(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0x619CCA1A6FD0BC87(iLocal_96, 876132797);
}

void func_32()
{
	unk_0x2423B13D9CFAD1DD();
	func_33();
}

void func_33()
{
	Global_17206.f_134 = 1;
}

void func_34(var uParam0)
{
	func_35(uParam0, 0f);
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(uParam0, 1);
	unk_0x7CB6FD92BE491AD9(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0xF1734B55490E9045(sLocal_63))
	{
		sLocal_63 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xF9E082857622D91E(sLocal_63))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_96, func_43(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_37(iParam0, func_43(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		}
		func_472("anim_dict has loaded, triggering anims?");
		func_463(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0x7FCE28BE45D0735E();
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0xC738E4BB7AAEF78D(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0xF9E082857622D91E(sVar2))
	{
		unk_0x522053D86D6E1C7A(sVar2);
	}
	else
	{
		unk_0xC5A6DFE2B8987B17(&uVar3);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x535008C596714F9E(uVar3);
		unk_0xA8E6405305C0D7DF(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x02DAF06EA4F08219(&uVar3);
		}
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x3D875C2512206692(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x3D875C2512206692(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()
{
	return iLocal_297 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		uVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
		if (unk_0xE59B7F5A03335350(uVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xA4813477CC5DD00F(iParam0) || !func_51(iParam0, iLocal_98, -1))
		{
			Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			unk_0xABA7AE40608505F2(iParam0, 196624, 1);
			if (func_50())
			{
				unk_0xAB43C54784946B9F(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0x1D403DFADBC2DE3C(unk_0x33213E99DDEE4631(iParam0), 0))
			{
				unk_0xB8CBD998685C0685(iParam0, unk_0x33213E99DDEE4631(iParam0), 0, 16);
			}
			else
			{
				unk_0xAB43C54784946B9F(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_52(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x541C2AEF053615BC(iLocal_96, 1) };
	Var3 = { Local_90 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var3.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var3.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var3.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var3.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var3.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var3.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var3.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var3.f_1 + 20f);
}

void func_53()
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_97))
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 242628503) == 1)
				{
					if (unk_0xD62938026B30481A(iLocal_96) > 0)
					{
						if (unk_0x62F3A07C43FFB568(iLocal_96, iLocal_98, 0))
						{
							func_472("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xC5A6DFE2B8987B17(&uLocal_101);
							unk_0x204BA7B1C7DD25F4(0, iLocal_98, 10f, 786603);
							unk_0x535008C596714F9E(uLocal_101);
							unk_0xA8E6405305C0D7DF(iLocal_97, uLocal_101);
							unk_0x02DAF06EA4F08219(&uLocal_101);
							Local_90 = { func_54(unk_0x541C2AEF053615BC(iLocal_96, 1)) };
							unk_0x522053D86D6E1C7A(func_44(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = unk_0x105601648511CC64();
						}
					}
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xB7A628320EFF8E47(Param0, func_55(iVar1)) < unk_0xB7A628320EFF8E47(Param0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_56()
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_97))
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x8910237449BB6F79(iLocal_98);
				if (unk_0xE642C1AC73CE364E(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_96);
					iLocal_65 = unk_0x105601648511CC64();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= iLocal_68)
					{
						if (func_530())
						{
							if (unk_0x4DF785C4DF542CD0(iLocal_97))
							{
								unk_0x44C98C11ED6DD327(iLocal_97);
							}
						}
						else
						{
							unk_0x44C98C11ED6DD327(iLocal_97);
						}
						iLocal_68 = unk_0x491B2241281A03B7(0, 10000);
						if (iLocal_68 > 2500)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_96);
							unk_0x02DAF06EA4F08219(&uLocal_101);
							unk_0xC5A6DFE2B8987B17(&uLocal_101);
							unk_0xD179FA0466FA4FE3(0, iLocal_98, -1, 0, 1f, 8388609, 0);
							unk_0xDE2D2B13F24A979D(0, -1);
							unk_0x535008C596714F9E(uLocal_101);
							unk_0xA8E6405305C0D7DF(iLocal_96, uLocal_101);
							unk_0x02DAF06EA4F08219(&uLocal_101);
							func_472("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x36CEFBE9B745A58D(iLocal_97))
							{
								if (unk_0xE59B7F5A03335350(iLocal_98, 0))
								{
									if (unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
									{
										unk_0x02DAF06EA4F08219(&uLocal_101);
										unk_0xC5A6DFE2B8987B17(&uLocal_101);
										unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(500, 2000));
										unk_0x204BA7B1C7DD25F4(0, iLocal_98, 10f, 786603);
										unk_0x535008C596714F9E(uLocal_101);
										unk_0xA8E6405305C0D7DF(iLocal_97, uLocal_101);
										unk_0x02DAF06EA4F08219(&uLocal_101);
										iLocal_64 = unk_0x105601648511CC64();
									}
								}
							}
							func_472("prostitute REFUSED MONEY 2");
							if (func_530())
							{
								if (unk_0x4DF785C4DF542CD0(iLocal_97))
								{
									unk_0x44C98C11ED6DD327(iLocal_97);
								}
							}
							else
							{
								unk_0x44C98C11ED6DD327(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_530())
					{
						if (unk_0x4DF785C4DF542CD0(iLocal_97))
						{
							unk_0x44C98C11ED6DD327(iLocal_97);
						}
					}
					else
					{
						unk_0x44C98C11ED6DD327(iLocal_97);
					}
					func_90();
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_530())
				{
					if (unk_0x4DF785C4DF542CD0(iLocal_97))
					{
						unk_0x44C98C11ED6DD327(iLocal_97);
					}
				}
				else
				{
					unk_0x44C98C11ED6DD327(iLocal_97);
				}
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iLocal_96) || unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return 1;
	}
	if (!func_530())
	{
		if (unk_0x5237AF95232D78C5(iLocal_96, 1))
		{
			unk_0x8CE2798B9A7027EC(iLocal_96, 1193033728, 0);
		}
		else if (func_471(iLocal_49, 4194304))
		{
			unk_0xC5A6DFE2B8987B17(&uVar0);
			if (func_471(iLocal_75, 524288))
			{
				unk_0xE896C0AD02364F2A(0, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(iLocal_96, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
			func_463(&iLocal_49, 16384);
			func_34(&uLocal_113);
		}
		return 1;
	}
	if (unk_0x5237AF95232D78C5(iLocal_96, 1))
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_96))
		{
			unk_0x8CE2798B9A7027EC(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xC7587327285D9984(iLocal_96);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_471(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_471(iLocal_75, 524288))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_96))
				{
					unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_96);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_471(iLocal_75, 524288))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_96))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_96, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_96);
				}
			}
			else if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_96);
			}
			break;
		
		case 3:
			func_463(&iLocal_49, 16384);
			func_34(&uLocal_113);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0x71326C9F310B9335(iLocal_96) || unk_0x26879BF7A62B3FDC(iLocal_96)) || unk_0x4DF0825BB012BDB0(iLocal_96, func_59(0))) || unk_0x4DF0825BB012BDB0(iLocal_96, func_59(1)))
	{
		return;
	}
	Var0 = { unk_0x541C2AEF053615BC(iLocal_96, 1) };
	if (!unk_0xDF2CB88174A62E40(Var0, func_59(0), 20f, 1) && !unk_0xDF2CB88174A62E40(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
		}
		else
		{
			unk_0x8CE2798B9A7027EC(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xBE2047F9F9DE6F43(iLocal_96, Var0, 20f, 0);
	}
	else
	{
		unk_0xBE2047F9F9DE6F43(0, Var0, 20f, 0);
	}
}

char* func_59(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
	{
		if (func_18() == 2)
		{
			unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0x2E9860A2B72187F5(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if ((unk_0x96044E39418AAF17(iParam0, func_61(iLocal_293), func_60(1), 3) || unk_0x96044E39418AAF17(iParam0, func_61(iLocal_293), func_60(2), 3)) || unk_0x96044E39418AAF17(iParam0, func_61(iLocal_293), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_97))
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 242628503) == 1)
				{
					if (unk_0xD62938026B30481A(iLocal_96) > 1)
					{
						if (unk_0xE642C1AC73CE364E(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x8910237449BB6F79(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_64 = unk_0x105601648511CC64();
								iLocal_68 = unk_0x491B2241281A03B7(4000, 8000);
								func_472("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_472("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_530())
	{
		if (bParam0)
		{
			unk_0x55662F9F262C2F9B(iLocal_96, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_471(iLocal_49, 4194304))
		{
			iVar0 = unk_0x491B2241281A03B7(1, 4);
			unk_0xC5A6DFE2B8987B17(&uVar1);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(uVar1);
			unk_0xA8E6405305C0D7DF(iLocal_96, uVar1);
			unk_0x02DAF06EA4F08219(&uVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x55662F9F262C2F9B(iLocal_96, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_471(iLocal_49, 4194304))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_96))
				{
					unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x491B2241281A03B7(1, 4);
					unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_96);
			}
			break;
		
		case 3:
			if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, -2017877118) == 7)
				{
					unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_96);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_96))
				{
					unk_0x53D8178763EDCE60(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x53D8178763EDCE60(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_96))
				{
					unk_0x53D8178763EDCE60(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x53D8178763EDCE60(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_96))
				{
					unk_0x53D8178763EDCE60(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x53D8178763EDCE60(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_105220.f_10020.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_105220.f_10020.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_105220.f_10020.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0xCE0C2E1494516734(iParam0, Global_105220.f_10020.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_76(iParam2);
	return unk_0x695D13ECF7DAEC22(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_105220.f_10020.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_80(iParam2);
	return unk_0xA86A4D206EC8EB16(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_105220.f_10020.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)
{
	if (!unk_0x144E80F5C46A6B75(sParam0))
	{
		unk_0xD6423910AAD8A379(sParam0);
	}
}

void func_82()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_97))
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x8910237449BB6F79(iLocal_98);
				if (unk_0xF4FCC3C1048FF2AB(iLocal_97, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_98), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0xA4455714F3DCE207(iLocal_98, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0xA4455714F3DCE207(iLocal_98, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0x541C2AEF053615BC(iLocal_96, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0xC5A6DFE2B8987B17(&uLocal_101);
					unk_0x346129B364057FF6(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x85DB484A637CEAB9(0, iLocal_97, 0);
					unk_0xDE2D2B13F24A979D(0, -1);
					unk_0x535008C596714F9E(uLocal_101);
					unk_0xA8E6405305C0D7DF(iLocal_96, uLocal_101);
					unk_0x02DAF06EA4F08219(&uLocal_101);
					func_472("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_472("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	struct<3> Var0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_97))
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_97, iLocal_98, 0))
			{
				if (func_85(&iLocal_98))
				{
					if (func_84(unk_0x541C2AEF053615BC(iLocal_97, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0x541C2AEF053615BC(iLocal_96, 1) };
					if (unk_0x88A0E19F56297020(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0xBA1E09204DACEC7A(iLocal_97, 1f);
						unk_0xCC74639EAF7A9582(iLocal_97, 0.2f);
						unk_0x74C8565AFD43ECC8(iLocal_97, 0.05f);
						unk_0xD8386C462DB4E5CF(iLocal_97, iLocal_98, Var0, 0f, 3, 360f, 1);
						unk_0x56F2E1B5599188FA(iLocal_97, iLocal_96, -1, 2048, 4);
						func_472("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_472("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_472("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_472("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_472("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(struct<3> Param0, int iParam3)
{
	if (func_530())
	{
		return unk_0xBFED55DE95EA4B0C(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0x89E5F484A37AE468(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0xBFED55DE95EA4B0C(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		iVar0 = unk_0x6F79ECA8C83E4357(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x524ABB0435146845(*iParam0) > 0)
			{
				iVar1 = unk_0x5168CF98709EAA95(*iParam0);
				if (((iVar1 == 0 && unk_0x1AAF0C23233C57AF(*iParam0, 0, 0)) && (!unk_0xA499BE1E93004FF2(*iParam0, 1) && !unk_0xA499BE1E93004FF2(*iParam0, 0))) || unk_0x3187EF5798B5D209(*iParam0, 0, 0) == iLocal_96)
				{
					if (func_41(*iParam0))
					{
						if (!func_471(iLocal_49, 32768))
						{
							func_463(&iLocal_49, 32768);
							if (!func_471(iLocal_49, 8))
							{
								unk_0x37FA5A8A7F1136BA(func_86());
								func_463(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_471(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_471(iLocal_49, 8))
						{
							if (unk_0x320539481B2F0121(func_86()))
							{
								unk_0xFC4EC4916831BFC8(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
						iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
		}
		if (unk_0x83F8A448F340AE31(iParam0) == 931866387 && unk_0x6F79ECA8C83E4357(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0)) || unk_0x7512ED01F3F46714(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger"))
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)
{
	iLocal_295 = iParam0;
}

void func_90()
{
	if (func_530())
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_96))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_96);
			unk_0x44C98C11ED6DD327(iLocal_96);
		}
	}
	else
	{
		unk_0xA4E856A8CD53B8DF(iLocal_96);
		unk_0x44C98C11ED6DD327(iLocal_96);
	}
	iLocal_97 = 0;
	iLocal_98 = 0;
	unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, unk_0x55AEFCD285ECC0F2(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
}

void func_91(var uParam0)
{
	if (!func_471(iLocal_49, 32))
	{
		iLocal_294 = 1;
	}
	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_471(iLocal_49, 33554432))
		{
			if (func_530())
			{
				if (Global_1644658 || func_455())
				{
					func_454(0);
					func_463(&iLocal_49, 33554432);
				}
			}
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				if (func_471(iLocal_49, 1048576) || func_471(iLocal_49, 8192))
				{
					func_454(0);
					func_463(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_295)
	{
		case 0:
			if (func_471(iLocal_49, 16384) || func_471(iLocal_49, 8388608))
			{
				if (!func_10(&uLocal_113))
				{
					func_453(&uLocal_113);
				}
				if (func_452(&uLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_451("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_450(&uLocal_122, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_450(&uLocal_122, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_450(&uLocal_122, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
						break;
				}
				iLocal_295 = 1;
			}
			else
			{
				func_449();
				iLocal_296 = 2;
			}
			break;
		
		case 1:
			func_436(uParam0);
			break;
		
		case 2:
			func_423(uParam0);
			break;
		
		case 3:
			func_422();
			break;
		
		case 4:
			func_410(uParam0);
			break;
		
		case 5:
			func_399();
			break;
		
		case 6:
			func_398(uParam0);
			break;
		
		case 7:
			func_377();
			func_369();
			break;
		
		case 8:
			func_366();
			unk_0xBBC4195AD74D153D(0, 80, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_530())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			unk_0xBBC4195AD74D153D(0, 0, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_530())
			{
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_470();
			break;
		
		case 13:
			unk_0xBBC4195AD74D153D(0, 80, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0xBBC4195AD74D153D(0, 80, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_530())
	{
		if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_471(iLocal_49, 16))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_471(iLocal_49, 2))
	{
		func_93(1);
		func_472("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_521();
	if (func_530())
	{
		func_516(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()
{
	if (!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_72 == 0)
		{
			if (func_471(iLocal_49, 134217728))
			{
				unk_0xABA7AE40608505F2(iLocal_96, 32768, 0);
				unk_0xABA7AE40608505F2(iLocal_96, 196624, 1);
			}
			unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_303)
	{
		case 0:
			if (!unk_0x8C2668F45F2BB3F2(iLocal_96) || func_114(&uLocal_107) > 4f)
			{
				func_109(iLocal_96);
				if (func_70(func_71(iLocal_96)) == 1)
				{
					iLocal_303 = 2;
				}
				else
				{
					func_108(&uLocal_107);
					func_107("PROS_RESPONSE");
					iLocal_303 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0x8C2668F45F2BB3F2(iLocal_96) || func_105())
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 256);
				func_463(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&uLocal_107))
				{
					func_34(&uLocal_107);
				}
				if (func_114(&uLocal_107) > 15f || iLocal_306 != 0)
				{
					unk_0x7456702622C62EA0(1);
					func_104();
					iLocal_303 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()
{
	if (func_98(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		if (unk_0x17FAADF9916EF741())
		{
			unk_0xF845620A03C7425B(&iLocal_96);
		}
		else
		{
			func_100(iLocal_96, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)
{
	var uVar0;
	float fVar1;
	
	if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(1), 3))
	{
		unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x36CEFBE9B745A58D(uParam0))
	{
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				unk_0x2A022CF97A7A1A9B(iParam0);
			}
		}
		else
		{
			unk_0x2A022CF97A7A1A9B(iParam0);
		}
		if (func_471(iLocal_49, 33554432))
		{
			unk_0xA4E856A8CD53B8DF(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x55AEFCD285ECC0F2(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_463(&iLocal_49, 134217728);
			}
		}
		if (func_471(iLocal_49, 134217728))
		{
			unk_0xABA7AE40608505F2(iParam0, 32768, 1);
			unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xABA7AE40608505F2(iParam0, 196624, 1);
			unk_0x02DAF06EA4F08219(&uVar0);
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0x0D042F5C6172D20A(0, 1);
			if (unk_0x5237AF95232D78C5(iParam0, 0))
			{
				if (!unk_0xB66CFDE6B830965A(unk_0x9FE9D386222EEE47(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x96044E39418AAF17(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_72 > 0)
						{
							unk_0xE896C0AD02364F2A(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xE896C0AD02364F2A(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x0D042F5C6172D20A(0, 0);
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(iParam0, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
		if (func_530())
		{
			if (unk_0xE37F7B0CBE8148BF(iLocal_96))
			{
				if (unk_0xDD5EE7D9FC37FA16(unk_0x2F3B70ED60C4B9EB(iLocal_96)))
				{
					unk_0x22321800954A532E(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0x22321800954A532E(iParam0, 1);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)
{
	if (!unk_0x2101FAC9A9D4C29D(uParam0, unk_0x9FE9D386222EEE47(uParam0, 0), 0, 0, 0))
	{
		unk_0xA3981DED4FC2E56E(0, 0, 16842752);
	}
	else
	{
		unk_0xA3981DED4FC2E56E(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_306 == 0)
	{
		unk_0x4AED68BFACFB14CB(0);
		unk_0xBBC4195AD74D153D(0, 99, 1);
		unk_0xBBC4195AD74D153D(0, 76, 1);
		unk_0xBBC4195AD74D153D(0, 80, 1);
		unk_0xD55638CE45B2B948(2, 203);
		unk_0xD55638CE45B2B948(2, 201);
		unk_0xD55638CE45B2B948(2, 202);
		if (unk_0x093484B35A948BFC(2, 203))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (unk_0x093484B35A948BFC(2, 201))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (unk_0x093484B35A948BFC(2, 202))
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, 1, -1);
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0x8C2668F45F2BB3F2(iParam0))
		{
			unk_0xAFD2CBD312D69CFA(iParam0);
		}
		if (!unk_0x8C2668F45F2BB3F2(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_122, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_122, 4);
		func_450(&uLocal_122, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_530())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x3187EF5798B5D209(iVar1, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					bVar0 = true;
				}
				if (unk_0x3187EF5798B5D209(iVar1, 0, 0) != iLocal_96)
				{
					bVar0 = true;
				}
				if (unk_0x5168CF98709EAA95(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_521();
					func_516(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { unk_0xD7490CDEF40F3DA2(iLocal_99, 2) };
		unk_0xF3F01A78937DC905(180f);
		unk_0x2B9AEC08E469E384((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_313[0 /*7*/]));
	func_117(&(Local_313[3 /*7*/]));
	func_117(&(Local_313[2 /*7*/]));
	func_117(&(Local_313[1 /*7*/]));
	if (func_451("PROS_CAM_TOG") || func_451("PROS_CAM_OC"))
	{
		unk_0x7456702622C62EA0(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
		if (unk_0xEDEA6C8F42EE05F6(*uParam0))
		{
			unk_0x348665177DBFB93B(*uParam0, 0);
		}
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0xE59B7F5A03335350(iLocal_99, 0))
	{
		unk_0x44126473C39898E7(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_210(iLocal_76) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81)) && !func_210(iLocal_82))
		{
			if (!unk_0xCBBE5AFE2CD2E9B6(iLocal_96) || unk_0x48EBE45A9A7EB10C(unk_0xBC25C936A095B5BA()))
			{
				iLocal_302 = 5;
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	unk_0x4E0EC60D119222B1(2);
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(2, 37, 1);
	func_206(0);
	switch (iLocal_302)
	{
		case 0:
			if (func_530())
			{
				func_203(1088, -1);
			}
			func_34(&uLocal_119);
			func_202(func_43(), func_471(iLocal_49, 32768));
			iLocal_302 = 1;
			func_472("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0xBBC4195AD74D153D(0, 48, 1);
			unk_0xBBC4195AD74D153D(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
					}
					else
					{
						func_122();
						unk_0xC738E4BB7AAEF78D(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0xBBC4195AD74D153D(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0xBBC4195AD74D153D(0, 0, 1);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_72 = 3;
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
						func_108(&uLocal_104);
					}
				}
			}
			break;
		
		case 3:
			unk_0xBBC4195AD74D153D(0, 0, 1);
			if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_121();
				unk_0xC738E4BB7AAEF78D(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			unk_0xBBC4195AD74D153D(0, 0, 1);
			if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_454(0);
					}
				}
				else
				{
					func_472("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_454(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_72 == 0)
		{
			unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_96))
		{
			func_34(&uLocal_107);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 768);
			func_463(&iLocal_49, 2048);
			iLocal_295 = 13;
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()
{
	Global_2436641.f_1151.f_10 = 1;
}

void func_122()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
	{
		unk_0x53D8178763EDCE60(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
	{
		unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x144E80F5C46A6B75(sParam0))
	{
		unk_0xC1300D0F3A74E20B(sParam0);
	}
}

int func_125()
{
	if (iLocal_305 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	unk_0x82BD2E9769751DCD();
	unk_0x7D3F6AD99B4FACB2();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xF1734B55490E9045(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
	{
		return;
	}
	if (!unk_0xF9E082857622D91E(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
	{
		return;
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
	}
	bVar1 = func_43();
	bVar2 = func_471(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_83);
	}
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_305)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_83);
			}
			func_175(iLocal_96, 0);
			if (!func_530())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_305 = 1;
			break;
		
		case 1:
			func_172(iLocal_76);
			if (func_210(iLocal_77))
			{
				if (!func_471(iLocal_50, 4))
				{
					if (!func_530())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_463(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_76))
			{
				if (!func_471(iLocal_50, 8))
				{
					if (!func_530())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_463(&iLocal_50, 8);
					}
				}
			}
			if (func_471(iLocal_50, 4) && func_471(iLocal_50, 8))
			{
				if (!func_530())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_305 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_471(iLocal_50, 16))
				{
					if (!func_530())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_463(&iLocal_50, 16);
					}
				}
			}
			if (func_471(iLocal_50, 16))
			{
				if (!func_530())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_305 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_471(iLocal_50, 64))
				{
					if (!func_471(iLocal_49, 16777216))
					{
						if (!func_530())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) >= fVar0)
						{
							func_463(&iLocal_49, 16777216);
							iLocal_73++;
						}
					}
					else
					{
						if (!func_530())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_73 >= func_160(func_530(), func_166(), func_161()))
					{
						func_463(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_471(iLocal_50, 64))
			{
				func_463(&iLocal_50, 64);
			}
			if (func_471(iLocal_50, 64))
			{
				if (!func_530())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_305 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_80);
			if (func_210(iLocal_80))
			{
				if (!func_471(iLocal_50, 256))
				{
					if (!func_530())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_463(&iLocal_50, 256);
					}
				}
			}
			else if (!func_471(iLocal_50, 256))
			{
				func_463(&iLocal_50, 256);
			}
			if (func_471(iLocal_50, 256))
			{
				if (!func_530())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_305 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_81);
			if (func_210(iLocal_81))
			{
				if (!func_471(iLocal_50, 1024))
				{
					if (!func_530())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_463(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_471(iLocal_50, 1024))
			{
				func_463(&iLocal_50, 1024);
			}
			if (func_210(iLocal_82))
			{
				if (!func_471(iLocal_50, 2048))
				{
					if (!func_530())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_82) >= fVar0)
					{
						func_463(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_471(iLocal_50, 2048))
			{
				func_463(&iLocal_50, 2048);
			}
			if (func_471(iLocal_50, 1024) && func_471(iLocal_50, 2048))
			{
				func_175(iLocal_96, 0);
				unk_0xE896C0AD02364F2A(iLocal_96, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(iLocal_305, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xBC25C936A095B5BA(), -1);
				unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(iLocal_305, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_73 = 0;
				iLocal_61 = 0;
				func_128();
				iLocal_305 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_72 == 0 && !func_530())
	{
		if (func_21(unk_0xBC25C936A095B5BA()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_96);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_96);
		}
	}
	iLocal_72++;
	func_129();
}

void func_129()
{
	switch (func_21(unk_0xBC25C936A095B5BA()))
	{
		case 0:
			Global_105220.f_10020.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_105220.f_10020.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_105220.f_10020.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_105220.f_2354.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_105220.f_2354.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 8804;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 8804)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_133()
{
	return Global_1312736;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0xF85FAED5BA864282(iParam0, func_140(iVar0));
	Global_105220.f_10020.f_1[iVar0 /*11*/].f_10 = unk_0x6F79ECA8C83E4357(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_105220.f_10020.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0x695D13ECF7DAEC22(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_105220.f_10020.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0xA86A4D206EC8EB16(iParam0, func_80(iParam1));
}

var func_140(int iParam0)
{
	return func_141(iParam0);
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_105220.f_10020.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_105220.f_10020.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_105220.f_10020.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_148((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = iParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_145();
	}
}

void func_145()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_147(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_146() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_25277;
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_133();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_89562[iVar0] = Global_89562[iVar0 + 1];
		}
		else
		{
			Global_89562[iVar0] = unk_0x105601648511CC64();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_81, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_82, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_530())
	{
		unk_0x6013B113B38211A7(iParam1);
	}
	else
	{
		unk_0xB62398E536F695FC(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_81, 1, 0, 0);
	func_153(iLocal_96, iLocal_81, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_82, 0, 0, 0);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_82, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_530())
	{
		unk_0xE09EEAFD88EC7AA1(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_99, unk_0xB5B60A04E1654409(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_99, unk_0xB5B60A04E1654409(iLocal_99, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_530())
	{
		unk_0x9DA167FE68B804E2(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)
{
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		return;
	}
	if (func_530())
	{
		unk_0x63369B28A502633D(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0x510CBEAEC917268A(uParam0, iParam1, uParam2);
	}
}

var func_157(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	
	if (func_530())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = unk_0xC3B4161C4E86D1FA(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0xD0D858E538FD01C3(Param0, Param3, iParam8);
		unk_0x69D4A898629B0BDA(uVar0, bParam6);
		unk_0xC2BF3DE5E47F801D(uVar0, iParam7);
	}
	return uVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_80, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_80, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 0, 0, 1);
	func_153(iLocal_96, iLocal_80, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_80, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()
{
	if (func_530())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xBC25C936A095B5BA()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x6CB99B97664C3727(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_166()
{
	int iVar0;
	
	if (iLocal_297 != 0)
	{
		if (iLocal_61 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_61 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_61 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_61 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_79, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_79, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 1, 0);
	func_153(iLocal_96, iLocal_79, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_79, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_96, iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_78, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	var uVar0;
	
	if (func_530())
	{
		uVar0 = unk_0x8FD30584EB38411B(unk_0xB57F0B6D6209FF97(iParam0));
	}
	else
	{
		uVar0 = unk_0x8FD30584EB38411B(iParam0);
	}
	return uVar0;
}

void func_172(int iParam0)
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_76, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xBC25C936A095B5BA(), iLocal_77, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_530())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 1, 0, 1);
	func_153(iLocal_96, iLocal_76, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_77, 0, 0, 1);
	func_153(unk_0xBC25C936A095B5BA(), iLocal_77, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x62F3A07C43FFB568(iParam0, iLocal_99, 0))
	{
		if (!func_530())
		{
			unk_0xBD53A029D0155A42(iParam0, iLocal_99, iParam1);
		}
		else if (!unk_0x62F3A07C43FFB568(iParam0, iLocal_99, 0))
		{
			unk_0xD179FA0466FA4FE3(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = func_178(func_179(2), unk_0x3EA3A28A85F8C32F(iLocal_99, unk_0xB5B60A04E1654409(iLocal_99, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0x3EA3A28A85F8C32F(iLocal_99, unk_0xB5B60A04E1654409(iLocal_99, "windscreen")));
	Var2 = { unk_0xD7490CDEF40F3DA2(iLocal_99, 2) };
	fVar5 = unk_0x349C94FFF43E2979(iLocal_99);
	if (fVar5 >= 180f)
	{
		fVar6 = (fVar5 - 180f);
	}
	else
	{
		fVar6 = (fVar5 + 180f);
	}
	fVar7 = (-7f - Var2.f_1);
	fVar8 = (-5f - Var2.f_0);
	fVar9 = (-2.5f + Var2.f_0);
	fVar10 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!unk_0xEF0E25DA0CB6E8FF(Local_313[2 /*7*/]))
	{
		func_177(&(Local_313[2 /*7*/]), func_179(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(Local_313[1 /*7*/]))
	{
		func_177(&(Local_313[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(Local_313[0 /*7*/]))
	{
		func_177(&(Local_313[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(Local_313[3 /*7*/]))
	{
		func_177(&(Local_313[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
	unk_0x348665177DBFB93B(Local_313[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x348665177DBFB93B(*uParam0, 1);
	unk_0x9961B404F89D0597(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
}

var func_178(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xFDC254CE02DB0919((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
	}
	if (!unk_0xE59B7F5A03335350(iLocal_99, 0))
	{
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_99), &uVar3, &Var6);
	Var9 = { unk_0x3EA3A28A85F8C32F(iLocal_99, unk_0xB5B60A04E1654409(iLocal_99, "windscreen")) };
	Var12 = { unk_0x1483995DFFF0DEEA(iLocal_99, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0xA4455714F3DCE207(iLocal_99, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0xA4455714F3DCE207(iLocal_99, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0xA4455714F3DCE207(iLocal_99, -3.7f, 0.7f, Var12.f_2) };
			break;
		
		case 3:
			Var0 = { func_180() };
			break;
	}
	return Var0;
}

Vector3 func_180()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<2> Var6;
	var uVar9;
	
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_99), &Var6, &uVar9);
	Var0 = { unk_0x3EA3A28A85F8C32F(iLocal_99, unk_0xB5B60A04E1654409(iLocal_99, "windscreen")) };
	Var3 = { unk_0x1483995DFFF0DEEA(iLocal_99, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0xA4455714F3DCE207(iLocal_99, 0f, -unk_0x357058E632979E65(Var6.f_1), Var3.f_2);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_25522, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_25522, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0xEF0E25DA0CB6E8FF(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xF448AA2D7E08A675(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x2FB83B8BD6C05FD2(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xE186ACC7BE9B244E())
	{
		func_185(&(Local_313[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_530())
		{
			if (!func_451("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_530())
		{
			if (!func_451("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0xF7DDAAF0EFDAFA22(2, 0) && !unk_0xE186ACC7BE9B244E()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x348665177DBFB93B(Local_313[*iParam0 /*7*/], 1);
		}
	}
}

void func_183(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_471(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_471(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_471(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_471(iLocal_51, 16) && func_471(iLocal_51, 64)) && func_471(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	var uVar0[4];
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	
	unk_0x9601F9343A2063DE(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0xF31C9BB6C94E205D())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0x50465D2C022B9E04(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (Var9.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (Var9.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (Var9.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((Var9.f_0 - uParam0->f_4) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((Var9.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((Var9.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar8), -3f, 3f));
	}
	unk_0x3553F2A72957724E(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)
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

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x4C25B6CE9D0B3C92(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x4C25B6CE9D0B3C92(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x4C25B6CE9D0B3C92(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x4C25B6CE9D0B3C92(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x4B1521EDBF25A39C(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xE56557A1B607909F(2, 218) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xE56557A1B607909F(2, 219) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xE56557A1B607909F(2, 220) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xE56557A1B607909F(2, 221) * 127f));
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (bParam5)
		{
			if (unk_0xF31C9BB6C94E205D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xCBE319E6CA6FF4D2())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_188()
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_96))
		{
			if (!func_471(iLocal_49, 256))
			{
				unk_0xAFD2CBD312D69CFA(unk_0xBC25C936A095B5BA());
				unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_530())
					{
						unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 15, 1);
					}
					unk_0xF715C239F71B95D6(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_530())
					{
						unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 10, 1);
					}
					unk_0xF715C239F71B95D6(0, 4000, 210);
				}
				else
				{
					if (!func_530())
					{
						unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 5, 1);
					}
					unk_0xF715C239F71B95D6(0, 3000, 168);
				}
				func_463(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (unk_0x619CCA1A6FD0BC87(iLocal_96, 876132797))
				{
					unk_0xF715C239F71B95D6(0, 200, 84);
					unk_0x5EBD7EB63AD5FB1D(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_471(iLocal_49, 32768))
				{
					if (func_530())
					{
						iVar0 = unk_0xB57F0B6D6209FF97(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (unk_0x77FC50899603581D(iVar0))
					{
						fVar1 = unk_0x8FD30584EB38411B(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_504(512))
							{
								unk_0xF715C239F71B95D6(0, 200, 252);
								unk_0x5EBD7EB63AD5FB1D(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_508(512);
						}
					}
				}
				else if (unk_0x619CCA1A6FD0BC87(iLocal_96, 876132797))
				{
					unk_0xF715C239F71B95D6(0, 200, 252);
					unk_0x5EBD7EB63AD5FB1D(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_471(iLocal_52, iParam0))
	{
		func_463(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
	iVar0 = (iVar0 + (1 + iLocal_297));
	if (iVar0 > unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA());
	}
	unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar0, 0);
	func_191();
}

void func_191()
{
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		iLocal_59 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0x96044E39418AAF17(iParam0, func_48(), func_40(11), 3) || unk_0x96044E39418AAF17(iParam0, func_48(), func_40(21), 3)) || unk_0x96044E39418AAF17(iParam0, func_46(), func_39(11), 3)) || unk_0x96044E39418AAF17(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0x96044E39418AAF17(iLocal_96, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_194(iLocal_96, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar1 = unk_0x9FE9D386222EEE47(iParam0, 1);
		if (unk_0xE59B7F5A03335350(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()
{
	if (!func_193())
	{
		return;
	}
	if (func_530())
	{
		func_199();
	}
	if (unk_0x8C2668F45F2BB3F2(iLocal_96) || unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (unk_0x491B2241281A03B7(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96) && !unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_297 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_107))
		{
			func_453(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > unk_0x55AEFCD285ECC0F2(2f, 5f))
		{
			if (!func_471(iLocal_49, 65536))
			{
				func_463(&iLocal_49, 65536);
				unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_298);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&uLocal_107);
			}
		}
	}
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0xB5CEFD608600A09F()))
			{
				unk_0x53D8178763EDCE60(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x53D8178763EDCE60(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0xB5CEFD608600A09F()))
			{
				unk_0x53D8178763EDCE60(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x53D8178763EDCE60(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return 1;
	}
	return Global_2423644[iParam0 /*406*/].f_226;
}

void func_199()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_504(4))
	{
		if (!func_10(&uLocal_110))
		{
			func_453(&uLocal_110);
		}
		else if (func_7(&uLocal_110) > 2f)
		{
			if (!func_504(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_61++;
			}
			else if (func_504(16))
			{
				if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
				{
					func_508(4);
					func_508(16);
					func_34(&uLocal_110);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		fVar0 = unk_0xC4EA392E1E849405(unk_0xB5CEFD608600A09F());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_202(bool bParam0, bool bParam1)
{
	if (!func_530())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_132(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_132(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_132(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_132(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_132(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_132(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_132(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_132(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_132(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_132(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_132(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_132(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_132(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_132(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_132(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_132(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_132(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_132(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_132(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_132(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_132(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
{
	if (Global_1373635)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

void func_206(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_207(int iParam0)
{
	if (Global_14659)
	{
		func_208(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_15())
	{
		Global_14493.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_209(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_209(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_210(int iParam0)
{
	var uVar0;
	
	if (func_530())
	{
		uVar0 = unk_0x77FC50899603581D(unk_0xB57F0B6D6209FF97(iParam0));
	}
	else
	{
		uVar0 = unk_0x77FC50899603581D(iParam0);
	}
	return uVar0;
}

void func_211()
{
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(1000);
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), func_213(), 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), func_212());
		func_521();
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
		unk_0xF845620A03C7425B(&iLocal_96);
	}
}

float func_212()
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()
{
	int iVar0;
	
	if (func_216(&uLocal_104, 3f) && !unk_0xEDEA6C8F42EE05F6(uLocal_103))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_215() - 2f) * 1000f));
		unk_0x348665177DBFB93B(uLocal_102, 0);
		unk_0xAE099C1ADC89C331(uLocal_103, uLocal_102, iVar0, 1, 1);
	}
	if (func_216(&uLocal_104, func_215()))
	{
		unk_0x7A41D32A383895D8(1000);
		iLocal_295 = 10;
	}
}

float func_215()
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_216(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_7(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &uVar0, 11))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(*uParam0))
		{
			if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == unk_0x233ED4CD1F1A42C1(*uParam0))
					{
						func_116(0);
						unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
						func_521();
						func_516(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iLocal_96))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			iVar0 = unk_0x8D66276473ABD7CC(iLocal_96);
			if ((iVar0 - iLocal_60) < 0)
			{
				func_116(0);
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			iVar0 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				Var1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_116(0);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_521();
					func_516(uParam0);
				}
			}
		}
	}
}

void func_223()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (!func_471(iLocal_49, 16))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 0);
		}
		func_463(&iLocal_49, 16);
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_99))
			{
				unk_0xAC11493FE23DE883(iLocal_99, 1);
				unk_0x93D3868AE0D83B7C(iLocal_99, 4);
				unk_0xBDB583AA8DCA5600(iLocal_99, 1);
				unk_0xD38EB677CBE7440A(iLocal_99, 0, 0);
			}
		}
		else
		{
			unk_0xAC11493FE23DE883(iLocal_99, 1);
			unk_0x93D3868AE0D83B7C(iLocal_99, 4);
			unk_0xBDB583AA8DCA5600(iLocal_99, 1);
		}
		if (!func_365() || !unk_0x62F3A07C43FFB568(iLocal_96, iLocal_99, 0))
		{
			func_454(0);
			return;
		}
	}
	else
	{
		func_454(0);
		return;
	}
	func_206(0);
	if ((!unk_0xB66CFDE6B830965A(iLocal_99) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !func_471(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_363(1, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\HUD_321_GO", true, -1);
		iLocal_301 = 0;
		func_472("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x4E0EC60D119222B1(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_530())
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x724D816EA203A79E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
						{
							if (unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == unk_0xBC25C936A095B5BA())
							{
								if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
								{
									if (!unk_0x5CAE759AE8219D20(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
									{
										unk_0x77815D3407C6700D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0, 0);
									}
								}
								else
								{
									unk_0xC7587327285D9984(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xCE1EBDF53DEA0B16(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
							return;
						}
					}
				}
			}
			func_362();
			func_361();
			func_191();
			if (func_358())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_357();
				if (func_530())
				{
					func_189(2);
					if (func_530())
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
							{
								if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
								{
									unk_0x42793EADF14EC888(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
									unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 4);
									unk_0x7EE3B21D7AC635E8(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x2A022CF97A7A1A9B(iLocal_96);
				iLocal_301 = 2;
			}
			break;
		
		case 2:
			if (func_356(iLocal_304))
			{
				func_355(&iLocal_304);
				func_5(&iLocal_75, 2);
			}
			func_353(iLocal_96, 0);
			if (func_353(unk_0xBC25C936A095B5BA(), 1))
			{
				if (func_351(&sVar1, 0))
				{
					iLocal_48 = unk_0x621126C4FACA4770();
					iVar5 = unk_0x7FCE28BE45D0735E();
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							unk_0xC738E4BB7AAEF78D(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							unk_0xC738E4BB7AAEF78D(1);
						}
					}
					func_335();
					iLocal_301 = 3;
					func_472("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_334(&sVar1, -1);
					func_34(&uLocal_113);
					iLocal_297 = 3;
					iLocal_301 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xE186ACC7BE9B244E())
			{
				return;
			}
			unk_0x4F6BBF789EC53456(3);
			func_315();
			func_284(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_283(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			unk_0xBBC4195AD74D153D(0, 48, 1);
			unk_0xD55638CE45B2B948(2, 187);
			unk_0xD55638CE45B2B948(2, 188);
			unk_0xD55638CE45B2B948(2, 201);
			iVar0 = 0;
			if (unk_0x8ACB0C3FACC09467())
			{
				if (unk_0x0738078C96634C59(2))
				{
					unk_0xBBC4195AD74D153D(0, 1, 1);
					unk_0xBBC4195AD74D153D(0, 2, 1);
					unk_0x5EFA245B45A49778(0, 237, 1);
					unk_0x5EFA245B45A49778(0, 238, 1);
					unk_0x5EFA245B45A49778(0, 241, 1);
					unk_0x5EFA245B45A49778(0, 242, 1);
					func_279(0, 0, 0, 1);
					func_278(0, -1, 1);
					if (func_277())
					{
						if (Global_4266198 != iLocal_70)
						{
							unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_4266198;
							func_472("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x694514BD37EC4E94(2, 187) || (unk_0x50465D2C022B9E04(2) && unk_0x694514BD37EC4E94(2, 242))) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 33))) || (((unk_0x8ACB0C3FACC09467() && !unk_0x50465D2C022B9E04(2)) && iVar7 > 100) && (unk_0x105601648511CC64() - iLocal_89) > 300))
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_472("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = unk_0x105601648511CC64();
			}
			else if (((unk_0x694514BD37EC4E94(2, 188) || (unk_0x50465D2C022B9E04(2) && unk_0x694514BD37EC4E94(2, 241))) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 32))) || (((unk_0x8ACB0C3FACC09467() && !unk_0x50465D2C022B9E04(2)) && iVar7 < -100) && (unk_0x105601648511CC64() - iLocal_89) > 300))
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_472("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70 = (iLocal_70 - 1);
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = unk_0x105601648511CC64();
			}
			else if (unk_0x093484B35A948BFC(2, 201) || iVar0 == 1)
			{
				unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0x4E0EC60D119222B1(3);
				func_273();
				unk_0x5502708AECB47F5D(unk_0xBC25C936A095B5BA());
				iLocal_301 = 4;
			}
			func_272(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = unk_0xE41AC525C2050DE5(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_363(1, -1);
				func_271();
				func_270(0);
				iLocal_64 = unk_0x105601648511CC64();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_472("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_454(0);
					}
					return;
				}
				else
				{
					if (func_265() >= 20)
					{
						iVar10 += 20;
						func_225(20);
						unk_0x8EF3D958386640FE(iLocal_96, iVar10);
					}
					func_454(1);
					return;
				}
			}
			if (!unk_0xF9E082857622D91E(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
			{
			}
			else
			{
				func_363(1, -1);
				func_271();
				if (unk_0x90E07F8477EB4479())
				{
					func_463(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_472("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_297 != 3)
				{
					if (func_265() > func_224(iLocal_297))
					{
						func_225(func_224(iLocal_297));
						iVar10 = (iVar10 + func_224(iLocal_297));
					}
					func_35(&uLocal_107, (14f - 4f));
					func_472("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_295 = 11;
				}
				unk_0x8EF3D958386640FE(iLocal_96, iVar10);
				iLocal_64 = unk_0x105601648511CC64();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (unk_0x90E07F8477EB4479())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)
{
	var uVar0;
	
	if (!func_530())
	{
		func_236(func_18(), 1, iParam0);
	}
	else if (!func_235())
	{
		unk_0x7C5675C4E7270B2F(iParam0, 0, 0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_235())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
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
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_133()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_4262738 = 1;
			return 0;
		}
		if (Global_2458855)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262739 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262188[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262188[*uParam0 /*80*/].f_69 = 1;
					Global_4262188[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262725 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262737 = 1;
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_233(1, iParam4);
			Global_4262737 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_118.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_4262188[iParam0 /*80*/]);
		}
		func_230(&(Global_4262188[iParam0 /*80*/]));
	}
}

void func_230(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_231(&(uParam0->f_8.f_3));
	func_231(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_231(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262188[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2460027 = uParam1;
	Global_2460026 = iParam0;
}

int func_234(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262188[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_235())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262188[iVar0 /*80*/].f_2 = 1;
			Global_4262188[iVar0 /*80*/].f_1 = uParam5;
			Global_4262188[iVar0 /*80*/].f_3 = uParam1;
			Global_4262188[iVar0 /*80*/].f_4 = uParam2;
			Global_4262188[iVar0 /*80*/].f_7 = uParam3;
			Global_4262188[iVar0 /*80*/].f_5 = 0;
			Global_4262188[iVar0 /*80*/] = iParam0;
			Global_4262188[iVar0 /*80*/].f_6 = iParam4;
			Global_4262188[iVar0 /*80*/].f_72 = uParam8;
			Global_4262188[iVar0 /*80*/].f_71 = uParam7;
			Global_4262188[iVar0 /*80*/].f_74 = iParam9;
			Global_4262188[iVar0 /*80*/].f_73 = 0;
			Global_4262188[iVar0 /*80*/].f_75 = unk_0xC87A57742F7D3C06();
			Global_4262188[iVar0 /*80*/].f_79 = 0;
			Global_4262725 = 0;
			if (bParam6)
			{
				Global_4262188[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_235()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_105220.f_28021[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_264();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_263(99, 1);
					func_262(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_248(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_262(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_262(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_262(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_262(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_262(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_262(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_263(95, iParam3);
					break;
				
				case 1:
					func_263(97, iParam3);
					break;
				
				case 2:
					func_263(96, iParam3);
					break;
			}
			func_263(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
	}
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_262(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_262(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_262(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_239(iParam0);
	if (Global_35905 == 15)
	{
		func_238(0);
	}
	return 1;
}

void func_238(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_148(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_242() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_242() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_241(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)
{
	func_263(93, iParam0);
	func_263(29, iParam0);
	func_263(30, iParam0);
}

bool func_244(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_245(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_242() /*12171*/].f_7688.f_10, iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_133();
	}
	iVar1 = func_247(iParam0, iParam1);
	uVar2 = func_246(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_133();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_248(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_249(27, 1);
	return 1;
}

int func_249(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_250(iParam0, iParam1);
}

int func_250(int iParam0, int iParam1)
{
	if (func_531(14) && !func_261(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_260(&Global_4267702))
	{
		if (func_258(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_251(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_251(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_531(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	func_254(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_252(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_252(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_531(14) && !func_261(iParam1))
	{
		return 0;
	}
	if (func_258(uParam0, iParam1))
	{
		return 0;
	}
	if (func_257(uParam0) < 0f)
	{
		func_256(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_253(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_253(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_254(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_255(uParam0, iVar0);
		iVar0++;
	}
	func_256(uParam0, (Global_4267701 - 0.5f));
}

void func_255(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_256(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_257(var uParam0)
{
	return uParam0->f_80;
}

bool func_258(var uParam0, int iParam1)
{
	return func_259(uParam0, iParam1) != -1;
}

int func_259(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_260(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_262(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_264()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

int func_265()
{
	if (func_530())
	{
		return func_267(unk_0xB5CEFD608600A09F());
	}
	return func_266(func_18());
}

int func_266(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_267(int iParam0)
{
	var uVar0;
	
	uVar0 = func_268(iParam0);
	return uVar0;
}

int func_268(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return unk_0x8378732DD7891451(-1);
		}
		else if (func_269(iParam0))
		{
			return Global_1589291[iParam0 /*770*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_269(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_2436641.f_1, iParam0);
	}
	return 1;
}

void func_270(int iParam0)
{
	if (unk_0x93DD0CE3F3963C56() != 255)
	{
		unk_0xDEDB522781AEF1DC(iParam0);
		unk_0xD8FC01C22AE07484(iParam0);
	}
}

void func_271()
{
	Global_17206.f_5 = 0;
}

void func_272(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17345.f_5606 = iParam0;
	Global_17345.f_5741 = iParam2;
	if (Global_17345.f_5606 < Global_17345.f_5605)
	{
		Global_17345.f_5605 = Global_17345.f_5606;
	}
	else if ((Global_17345.f_5599 && Global_17345.f_5606 > Global_17345.f_5607) || (!Global_17345.f_5599 && Global_17345.f_5606 >= (Global_17345.f_5605 + Global_17345.f_5095)))
	{
		iVar0 = Global_17345.f_5605;
		while (iVar0 <= Global_17345.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17345.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17345.f_5095 && Global_17345.f_5605 < 128)
		{
			Global_17345.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17345.f_5605;
			while (iVar0 <= Global_17345.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17345.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17345.f_5598 = 0;
	Global_17345.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17345.f_4562), "", 16);
		StringCopy(&(Global_4266122.f_21), "", 16);
	}
}

void func_273()
{
	if (iLocal_70 == iLocal_71)
	{
		iLocal_297 = 3;
	}
	else
	{
		iLocal_298 = iLocal_289[iLocal_70];
		func_274();
		if (iLocal_298 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0x284F2ACE6839D3C0("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_297 = 0;
		}
		else if (iLocal_298 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 1;
		}
		else if (iLocal_298 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 2;
		}
	}
}

void func_274()
{
	switch (iLocal_298)
	{
		case 0:
			func_276();
			break;
		
		case 1:
		case 2:
			func_275();
			break;
	}
}

void func_275()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_276()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_277()
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4266198 > -1)
		{
			if (unk_0x694514BD37EC4E94(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_278(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x08009E53F6E7E15C();
	}
	if (Global_4266198 == -6)
	{
		unk_0x5C26A2F0EACA52AB(4);
		if (iParam0 && unk_0x8FCEEB789599BD9B(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4266198 = -1;
			return 0;
		}
	}
	if (((Global_4266198 > -1 || Global_4266198 == -3) || Global_4266198 == -2) || unk_0x1753B0F1C41FE93F())
	{
		unk_0x5C26A2F0EACA52AB(1);
		return 0;
	}
	if (Global_4266198 == -1 && iParam0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 237))
		{
			unk_0x5C26A2F0EACA52AB(4);
			Global_4266198 = -6;
			return 1;
		}
		else
		{
			unk_0x5C26A2F0EACA52AB(3);
			return 0;
		}
	}
	unk_0x5C26A2F0EACA52AB(1);
	return 0;
}

void func_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x50465D2C022B9E04(2))
	{
		Global_4266198 = -1;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_17342;
	fVar2 = (fVar0 + Global_17344);
	fVar3 = Global_17345.f_5600;
	fVar1 = (Global_17345.f_5600 - (IntToFloat(Global_17345.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17345.f_5602 < 1)
	{
		fVar1 = (Global_17345.f_5600 - 0.034722f);
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	func_282();
	if (Global_4266198 == -6)
	{
		return;
	}
	Global_4266198 = -1;
	fVar7 = Global_4266192;
	fVar8 = Global_4266193;
	if (Global_17345.f_5603 > Global_17345.f_5602)
	{
		if (((Global_4266192 >= fVar0 && Global_4266192 <= fVar2) && Global_4266193 >= fVar3) && Global_4266193 < (fVar3 + fVar6))
		{
			Global_4266198 = -2;
			if (bParam3)
			{
				func_281(0);
			}
			return;
		}
		if (((Global_4266192 >= fVar0 && Global_4266192 <= fVar2) && Global_4266193 >= (fVar3 + fVar6)) && Global_4266193 < (fVar3 + 0.034722f))
		{
			Global_4266198 = -3;
			if (bParam3)
			{
				func_281(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17345.f_5603 == -1)
		{
			Global_4266198 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17345.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xC2EAD30963BDAA47(76, 84);
				unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
				func_280(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17344, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x2A025E7CEBB76D14();
			}
		}
		Global_4266198 = Global_17345.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4266198 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4266198 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4266198 = -4;
		return;
	}
	Global_4266198 = -1;
}

void func_280(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_281(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17342;
	fVar1 = Global_17345.f_5600;
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	if (Global_4266198 == -2)
	{
		func_280(fVar0, fVar1, Global_17344, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4266198 == -3)
	{
		func_280(fVar0, (fVar1 + fVar2), Global_17344, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_282()
{
	Global_4266194 = Global_4266192;
	Global_4266195 = Global_4266193;
	Global_4266192 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4266193 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4266196 = (Global_4266192 - Global_4266194);
	Global_4266197 = (Global_4266193 - Global_4266195);
}

void func_283(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x5F9521C8EE73F79F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x5F9521C8EE73F79F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x5F9521C8EE73F79F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x5F9521C8EE73F79F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xBCEB785249D7E5BE(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBCEB785249D7E5BE(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xBCEB785249D7E5BE(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xBCEB785249D7E5BE(2, 221) * 127f));
		}
	}
}

void func_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	int iVar55;
	bool bVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	int iVar62;
	float fVar63;
	float fVar64;
	float fVar65;
	char cVar66[64];
	char cVar82[64];
	float fVar98;
	int iVar99;
	float fVar100;
	float fVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_312(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17345)
	{
		if (func_310(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17345 = 0;
		}
	}
	if (unk_0x56BEECB328B6D29D(&(Global_17345.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
	{
		fVar60 = Global_17343;
	}
	else
	{
		fVar60 = (((Global_17343 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17344;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		unk_0x1BBB0A5225346008(&iVar61, &iVar62);
		fVar64 = unk_0x3771EE4CB542D71E(0);
		if (func_309())
		{
			iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) * fVar64));
		}
		fVar65 = (unk_0xBBDA792448DB5A89(iVar61) / unk_0xBBDA792448DB5A89(iVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_309())
		{
			fVar63 = 1f;
		}
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar63));
		iVar62 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) / fVar63));
	}
	else
	{
		unk_0x7A569F3885B2E08A(&iVar61, &iVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17345.f_5598)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
			{
				fVar51 = Global_17343;
			}
			else
			{
				if (Global_17345)
				{
					StringCopy(&cVar66, func_308(29), 64);
					StringCopy(&cVar82, func_305(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_280(Global_17342, Global_17343, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						unk_0x51DA985AC0B70E2E(&cVar66, &cVar82, (Global_17342 + (fParam5 * 0.5f)), (Global_17343 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x51DA985AC0B70E2E(&cVar66, &cVar82, (Global_17342 + (fParam5 * 0.5f)), (Global_17343 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17345.f_7901)
				{
					iVar1 = Global_17345.f_7897;
					iVar2 = Global_17345.f_7898;
					iVar3 = Global_17345.f_7899;
					iVar4 = Global_17345.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_280(Global_17342, (Global_17343 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17343 + fVar58) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_17345.f_1)) != 0)
				{
					func_304();
					unk_0x8B371195127AACF2(&(Global_17345.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17345.f_68)
					{
						if (Global_17345.f_5[iVar14] == 2)
						{
							unk_0xAA5C5BF0489E5553(Global_17345.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17345.f_5[iVar14] == 3)
						{
							unk_0x3AE7CB4034BE212F(Global_17345.f_14[iVar16], Global_17345.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17345.f_5[iVar14] == 1)
						{
							unk_0xC9C304D0AABE1335(&(Global_17345.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17345.f_5[iVar14] == 8)
						{
							unk_0xC9C304D0AABE1335(&(Global_17345.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17345.f_5[iVar14] == 5)
						{
							unk_0x607C19B90D297FE2(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17345.f_5[iVar14] == 6)
						{
							unk_0xC9C304D0AABE1335(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17345.f_5[iVar14] == 7)
						{
							unk_0x607C19B90D297FE2(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17345.f_5[iVar14] == 9)
						{
							unk_0x607C19B90D297FE2(&(Global_17345.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x3A8B9C7B1C825123((Global_17342 + 0.00390625f), ((Global_17343 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17345.f_5601 > Global_17345.f_5095)
				{
					if (Global_17345.f_5604 != 0)
					{
						func_304();
						func_302((((Global_17342 + fParam5) - 0.00390625f) - func_303("CM_ITEM_COUNT", Global_17345.f_5604, Global_17345.f_5603)), ((Global_17343 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17345.f_5604, Global_17345.f_5603);
					}
				}
			}
			iVar6 = Global_17345.f_5605;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17345.f_7911)
			{
				iVar1 = Global_17345.f_7907;
				iVar2 = Global_17345.f_7908;
				iVar3 = Global_17345.f_7909;
				iVar4 = Global_17345.f_7910;
			}
			else
			{
				unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17345.f_5095 && iVar6 <= Global_17345.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17345.f_5355[iVar6])
					{
						if (Global_17345.f_5226[iVar6] && iVar6 != Global_17345.f_5605)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17345.f_5612[iVar6] != 0f)
						{
							fVar57 = Global_17345.f_5612[iVar6];
						}
						fVar51 = (fVar51 + fVar57);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar57 = 0.034722f;
					fVar51 = (fVar51 + fVar57);
					iVar9++;
					if (Global_17345.f_5088 <= 1)
					{
						Global_17345.f_5088++;
					}
					iVar55 = 1;
				}
			}
			unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_17342 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17345.f_5601 > Global_17345.f_5095)
			{
				if (Global_17345.f_7916)
				{
					iVar1 = Global_17345.f_7912;
					iVar2 = Global_17345.f_7913;
					iVar3 = Global_17345.f_7914;
					iVar4 = Global_17345.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_280(Global_17342, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x9893E000F1F078E7("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar63));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar63));
				if (Global_17345.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE45648BDBF3441F5(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "shop_arrows_upANDdown", (Global_17342 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar63), ((Var38.f_1 / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_4562)) != 0 && Global_17345.f_4636 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17342 + 0.0046875f);
				if (Global_17345.f_4638 != 0)
				{
					func_310(Global_17345.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17342 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_301(fVar42);
				unk_0xD8C1258D4AB3DD08(&(Global_17345.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17345.f_4632)
				{
					if (Global_17345.f_4566[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_17345.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17345.f_4566[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_17345.f_4575[iVar16], Global_17345.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17345.f_4566[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar42, (fVar51 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_280(Global_17342, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17345.f_7921)
				{
					iVar1 = Global_17345.f_7917;
					iVar2 = Global_17345.f_7918;
					iVar3 = Global_17345.f_7919;
					iVar4 = Global_17345.f_7920;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_17342 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_301(fVar42);
				unk_0x8B371195127AACF2(&(Global_17345.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17345.f_4632)
				{
					if (Global_17345.f_4566[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_17345.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17345.f_4566[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_17345.f_4575[iVar16], Global_17345.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17345.f_4566[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17345.f_4566[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_17345.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17345.f_4638 != 0)
				{
					func_310(Global_17345.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_300(Global_17345.f_4638, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4638), func_305(Global_17345.f_4638, 1), ((Global_17342 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17345.f_4636 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_17345.f_4637) > Global_17345.f_4636)
					{
						StringCopy(&(Global_17345.f_4562), "", 16);
						Global_17345.f_4636 = -1;
					}
				}
			}
			if (unk_0x56BEECB328B6D29D(&(Global_4266122.f_21)) != 0 && Global_4266122.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17342 + 0.0046875f);
				if (Global_4266122.f_67 != 0)
				{
					func_310(Global_4266122.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17342 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_301(fVar42);
				unk_0xD8C1258D4AB3DD08(&(Global_4266122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266122.f_61)
				{
					if (Global_4266122.f_25[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_4266122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266122.f_25[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_4266122.f_34[iVar16], Global_4266122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266122.f_25[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar42, (fVar51 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_280(Global_17342, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17345.f_7921)
				{
					iVar1 = Global_17345.f_7917;
					iVar2 = Global_17345.f_7918;
					iVar3 = Global_17345.f_7919;
					iVar4 = Global_17345.f_7920;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_17342 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_301(fVar42);
				unk_0x8B371195127AACF2(&(Global_4266122.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266122.f_61)
				{
					if (Global_4266122.f_25[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_4266122.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266122.f_25[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_4266122.f_34[iVar16], Global_4266122.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266122.f_25[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266122.f_25[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_4266122.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4266122.f_67 != 0)
				{
					func_310(Global_4266122.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_300(Global_4266122.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0x51DA985AC0B70E2E(func_308(Global_4266122.f_67), func_305(Global_4266122.f_67, 1), ((Global_17342 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4266122.f_65 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_4266122.f_66) > Global_4266122.f_65)
					{
						StringCopy(&(Global_4266122.f_21), "", 16);
						Global_4266122.f_65 = -1;
					}
				}
			}
			func_293(iVar61, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17345.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar99 = Global_17345.f_5088;
			if (Global_17345.f_5599)
			{
				iVar99 = (Global_17345.f_5602 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17345.f_5612[iVar6] != 0f)
				{
					fVar57 = Global_17345.f_5612[iVar6];
				}
				if (Global_17345.f_5599)
				{
					iVar6 = Global_17345.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17345.f_5605 && iVar9 < Global_17345.f_5095)
				{
					bVar33 = true;
					if (Global_17345.f_5606 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17345.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17345.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17342 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17345.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17345.f_7923)
					{
						unk_0xE45648BDBF3441F5(Global_17345.f_7922, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0xE45648BDBF3441F5(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Nav", (Global_17342 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17345.f_5744 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_291(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x8B371195127AACF2("DFLT_MNU_OPT");
					unk_0x3A8B9C7B1C825123(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17345.f_5096)
					{
						if (unk_0xFA30DFD0084E92FE(Global_17345.f_4959[iVar6], iVar8) || Global_17345.f_4926[iVar8] == 5)
						{
							if (Global_17345.f_5599)
							{
								iVar19 = Global_17345.f_7568[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar20 = Global_17345.f_7609[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar21 = Global_17345.f_7650[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar22 = Global_17345.f_7691[((iVar9 * Global_17345.f_5096) + iVar8)];
								iVar23 = Global_17345.f_7732[((iVar9 * Global_17345.f_5096) + iVar8)];
							}
							else
							{
								Global_17345.f_7568[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar19;
								Global_17345.f_7609[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar20;
								Global_17345.f_7650[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar21;
								Global_17345.f_7691[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar22;
								Global_17345.f_7732[((iVar9 * Global_17345.f_5096) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17345.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17345.f_5875[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17345.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17345.f_5875[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17345.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17342 + 0.0046875f) + Global_17345.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17345.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17345.f_4932[iVar8 + 1])
							{
								fVar46 = (Global_17345.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17342 + Global_17344) - 0.0046875f) - fVar34);
							}
							if ((Global_17345.f_4945[iVar8] && Global_17345.f_5741) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17345.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17345.f_5599)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_291(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												unk_0xE746379C2AF24EF6(&(Global_17345.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xAA5C5BF0489E5553(Global_17345.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3AE7CB4034BE212F(Global_17345.f_4175[(iVar21 + iVar27)], Global_17345.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = unk_0x2207C0EA517B975D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_310(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17345.f_4433[(iVar22 + iVar14)] == 2 || Global_17345.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17345.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17345.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
											Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar43;
											Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar43 = Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar44 = Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_291(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17345.f_7927 && Global_17345.f_7928 == iVar6)
											{
												func_290(bVar32);
											}
											unk_0x8B371195127AACF2(&(Global_17345.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_2458236[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xAA5C5BF0489E5553(Global_17345.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3AE7CB4034BE212F(Global_17345.f_4175[(iVar21 + iVar27)], Global_17345.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17345.f_4433[(iVar22 + iVar28)] == 2 || Global_17345.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_310(Global_17345.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_310(Global_17345.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_300(Global_17345.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17345.f_4953[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4433[(iVar22 + iVar28)]), func_305(Global_17345.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4433[(iVar22 + iVar28)]), func_305(Global_17345.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															fVar42 = (fVar42 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17345.f_4953[iVar8] == 2)
											{
												unk_0x3A8B9C7B1C825123(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x3A8B9C7B1C825123((fVar34 + fVar42), fVar35, 0);
												if (func_289() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_291(0, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
														StringCopy(&cVar107, "TEST_LABEL", 16);
														fVar111 = 0f;
														fVar112 = 55f;
														fVar113 = 0.0185f;
														fVar114 = 0.004f;
														fVar115 = 0.02f;
														unk_0xB8F3C51875F7BEA3(0f, (0.35f * 0.7f));
														unk_0xCC4FE6A016BA0765(255, 255, 255, 150);
														unk_0xF7EBEC3FF57AEC65((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
														unk_0x8B371195127AACF2(&cVar107);
														unk_0xAA5C5BF0489E5553((Global_17345.f_5605 + iVar30));
														unk_0x3A8B9C7B1C825123((fVar34 - fVar115), (fVar35 + fVar114), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar42 = (fVar42 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17345.f_4433[(iVar22 + iVar14)] != 2 && Global_17345.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_310(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_310(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_300(Global_17345.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17345.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4433[(iVar22 + iVar14)]), func_305(Global_17345.f_4433[(iVar22 + iVar14)], bVar32), (Global_17342 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_17345.f_4953[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4433[(iVar22 + iVar14)]), func_305(Global_17345.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4433[(iVar22 + iVar14)]), func_305(Global_17345.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar41 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17345.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17345.f_5599)
										{
											func_291(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17345.f_7927 && Global_17345.f_7928 == iVar6)
											{
												func_290(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0xAA5C5BF0489E5553(Global_17345.f_3918[iVar20]);
											fVar43 = unk_0x2207C0EA517B975D(1);
											fVar42 = 0f;
											if (Global_17345.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17345.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
											Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar43 = Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_291(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
										func_288((fVar34 + fVar42), fVar35, "NUMBER", Global_17345.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17345.f_5599)
										{
											func_291(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17345.f_7927 && Global_17345.f_7928 == iVar6)
											{
												func_290(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0x3AE7CB4034BE212F(Global_17345.f_4175[iVar21], Global_17345.f_4304[iVar21]);
											fVar43 = unk_0x2207C0EA517B975D(1);
											fVar42 = 0f;
											if (Global_17345.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17345.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
											Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
											fVar43 = Global_17345.f_7814[((iVar9 * Global_17345.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_310(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_300(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_291(bVar32, Global_17345.f_1610[iVar24], Global_17345.f_1867[iVar24], bVar56, 0, 0, 0);
										func_287((fVar34 + fVar42), fVar35, "NUMBER", Global_17345.f_4175[iVar21], Global_17345.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_310(Global_17345.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17345.f_5599)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17345.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17345.f_4953[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar42;
												Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17345.f_7773[((iVar9 * Global_17345.f_5096) + iVar8)];
												fVar44 = Global_17345.f_7855[((iVar9 * Global_17345.f_5096) + iVar8)];
											}
											if (bVar54)
											{
												if (func_310(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17345.f_4953[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_300(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x51DA985AC0B70E2E(func_308(26), func_305(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
												if (func_310(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_310(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_300(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0x51DA985AC0B70E2E(func_308(27), func_305(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_310(Global_17345.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_300(Global_17345.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0x51DA985AC0B70E2E(func_308(Global_17345.f_4433[iVar22]), func_305(Global_17345.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_286(Global_17345.f_4433[iVar22])), (fVar37 * func_286(Global_17345.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
									bVar41 = true;
									iVar22++;
									break;
								
								case 5:
									bVar41 = true;
									break;
							}
							if (Global_17345.f_4926[iVar8] == 5)
							{
								if (Global_17345.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17345.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17345.f_4938[iVar8]);
								if (Global_17345.f_4945[iVar8])
								{
									if (func_310(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17345.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17345.f_7552[iVar9] = iVar6;
						Global_17345.f_5607 = iVar6;
						iVar9++;
						if (Global_17345.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17345.f_5612[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17345.f_5612[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17345.f_5598)
					{
						Global_17345.f_5355[iVar6] = 1;
						if (Global_17345.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17345.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17345.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17345.f_5598)
			{
				Global_17345.f_5600 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17345.f_5603 = iVar11;
				Global_17345.f_5601 = iVar10;
				Global_17345.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17345.f_5599)
	{
		Global_17345.f_5602 = iVar9;
		Global_17345.f_5599 = 1;
	}
	Global_17345.f_5743 = fVar51;
	Global_17345.f_5745 = unk_0x105601648511CC64();
	unk_0xE7918A3D05166D98(Global_17345.f_5743);
	if (!Global_17345.f_7896)
	{
		func_206(0);
	}
	Global_17345.f_7896 = 0;
	if (bParam2)
	{
		unk_0x4E0EC60D119222B1(10);
	}
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(8);
	if (bParam0)
	{
		func_285(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_285(int iParam0)
{
	Global_1364578.f_1079 = iParam0;
}

float func_286(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_287(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(uParam3, uParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_288(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

var func_289()
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_290(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE45648BDBF3441F5(Global_17345.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(Global_17345.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
}

void func_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_292(Global_17345.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE45648BDBF3441F5(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
		else
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	else
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0x567A3300A78B3D65(1);
	if (bParam5)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(4);
	}
	else if (bParam6)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(6);
	}
	else
	{
		unk_0xC8793973D4960AC4(0);
	}
	unk_0x666751E43D377EAA(0f, 1f);
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_312(bParam4, bParam8))
	{
		return;
	}
	if (func_298())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_296(unk_0xB5CEFD608600A09F(), 0))
		{
			return;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x0F8865E539C1FCE8() == 0 || unk_0xF32BA80A2DED1FC6())
		{
			return;
		}
	}
	if (Global_17345.f_4639 != 0)
	{
		if (unk_0x8A0D8839261BAEEF(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17345.f_4639)
			{
				if (Global_17345.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17345.f_4641[iVar1 /*16*/]), unk_0xE57EAD1FEA2A6FAF(2, Global_17345.f_4896[iVar1], 1), 64);
				}
				else if (Global_17345.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17345.f_4641[iVar1 /*16*/]), unk_0xC7CF72D26EA6A227(2, Global_17345.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17345.f_4640 = 0;
		}
		if (!Global_17345.f_4640)
		{
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88((1f - (Global_17345.f_4951 / 100f)));
			unk_0xF9FBC2F3F73D94C9();
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(1);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar1 = 0;
			while (iVar1 < Global_17345.f_4639)
			{
				if (unk_0x56BEECB328B6D29D(&(Global_17345.f_4834[iVar1 /*4*/])) != unk_0x56BEECB328B6D29D("PREV"))
				{
					unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar1);
					func_295(&(Global_17345.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_17345.f_4834[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_295(&(Global_17345.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17345.f_4883[iVar1] == -1)
					{
						func_294(&(Global_17345.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x57016C44F10111F0(&(Global_17345.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4C36886AAFD04CF8(iParam2, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(iParam2);
						}
						unk_0x64989E60CF560CA1();
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (Global_17345.f_4896[iVar1] != 358 && unk_0xFA30DFD0084E92FE(Global_17345.f_4922, iVar1))
						{
							unk_0x5E5DBD0A6623969E(1);
							unk_0x1E1FB49121565EB6(Global_17345.f_4896[iVar1]);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(0);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar1++;
			}
			if (unk_0x56BEECB328B6D29D(&(Global_4266122.f_16)) != unk_0x56BEECB328B6D29D(""))
			{
				unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(Global_17345.f_4639);
				func_295(&Global_4266122);
				if (Global_4266122.f_20 == -1)
				{
					func_294(&(Global_4266122.f_16));
				}
				else
				{
					unk_0x57016C44F10111F0(&(Global_4266122.f_16));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17345.f_4952)
			{
				unk_0x1E1FB49121565EB6(1);
			}
			else
			{
				unk_0x1E1FB49121565EB6(0);
			}
			unk_0xF9FBC2F3F73D94C9();
			Global_17345.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17345.f_4639)
		{
			if (Global_17345.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1E1FB49121565EB6(iVar1);
					unk_0x57016C44F10111F0(&(Global_17345.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar1++;
		}
		if (Global_4266122.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x29CD142125FE177B(Global_17345.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x57016C44F10111F0(&(Global_4266122.f_16));
				if (bParam5)
				{
					unk_0x4C36886AAFD04CF8(iParam2, 70);
				}
				else
				{
					unk_0xAA5C5BF0489E5553(iParam2);
				}
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17345.f_7931)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
				Global_17345.f_7931 = 1;
			}
		}
		else if (Global_17345.f_7931)
		{
			unk_0xC0404835F30391BB(15);
			Global_17345.f_7931 = 0;
		}
		unk_0x2A025E7CEBB76D14();
		if (Global_17345.f_4925)
		{
			unk_0xC2EAD30963BDAA47(82, 66);
			unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
			unk_0x65E432C782E7E702(Global_17345.f_5530[iVar0 /*10*/], Global_17345.f_4923, Global_17345.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			unk_0x4B6031094354FED6(Global_17345.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_294(var uParam0)
{
	unk_0x57016C44F10111F0(uParam0);
	unk_0x64989E60CF560CA1();
}

void func_295(var uParam0)
{
	unk_0xCB30200B8055CA57(uParam0);
}

bool func_296(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_297(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_297(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_298()
{
	struct<3> Var0;
	
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	if (func_299())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x652515566BB40BA9(&Var0);
		if (Global_14438 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_299()
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xE45648BDBF3441F5(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_301(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xB1B2D2C9D47D1278(2);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA(fParam0, ((Global_17342 + Global_17344) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_302(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(uParam3);
	unk_0xAA5C5BF0489E5553(uParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_303(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_304();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(uParam1);
	unk_0xAA5C5BF0489E5553(uParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17345.f_7906)
	{
		iVar0 = Global_17345.f_7902;
		iVar1 = Global_17345.f_7903;
		iVar2 = Global_17345.f_7904;
		iVar3 = Global_17345.f_7905;
	}
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA((Global_17342 + 0.0046875f), ((Global_17342 + Global_17344) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

var func_305(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_307(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var19, &uVar3))
			{
				return func_306(&uVar3);
			}
		}
		else
		{
			return func_306(&(Global_17345.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_306(var uParam0)
{
	return uParam0;
}

struct<13> func_307(int iParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_308(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_17345.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_307(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var16, &uVar0);
			return func_306(&uVar0);
		}
		else
		{
			return func_306(&(Global_17345.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_309()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_308(iParam0), 64);
	StringCopy(&cVar16, func_305(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar32, &iVar33);
			fVar35 = unk_0x3771EE4CB542D71E(0);
			if (func_309())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_309())
			{
				fVar34 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar32, &iVar33);
		}
		Var37 = { unk_0x9893E000F1F078E7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_311(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_311(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17344)
			{
				*fParam4 = (*fParam4 * (Global_17344 / *fParam3));
				*fParam3 = Global_17344;
			}
		}
		return 1;
	}
	return 0;
}

float func_311(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_312(bool bParam0, bool bParam1)
{
	if (Global_2436641.f_1888.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_24(8, -1) && func_313() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_71238) || Global_17345.f_7930) || unk_0x18158A50125911B6()) || Global_93007.f_1385)
	{
		return 0;
	}
	return 1;
}

int func_313()
{
	return Global_1312789;
}

int func_314(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x7AF0088ABFA713B6() && unk_0x32405B7614E36453())
		{
			iParam2 = unk_0x115A5CB728B7997D();
		}
	}
	StringCopy(&cVar0, unk_0x1377080E9B0BD993(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x56BEECB328B6D29D(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17345.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17345.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17345.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_315()
{
	if (!func_356(iLocal_304))
	{
		iLocal_304 = func_333();
		func_324(&iLocal_304, 0, 0, unk_0x491B2241281A03B7(1, 2), 0, 0, 0);
	}
	else if (!func_471(iLocal_75, 2))
	{
		if (func_316(iLocal_304))
		{
			iLocal_304 = func_333();
			func_324(&iLocal_304, 0, 0, unk_0x491B2241281A03B7(1, 2), 0, 0, 0);
			func_463(&iLocal_75, 2);
		}
	}
	else if (func_316(iLocal_304))
	{
		func_271();
		func_454(0);
	}
}

bool func_316(int iParam0)
{
	return func_317(func_333(), iParam0);
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_356(iParam1) || !func_356(iParam0))
	{
		return 1;
	}
	iVar0 = func_323(iParam0);
	iVar1 = func_323(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_322(iParam0);
	iVar1 = func_322(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_321(iParam0);
	iVar1 = func_321(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_320(iParam0);
	iVar1 = func_320(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_319(iParam0);
	iVar1 = func_319(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_318(iParam0);
	iVar1 = func_318(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_319(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_320(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_321(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_322(int iParam0)
{
	return iParam0 & 15;
}

var func_323(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_160(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_323(*iParam0);
	iVar1 = func_322(*iParam0);
	iVar2 = func_321(*iParam0);
	iVar3 = func_320(*iParam0);
	iVar4 = func_319(*iParam0);
	iVar5 = func_318(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_332(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_332(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_325(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_325(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_331(uParam0, iParam1);
	func_330(uParam0, iParam2);
	func_329(uParam0, iParam3);
	func_328(uParam0, iParam5);
	func_327(uParam0, iParam4);
	func_326(uParam0, iParam6);
}

void func_326(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_327(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_322(*uParam0);
	iVar1 = func_323(*uParam0);
	if (iParam1 < 1 || iParam1 > func_332(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_328(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_329(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_330(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_331(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_332(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_333()
{
	var uVar0;
	
	func_331(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_330(&uVar0, unk_0x7E09057438B9D216());
	func_329(&uVar0, unk_0x6E06C0DB9B43570D());
	func_327(&uVar0, unk_0xBE14F159908E4EE5());
	func_328(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_326(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_334(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_335()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_350(1);
	func_270(1);
	unk_0x43F06392C4EF25E0(0);
	func_349(0, 0);
	func_348(1, 1, 0, 0, 0);
	func_347(1, 2, 1, 1, 1);
	func_346("PROS_OPTS");
	func_345(201, "PROS_SELECT", -1, 0);
	iLocal_71 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_265() >= iVar0)
	{
		func_341(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar0, 0);
		iLocal_289[iLocal_71] = 0;
		iLocal_71++;
	}
	if (func_265() >= iVar1 && func_337(iLocal_99))
	{
		func_341(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar1, 0);
		iLocal_289[iLocal_71] = 1;
		iLocal_71++;
	}
	if (func_265() >= iVar2 && func_337(iLocal_99))
	{
		func_341(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_338(iVar2, 0);
		iLocal_289[iLocal_71] = 2;
		iLocal_71++;
	}
	func_341(iLocal_71, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_70 = 0;
	func_272(iLocal_70, 1, 1);
	func_336();
	iLocal_89 = unk_0x105601648511CC64();
	iLocal_301 = 3;
}

void func_336()
{
	Global_17206.f_5 = 1;
}

int func_337(int iParam0)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == joaat("infernus2"))
		{
			return 0;
		}
	}
	return 1;
}

void func_338(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17345.f_5092 >= 256)
	{
		return;
	}
	if (Global_17345.f_5610 >= 4)
	{
		return;
	}
	if (Global_17345.f_5611 != 1)
	{
		return;
	}
	if (Global_17345.f_5610 >= Global_17345.f_5608)
	{
		return;
	}
	Global_17345.f_3918[Global_17345.f_5092] = iParam0;
	Global_17345.f_5092++;
	Global_17345.f_2124[Global_17345.f_5609 /*5*/][Global_17345.f_5610] = 2;
	Global_17345.f_5610++;
	if (Global_17345.f_5610 >= Global_17345.f_5608)
	{
		fVar0 = func_340();
		if (Global_17345.f_4945[Global_17345.f_5089] && Global_17345.f_5610 == Global_17345.f_5608)
		{
			func_310(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17345.f_4938[(Global_17345.f_5089 - 1)])
		{
			Global_17345.f_4938[(Global_17345.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17345.f_5610 >= Global_17345.f_5608)
		{
			fVar3 = func_339();
			if (fVar3 > Global_17345.f_5612[Global_17345.f_5088])
			{
				Global_17345.f_5612[Global_17345.f_5088] = fVar3;
			}
		}
	}
}

float func_339()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17345.f_5610)
	{
		if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17345.f_4433[((Global_17345.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_310(Global_17345.f_4433[((Global_17345.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x60F548525BE58E47(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_340()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17345.f_5610)
	{
		if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_291(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
	{
		unk_0xE746379C2AF24EF6(&(Global_17345.f_73[Global_17345.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17345.f_5610)
	{
		if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(Global_17345.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_17345.f_73[(Global_17345.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xAA5C5BF0489E5553(Global_17345.f_3918[((Global_17345.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x3AE7CB4034BE212F(Global_17345.f_4175[((Global_17345.f_5093 - iVar4) + iVar10)], Global_17345.f_4304[((Global_17345.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17345.f_2124[Global_17345.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_2458236[((Global_17345.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x56BEECB328B6D29D(&(Global_17345.f_73[Global_17345.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17345.f_4433[((Global_17345.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_310(Global_17345.f_4433[((Global_17345.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17345.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17345.f_5088 >= 128)
	{
		return;
	}
	if (Global_17345.f_5090 >= 256)
	{
		return;
	}
	if (Global_17345.f_5610 < Global_17345.f_5608)
	{
		return;
	}
	if (Global_17345.f_5088 != iParam0)
	{
		Global_17345.f_5088 = iParam0;
		Global_17345.f_5089 = 0;
	}
	iVar0 = Global_17345.f_4926[Global_17345.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17345.f_5089 < 4 && iVar0 != 1)
		{
			Global_17345.f_5089++;
			iVar0 = Global_17345.f_4926[Global_17345.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xF1734B55490E9045(sParam1) && !unk_0x0F6F4C227FB5DD52(sParam1))
	{
	}
	Global_17345.f_1610[Global_17345.f_5090] = bParam3;
	Global_17345.f_1867[Global_17345.f_5090] = iParam4;
	Global_17345.f_5090++;
	if (!bParam3)
	{
		func_344(Global_17345.f_5088, 1);
	}
	else
	{
		func_344(Global_17345.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_343(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]));
		if (Global_17345.f_4945[Global_17345.f_5089])
		{
			func_310(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17345.f_4938[Global_17345.f_5089])
		{
			Global_17345.f_4938[Global_17345.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_342(&(Global_17345.f_73[Global_17345.f_5090 /*6*/]));
			if (fVar4 > Global_17345.f_5612[iParam0])
			{
				Global_17345.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_17345.f_4959[iParam0]), Global_17345.f_5089);
	Global_17345.f_5089++;
	Global_17345.f_5611 = 1;
	Global_17345.f_5609 = (Global_17345.f_5090 - 1);
	Global_17345.f_5610 = 0;
	Global_17345.f_5608 = iParam2;
}

float func_342(char* sParam0)
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_343(char* sParam0)
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_291(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_344(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_17345.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_17345.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_345(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE57EAD1FEA2A6FAF(2, iParam0, 1);
	if (Global_17345.f_4639 >= 12)
	{
		StringCopy(&Global_4266122, sVar0, 64);
		StringCopy(&(Global_4266122.f_16), sParam1, 16);
		Global_4266122.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xF0059F27F7BB6680(&(Global_17345.f_4922), Global_17345.f_4639);
	}
	StringCopy(&(Global_17345.f_4641[Global_17345.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17345.f_4834[Global_17345.f_4639 /*4*/]), sParam1, 16);
	Global_17345.f_4883[Global_17345.f_4639] = iParam2;
	Global_17345.f_4896[Global_17345.f_4639] = iParam0;
	Global_17345.f_4909[Global_17345.f_4639] = 32;
	Global_17345.f_4639++;
}

void func_346(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17345.f_1), sParam0, 16);
	Global_17345.f_68 = 0;
	Global_17345.f_69 = 0;
	Global_17345.f_70 = 0;
	Global_17345.f_71 = 0;
	Global_17345.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17345.f_4953[0] = iParam0;
	Global_17345.f_4953[1] = iParam1;
	Global_17345.f_4953[2] = iParam2;
	Global_17345.f_4953[3] = iParam3;
	Global_17345.f_4953[4] = iParam4;
}

void func_348(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17345.f_4926[0] = iParam0;
	Global_17345.f_4926[1] = iParam1;
	Global_17345.f_4926[2] = iParam2;
	Global_17345.f_4926[3] = iParam3;
	Global_17345.f_4926[4] = iParam4;
	Global_17345.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17345.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17345.f_5096++;
	}
}

void func_349(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17345.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17345.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2458236[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17345.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17345.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17345.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17345.f_4959[iVar0] = 0;
		Global_17345.f_5097[iVar0] = 0;
		Global_17345.f_5226[iVar0] = 0;
		Global_17345.f_5746[iVar0] = 0f;
		Global_17345.f_5355[iVar0] = 0;
		Global_17345.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17345.f_4926[iVar0] = 0;
		Global_17345.f_4938[iVar0] = 0f;
		Global_17345.f_4932[iVar0] = -1f;
		Global_17345.f_4945[iVar0] = 0;
		Global_17345.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17345.f_4834[iVar0 /*4*/]), "", 16);
		Global_17345.f_4883[iVar0] = -1;
		Global_17345.f_4896[iVar0] = 358;
		Global_17345.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17345.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17345.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17345.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4266122.f_16), "", 16);
	Global_4266122.f_20 = -1;
	Global_17345 = 0;
	Global_17345.f_5088 = 0;
	Global_17345.f_5089 = 0;
	Global_17345.f_5090 = 0;
	Global_17345.f_5092 = 0;
	Global_17345.f_5093 = 0;
	Global_17345.f_5094 = 0;
	Global_17345.f_5091 = 0;
	Global_17345.f_5741 = 0;
	Global_17345.f_5606 = 0;
	Global_17345.f_5605 = 0;
	Global_17345.f_5607 = 0;
	StringCopy(&(Global_17345.f_4562), "", 16);
	Global_17345.f_4632 = 0;
	Global_17345.f_4633 = 0;
	Global_17345.f_4634 = 0;
	Global_17345.f_4635 = 0;
	Global_17345.f_4636 = 0;
	Global_17345.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17345.f_4638 = 0;
	StringCopy(&(Global_4266122.f_21), "", 16);
	Global_4266122.f_61 = 0;
	Global_4266122.f_62 = 0;
	Global_4266122.f_63 = 0;
	Global_4266122.f_64 = 0;
	Global_4266122.f_65 = 0;
	Global_4266122.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4266122.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4266122.f_67 = 0;
	StringCopy(&(Global_17345.f_1), "", 16);
	Global_17345.f_4944 = 0f;
	Global_17345.f_68 = 0;
	Global_17345.f_69 = 0;
	Global_17345.f_70 = 0;
	Global_17345.f_71 = 0;
	Global_17345.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17345.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17345.f_5611 = 0;
	Global_17345.f_5610 = 0;
	Global_17345.f_5608 = 0;
	Global_17345.f_5609 = 0;
	Global_17345.f_4639 = 0;
	Global_17345.f_4640 = 0;
	Global_17345.f_5095 = 10;
	Global_17345.f_5096 = 0;
	Global_17345.f_5743 = 0f;
	Global_17345.f_5744 = 0f;
	Global_17345.f_5598 = 0;
	Global_17345.f_5599 = 0;
	Global_17345.f_5600 = 0f;
	Global_17345.f_5601 = 0;
	Global_17345.f_5603 = 0;
	Global_17345.f_5602 = 0;
	Global_17345.f_5604 = 0;
	Global_17345.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17345.f_5875[iVar0] = -1;
		Global_17345.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17345.f_4951 = 0f;
	Global_17345.f_4922 = 0;
	Global_17345.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17345.f_5881)
	{
		Global_17345.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17345.f_7906 = 0;
	Global_17345.f_7901 = 0;
	Global_17345.f_7911 = 0;
	Global_17345.f_7916 = 0;
	Global_17345.f_7921 = 0;
	Global_17345.f_7923 = 0;
	Global_17345.f_7929 = 0;
	Global_17342 = 0.05f;
	Global_17343 = 0.05f;
	Global_17344 = 0.225f;
	fVar2 = unk_0x3771EE4CB542D71E(0);
	if (bParam0)
	{
		Global_17344 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17344 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17344 = 0.225f;
	}
}

void func_350(bool bParam0)
{
	if (!bParam0)
	{
		Global_103862 = unk_0x105601648511CC64() + 250;
	}
	Global_103859 = bParam0;
}

int func_351(char* sParam0, int iParam1)
{
	if (func_265() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x7AF0088ABFA713B6() && func_352(unk_0xB5CEFD608600A09F()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_352(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_1624079[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_353(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xF9E082857622D91E(func_44(unk_0xBC25C936A095B5BA(), 0, 0)))
	{
	}
	else if (!unk_0x96044E39418AAF17(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(bParam1), 3) && unk_0xF4FCC3C1048FF2AB(iParam0, -2017877118) != 1)
	{
		if (func_530())
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				if (!func_198(unk_0xB5CEFD608600A09F()))
				{
					iVar0 = unk_0xA86A4D206EC8EB16(unk_0xBC25C936A095B5BA(), 6);
					if (!func_504(256))
					{
						func_189(256);
						iLocal_86 = iVar0;
						iLocal_87 = unk_0x695D13ECF7DAEC22(unk_0xBC25C936A095B5BA(), 6);
						unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x96044E39418AAF17(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1), 3))
		{
			if (unk_0x4A3B2CF8BADDD74E(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_354(bParam1)) >= 0.95f)
			{
				unk_0xE896C0AD02364F2A(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x96044E39418AAF17(iParam0, func_44(unk_0xBC25C936A095B5BA(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_354(bool bParam0)
{
	if (!func_471(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_355(int iParam0)
{
	*iParam0 = -15;
}

int func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_318(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_319(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_320(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_323(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_322(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_321(iParam0);
	if (iVar5 < 1 || iVar5 > func_332(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_357()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	unk_0xAFD2CBD312D69CFA(iLocal_96);
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_358()
{
	if (func_359(0, -1, 0) && unk_0x284F2ACE6839D3C0("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_359(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_314(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17345.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_5505[iVar0 /*4*/])))
	{
		unk_0x900CF084251DED26(&(Global_17345.f_5505[iVar0 /*4*/]), 9);
		Global_17345.f_5498[iVar0] = 1;
		if (!unk_0x4C7022A83B41D888(&(Global_17345.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8AA3F48A15444B98("CommonMenu", false);
	Global_17345.f_5484[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", false);
		Global_17345.f_5491[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17345.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_360(&(Global_17345.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_360(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA7F138B5B1AB2CF6(*uParam0))
					{
						uParam0->f_8 = unk_0x105601648511CC64();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_361()
{
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iLocal_96))
	{
		iLocal_60 = unk_0x8D66276473ABD7CC(iLocal_96);
	}
}

void func_362()
{
	int iVar0;
	
	if (!func_530())
	{
		return;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				Local_56 = { unk_0x541C2AEF053615BC(iVar0, 1) };
			}
		}
	}
}

void func_363(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_314(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17345.f_7931)
	{
		unk_0xC0404835F30391BB(15);
		Global_17345.f_7931 = 0;
	}
	unk_0xE7918A3D05166D98(0f);
	if (Global_17345.f_5498[iVar0])
	{
		unk_0x841D233D3CE81152(9, false);
		Global_17345.f_5498[iVar0] = 0;
	}
	if (Global_17345.f_5484[iVar0])
	{
		unk_0x786556581D95BCB2("CommonMenu");
		Global_17345.f_5484[iVar0] = 0;
	}
	if (Global_17345.f_5491[iVar0])
	{
		unk_0x786556581D95BCB2("MPShopSale");
		Global_17345.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_364(&(Global_17345.f_5530[iVar0 /*10*/]));
		Global_17345.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17345.f_5591[iVar0] = 0;
	}
}

void func_364(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			unk_0xB0B0FE33F4F22679(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_365()
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (!iLocal_99 == 0)
				{
					if ((unk_0xE59B7F5A03335350(iLocal_99, 0) && !unk_0x7544D2465B934445(iLocal_99)) && !unk_0x8730A01B72F31307(iLocal_99))
					{
						if (func_85(&iLocal_99))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_366()
{
	if (iLocal_72 == 0)
	{
		if (!func_471(iLocal_51, 1) && !func_471(iLocal_51, 16))
		{
			if (func_367(0))
			{
				func_463(&iLocal_51, 1);
			}
		}
		if (!func_471(iLocal_51, 4) && !func_471(iLocal_51, 64))
		{
			if (func_367(2))
			{
				func_463(&iLocal_51, 4);
			}
		}
		if (!func_471(iLocal_51, 8) && !func_471(iLocal_51, 128))
		{
			if (func_367(1))
			{
				func_463(&iLocal_51, 8);
			}
		}
	}
}

int func_367(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_179(iParam0) };
	Var3 = { unk_0x541C2AEF053615BC(iLocal_99, 1) };
	if (iLocal_308[iParam0] == 0)
	{
		if (unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("tyrant"))
		{
			iLocal_308[iParam0] = unk_0xEEC6F351351E4110(Var0, Var3, 0.1f, 511, iLocal_99, 3);
		}
		else if ((unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("casco") || unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("feltzer3")) || unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("fagaloa"))
		{
			iLocal_308[iParam0] = unk_0xEEC6F351351E4110(Var0, Var3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = unk_0xEEC6F351351E4110(Var0, Var3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (unk_0xB0695CD48A28A3A9(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_308[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_368(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_308[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_471(iLocal_51, 16))
			{
				func_463(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_471(iLocal_51, 128))
			{
				func_463(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_471(iLocal_51, 64))
			{
				func_463(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_471(iLocal_51, 32))
			{
				func_463(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_369()
{
	if (func_374() && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iLocal_295 = 9;
		func_372(iLocal_96);
		func_372(unk_0xBC25C936A095B5BA());
		func_370();
		func_34(&uLocal_104);
	}
}

void func_370()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0xEF0E25DA0CB6E8FF(uLocal_102))
	{
		uLocal_102 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0xEF0E25DA0CB6E8FF(uLocal_103))
	{
		uLocal_103 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_371(&Var0, &Var7);
	unk_0x6125108F6208C1F6(uLocal_102, Var0);
	unk_0x3553F2A72957724E(uLocal_102, Var0.f_3, 2);
	unk_0x9DF315A9EFFF87AC(uLocal_102, Var0.f_6);
	unk_0x6125108F6208C1F6(uLocal_103, Var7);
	unk_0x3553F2A72957724E(uLocal_103, Var7.f_3, 2);
	unk_0x9DF315A9EFFF87AC(uLocal_103, Var7.f_6);
	unk_0x348665177DBFB93B(uLocal_102, 1);
	unk_0x348665177DBFB93B(uLocal_103, 0);
	unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
}

void func_371(var uParam0, var uParam1)
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_372(int iParam0)
{
	var uVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x02DAF06EA4F08219(&uVar0);
		unk_0xC5A6DFE2B8987B17(&uVar0);
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			unk_0xA3981DED4FC2E56E(0, 0, 16842752);
		}
		unk_0x346129B364057FF6(0, func_373(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x535008C596714F9E(uVar0);
		unk_0xA8E6405305C0D7DF(iParam0, uVar0);
		unk_0x02DAF06EA4F08219(&uVar0);
	}
}

Vector3 func_373()
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_374()
{
	return unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), func_376()) < (func_375() * func_375());
}

float func_375()
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_376()
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_377()
{
	func_315();
	func_392();
	if (!func_10(&uLocal_107))
	{
		func_453(&uLocal_107);
	}
	if (func_391())
	{
		return;
	}
	if (!func_10(&uLocal_116))
	{
		func_453(&uLocal_116);
	}
	if (func_365() && unk_0x62F3A07C43FFB568(iLocal_96, iLocal_99, 0))
	{
		if (unk_0xB66CFDE6B830965A(iLocal_99) && unk_0x58F9E0EA914AEF2C(iLocal_99))
		{
			if ((func_384() && !func_374()) && !func_383())
			{
				func_382();
				if (func_7(&uLocal_116) > 2.5f)
				{
					uLocal_85 = unk_0x3F15B158E03C72E5(unk_0x541C2AEF053615BC(iLocal_99, 0), 40f, 40f, 40f, unk_0x349C94FFF43E2979(iLocal_99), 0, 7);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 896);
					func_463(&iLocal_49, 2048);
					iLocal_100 = 0;
					unk_0xB2CB6EAA6B280A84("ProstituteInPlay", &uLocal_307);
					unk_0xA902E18EDF6FA0C8(1, uLocal_307, joaat("player"));
					unk_0x4106FAF8AA1D69D5(iLocal_96, uLocal_307);
					func_472("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_121();
					func_381();
					iLocal_83 = 3;
					if (func_42(0, 1))
					{
						unk_0x4AED68BFACFB14CB(0);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()) && func_7(&uLocal_107) > 15f) && func_380())
				{
					if (!func_471(iLocal_50, 4096))
					{
						func_334("PROS_SPOT", -1);
						func_463(&iLocal_50, 4096);
					}
					func_379();
					func_34(&uLocal_107);
				}
				func_34(&uLocal_116);
			}
		}
		else
		{
			func_34(&uLocal_116);
			func_378();
		}
	}
	else if (!func_374())
	{
		if (unk_0x724D816EA203A79E(iLocal_96))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_96))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_96);
			}
		}
		func_454(0);
	}
}

void func_378()
{
	iLocal_51 = 0;
	iLocal_308[0] = 0;
	iLocal_308[1] = 0;
	iLocal_308[2] = 0;
	iLocal_308[3] = 0;
}

void func_379()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	if (!unk_0x8C2668F45F2BB3F2(iLocal_96))
	{
		unk_0x53D8178763EDCE60(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_380()
{
	if (!func_471(iLocal_51, 256))
	{
		return 1;
	}
	return func_471(iLocal_51, 32);
}

void func_381()
{
	if (func_530())
	{
		unk_0xC8FD3EBBB90E8D7F(iLocal_96, 229, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_96, 26, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_96, 115, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_96, 1);
	}
}

void func_382()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!func_471(iLocal_49, 2097152))
	{
		if (unk_0x105601648511CC64() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				Var0 = { unk_0x541C2AEF053615BC(iLocal_99, 1) };
				unk_0x2084D4C6C2DF616F(Var0, &fVar6, 0, 0);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0xA4455714F3DCE207(iLocal_99, 0f, 0f, -2f) };
				iLocal_100 = unk_0xEDB5D06AC6E2D672(Var0, Var3, 2f, 511, iLocal_99, 7);
			}
			else if (unk_0x55E2C599F5040FF1(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&uLocal_116);
					}
				}
				iLocal_84 = unk_0x105601648511CC64() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

int func_383()
{
	int iVar0;
	
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (!unk_0x1AAF0C23233C57AF(iVar0, 0, 0))
		{
			if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()) || unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_384()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		if (unk_0xDF2CB88174A62E40(Var1, func_59(0), 12f, 0) || unk_0xDF2CB88174A62E40(Var1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_390())
		{
			return 0;
		}
		if (func_389(iLocal_99, &Var4))
		{
			if (!func_388(Var4))
			{
				if (!func_387(Var1) || func_386(Var1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x2101FAC9A9D4C29D(iLocal_96, iLocal_99, 0, 0, 0))
		{
			return 0;
		}
		unk_0xB13ECA7F44B7F7E6(1);
		if (unk_0x50AE3E919DC9BC67(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x724D816EA203A79E(iVar0))
			{
				if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
				{
					if (unk_0x4833C1F1F1364989(iVar0, iLocal_99, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_472("NO VEHICLES FOUND");
			}
		}
		iVar7 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
		if (!iVar7 == 0)
		{
			func_472("IN AN INTERIOR");
			return 0;
		}
		if (func_385())
		{
			return 0;
		}
	}
	return 1;
}

int func_385()
{
	func_463(&iLocal_51, 256);
	if (!func_471(iLocal_51, 2))
	{
		if (func_367(3))
		{
			func_463(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_366();
	}
	return 0;
}

int func_386(struct<3> Param0)
{
	if (((((((((unk_0x2A488C176D52CCA5(Param0, 491.76f, -515.73f, 29.51f) <= 12f || unk_0x2A488C176D52CCA5(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_387(struct<3> Param0)
{
	if ((((((unk_0x2A488C176D52CCA5(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || unk_0x2A488C176D52CCA5(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_463(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_388(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x792A3209B8366EB3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1, 1, 1077936128, 0);
	unk_0x2487DB62997A4150(uVar0, &Param0);
	if (unk_0x77F84A8EA1958F2B(uVar0))
	{
		if (!unk_0x6F0339DC0CD61C94(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x6F0339DC0CD61C94(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0x792A3209B8366EB3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1, 8, 1077936128, 0);
		unk_0x2487DB62997A4150(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, 0f, -2f, 0f) };
	if (unk_0x7889AC6F93E89660(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x7889AC6F93E89660(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x7889AC6F93E89660(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x7889AC6F93E89660(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_390()
{
	return Global_68280;
}

int func_391()
{
	if (unk_0xB731B8C5BCE89836(joaat("carwash1")) > 0 || unk_0xB731B8C5BCE89836(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_392()
{
	if (!func_471(iLocal_49, 128))
	{
		func_393(39, 1);
		func_393(40, 1);
		func_393(41, 1);
		func_393(42, 1);
		func_393(43, 1);
		func_393(44, 1);
		func_463(&iLocal_49, 128);
	}
}

void func_393(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_397(iParam0, 2, 1))
		{
			func_396(iParam0, 2, 1);
		}
	}
	else if (func_397(iParam0, 2, 1))
	{
		func_394(iParam0, 2, 1);
	}
}

void func_394(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_395(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&uVar0, iParam1);
			func_131(func_395(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

void func_396(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_395(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&uVar0, iParam1);
			func_131(func_395(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

int func_397(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_146() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_134(func_395(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_398(var uParam0)
{
	if (func_471(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_521();
	if (func_530())
	{
		func_516(uParam0);
	}
}

void func_399()
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		if (unk_0xE642C1AC73CE364E(iLocal_96, unk_0xBC25C936A095B5BA(), 5f, 5f, 5f, 0, 1, 0) || func_471(iLocal_49, 8192))
		{
			unk_0xBBC4195AD74D153D(0, 101, 1);
			unk_0xBBC4195AD74D153D(0, 74, 1);
			unk_0xD55638CE45B2B948(0, 51);
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x5237AF95232D78C5(iLocal_96, 0))
			{
				unk_0xAF9FC4463EA3090B(iLocal_96, 50);
				unk_0x4A506C72BFC368E4(iLocal_96, 5f);
				if (func_471(iLocal_49, 16))
				{
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0xE59B7F5A03335350(iLocal_99, 0))
				{
					if (unk_0x25EF720B1CAB1E23(iLocal_96, iLocal_99) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_99, 0))
					{
						func_472("***** prostitute IN VEHICLE****** ");
						if (func_471(iLocal_49, 8))
						{
							if (unk_0x320539481B2F0121(func_86()))
							{
								if (func_409(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_408(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_407(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_406(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_405(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_404(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_403(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_402(iLocal_99))
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else
								{
									unk_0xAF882903653590B0(iLocal_96, unk_0x56BEECB328B6D29D("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_530())
						{
							unk_0x77815D3407C6700D(iLocal_96, 0, 0);
						}
						else
						{
							unk_0x77815D3407C6700D(iLocal_96, 1, 1);
						}
						func_175(iLocal_96, 0);
						func_379();
						iLocal_64 = unk_0x105601648511CC64();
						func_34(&uLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_472("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_401(iLocal_96, unk_0xBC25C936A095B5BA(), 1) > 11f || func_400(20f)) || !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_99, 0))
				{
					func_108(&uLocal_113);
					if (!unk_0x5237AF95232D78C5(iLocal_96, 0))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_96);
						func_454(0);
						func_472("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (!unk_0xE59B7F5A03335350(iLocal_99, 0))
					{
						iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					}
					else if (!unk_0x2101FAC9A9D4C29D(iLocal_96, iLocal_99, 0, 0, 0))
					{
						if (!func_105())
						{
							if (!func_471(iLocal_75, 1))
							{
								func_34(&uLocal_119);
								func_463(&iLocal_75, 1);
							}
							else if (func_7(&uLocal_119) > 20f)
							{
								func_119();
								func_472("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_471(iLocal_75, 1))
		{
			func_472("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xA4E856A8CD53B8DF(iLocal_96);
			func_89(15);
		}
	}
}

bool func_400(float fParam0)
{
	if (!func_10(&uLocal_113))
	{
		func_34(&uLocal_113);
	}
	return func_114(&uLocal_113) > fParam0;
}

float func_401(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

int func_402(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_403(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_404(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_405(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_406(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_407(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_408(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
				return 1;
				break;
			}
	}
	return 0;
}

void func_410(var uParam0)
{
	int iVar0;
	
	if (!func_419(0))
	{
		return;
	}
	if (!func_471(iLocal_49, 16))
	{
		unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 0);
		func_463(&iLocal_49, 16);
	}
	if (!func_10(&uLocal_113))
	{
		func_453(&uLocal_113);
	}
	if (func_114(&uLocal_113) >= 20f || !unk_0xE642C1AC73CE364E(iLocal_96, unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_471(iLocal_75, 524288))
		{
			func_108(&uLocal_113);
			iLocal_295 = 6;
		}
		else if (func_418())
		{
			func_34(&uLocal_113);
			func_463(&iLocal_75, 524288);
		}
	}
	func_63(iLocal_96);
	if (((unk_0xE642C1AC73CE364E(iLocal_96, unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0) || func_471(iLocal_75, 1)) && !func_209(0)) && !func_390())
	{
		if (!unk_0x2101FAC9A9D4C29D(iLocal_96, iLocal_99, 0, 0, 0))
		{
			if (!func_105())
			{
				if (!func_471(iLocal_75, 1))
				{
					func_34(&uLocal_119);
					func_463(&iLocal_75, 1);
				}
				else if (func_7(&uLocal_119) > 10f)
				{
					func_62();
					unk_0xA4E856A8CD53B8DF(iLocal_96);
					func_472("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_411();
		}
	}
	else if (func_451("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_449();
		if (func_530())
		{
			iVar0 = unk_0xF4FCC3C1048FF2AB(iLocal_96, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_521();
				func_516(uParam0);
			}
		}
	}
}

void func_411()
{
	char* sVar0;
	
	if (iLocal_295 != 5 && func_351(&sVar0, 0))
	{
		func_414();
		if (func_412(iLocal_74, 1) || unk_0xD95B48C451FB1A20(unk_0xB5CEFD608600A09F()))
		{
			unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_463(&iLocal_49, 8192);
			func_34(&uLocal_113);
		}
		if (func_471(iLocal_49, 8192))
		{
			func_449();
			Global_25427 = 1;
			Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_400 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, -1794415470) != 1 && !unk_0x62F3A07C43FFB568(iLocal_96, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1))
				{
					unk_0xD179FA0466FA4FE3(iLocal_96, iLocal_99, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_44(unk_0xBC25C936A095B5BA(), 1, 0);
			unk_0x522053D86D6E1C7A(sLocal_63);
			sLocal_63 = func_44(unk_0xBC25C936A095B5BA(), 0, 1);
			unk_0x522053D86D6E1C7A(sLocal_63);
			func_34(&uLocal_107);
			iLocal_295 = 5;
		}
	}
}

int func_412(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_413(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/] == 1 && Global_36613[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36613[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36613[iVar0 /*32*/].f_5 = 1;
			Global_36613[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36613[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36613[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_413(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_414()
{
	if (Global_25427)
	{
		if (unk_0xE186ACC7BE9B244E())
		{
			return;
		}
		unk_0xBBC4195AD74D153D(0, 101, 1);
		unk_0xBBC4195AD74D153D(0, 74, 1);
		unk_0xD55638CE45B2B948(0, 51);
		if (!func_471(iLocal_49, 8192))
		{
			if (iLocal_74 == -1)
			{
				func_416(&iLocal_74, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_415(iLocal_74, 0))
	{
		func_449();
	}
}

int func_415(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_413(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36613[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36613[iVar0 /*32*/].f_12)
	{
		unk_0xF07D20149ECBC61E(&(Global_36613[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_36808);
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	else
	{
		unk_0xF07D20149ECBC61E(&(Global_36613[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_36808);
		if (Global_36613[iVar0 /*32*/].f_30)
		{
			unk_0x607C19B90D297FE2(&(Global_36613[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xC9C304D0AABE1335(&(Global_36613[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	return iVar1;
}

void func_416(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_417(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/] = 1;
			Global_36613[iVar0 /*32*/].f_1 = Global_36814;
			Global_36814++;
			Global_36613[iVar0 /*32*/].f_4 = 0;
			Global_36613[iVar0 /*32*/].f_29 = 0;
			Global_36613[iVar0 /*32*/].f_5 = 0;
			Global_36613[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36613[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36613[iVar0 /*32*/].f_6 = iParam3;
			Global_36613[iVar0 /*32*/].f_31 = unk_0x8A55B15F4133C912();
			Global_36613[iVar0 /*32*/].f_7 = 0;
			Global_36613[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_36613[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36613[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36613[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36613[iVar0 /*32*/].f_12 = 0;
				Global_36613[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36613[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_417(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_413(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_418()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x724D816EA203A79E(iLocal_96) || unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return 1;
	}
	if (!func_530())
	{
		func_62();
		if (unk_0x5237AF95232D78C5(iLocal_96, 1))
		{
			unk_0x8CE2798B9A7027EC(iLocal_96, 1193033728, 0);
		}
		else if (func_471(iLocal_49, 4194304))
		{
			iVar0 = unk_0x491B2241281A03B7(8, 11);
			unk_0xC5A6DFE2B8987B17(&uVar1);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(uVar1);
			unk_0xA8E6405305C0D7DF(iLocal_96, uVar1);
			unk_0x02DAF06EA4F08219(&uVar1);
		}
		return 1;
	}
	if (unk_0x5237AF95232D78C5(iLocal_96, 1))
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_96))
		{
			unk_0x8CE2798B9A7027EC(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xC7587327285D9984(iLocal_96);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_471(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_96);
			}
			break;
		
		case 2:
			if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x491B2241281A03B7(8, 11);
					unk_0xE896C0AD02364F2A(iLocal_96, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xC7587327285D9984(iLocal_96);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_419(bool bParam0)
{
	if (unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		return 0;
	}
	if (func_471(iLocal_49, 8192))
	{
	}
	if (func_401(iLocal_96, unk_0xBC25C936A095B5BA(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (func_530())
	{
		if (unk_0x5168CF98709EAA95(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0x541C2AEF053615BC(iLocal_96, 1), 1106247680))
	{
		if (!func_471(iLocal_50, 8192) && !unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA()))
		{
			func_334("PROS_COPS", -1);
			func_463(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_365())
	{
		if (!func_530())
		{
			if ((!iLocal_88 && !Global_104267) && func_421(unk_0xBC25C936A095B5BA(), 0) == -1)
			{
				func_334("PROS_CAR", -1);
				iLocal_88 = 1;
			}
			func_420();
		}
		else if (!func_504(4096))
		{
			func_334("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_420()
{
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (!func_471(iLocal_49, 1))
	{
		if (!unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()) && !unk_0x8C2668F45F2BB3F2(iLocal_96))
		{
			unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_463(&iLocal_49, 1);
		}
	}
}

int func_421(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_422()
{
	if (func_419(0))
	{
		func_411();
		if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 242628503) == 7 && !func_471(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&uLocal_113);
				iLocal_64 = unk_0x105601648511CC64();
				func_472("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		unk_0xA4E856A8CD53B8DF(iLocal_96);
		func_89(15);
	}
}

void func_423(var uParam0)
{
	if (func_419(0))
	{
		func_411();
		if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 242628503) == 7 || func_471(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_400(20f))
		{
			func_108(&uLocal_113);
			func_454(0);
		}
		else
		{
			func_424(uParam0);
		}
	}
	else
	{
		unk_0xA4E856A8CD53B8DF(iLocal_96);
		func_89(15);
	}
}

void func_424(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!unk_0x724D816EA203A79E(iLocal_99))
	{
		return;
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iLocal_99), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0xA4455714F3DCE207(iLocal_99, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0xA4455714F3DCE207(iLocal_99, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0x541C2AEF053615BC(iLocal_96, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0xF4FCC3C1048FF2AB(iLocal_96, -1794415470) != 1 || !func_471(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_93, Var9) > 0f)
	{
		if (func_530())
		{
			if (!unk_0x5CAE759AE8219D20(iLocal_96))
			{
				unk_0x77815D3407C6700D(iLocal_96, 0, 1);
			}
			func_434(&uLocal_287, func_61(iLocal_293));
			func_428(uParam0, 1);
			func_425(&uLocal_287, uParam0);
		}
		unk_0xC5A6DFE2B8987B17(&uVar18);
		unk_0x346129B364057FF6(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0xCF4C6C235CD09F4F(0, unk_0x823166D9421223CA(unk_0xBC25C936A095B5BA(), 31086, 0f, 0f, 0f), 0);
		unk_0x535008C596714F9E(uVar18);
		unk_0xA8E6405305C0D7DF(iLocal_96, uVar18);
		unk_0x02DAF06EA4F08219(&uVar18);
		Local_93 = { Var9 };
	}
}

void func_425(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEAEFBBEC1AEA464B((*uParam0)[iVar0]))
		{
			func_426(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_426(var uParam0, char* sParam1)
{
	func_427(uParam0, 1, -1, sParam1, 0);
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x3362CDE8460ED38B(sParam3, "NULL"))
					{
						if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_428(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_430(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_429(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_429(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_430(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_431(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_431(var uParam0)
{
	func_432(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_432(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xFA30DFD0084E92FE(uParam0, 30))
	{
		switch (func_433(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(uParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(uParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(uParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(uParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(uParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(uParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

int func_433(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_434(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEAEFBBEC1AEA464B((*uParam0)[iVar0]))
		{
			if (unk_0x3362CDE8460ED38B((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_435(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_435(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0xEAEFBBEC1AEA464B((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_436(var uParam0)
{
	char* sVar0;
	
	if (func_419(1))
	{
		if (!func_10(&uLocal_113))
		{
			func_453(&uLocal_113);
		}
		func_463(&iLocal_49, 4);
		Global_25428 = 1;
		func_411();
		if (func_452(&uLocal_113, 2f) || func_471(iLocal_49, 8192))
		{
			func_463(&iLocal_49, 2);
			if (func_351(&sVar0, 0))
			{
				unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 0);
				unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_96, -1, 2048, 4);
				func_424(uParam0);
				func_463(&iLocal_49, 4);
				Global_25427 = 1;
				Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_400 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (unk_0x3362CDE8460ED38B(func_448(&sVar0), "PIM_HHIDCR"))
				{
					func_447(&sVar0, 30000);
					func_445(1);
				}
				else
				{
					func_334(&sVar0, -1);
				}
				if (!unk_0xF1734B55490E9045(&sVar0) && unk_0x3362CDE8460ED38B(&sVar0, "PROS_NO_MONEY"))
				{
					func_437();
				}
				func_89(0);
				iLocal_296 = 0;
				func_463(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25427 = 0;
				Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_400 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25428 = 0;
	}
}

void func_437()
{
	if (!func_504(64))
	{
		func_438(0, 31, 5);
		func_189(64);
	}
}

void func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x69CD416923DBB24E())
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6() && func_442(unk_0xB5CEFD608600A09F(), 1))
	{
		return;
	}
	if (unk_0x8FCEEB789599BD9B(2, 199) || unk_0xD3C4A010282C31F2(2, 199))
	{
		return;
	}
	if (unk_0x0352C1B6B66A87AC() != 0)
	{
		return;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return;
	}
	if (unk_0x14973A77EAB7E05A())
	{
		return;
	}
	if (unk_0x18158A50125911B6())
	{
		return;
	}
	if (func_441())
	{
		return;
	}
	if (!func_439())
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6() || iParam0)
	{
		if (!Global_93007.f_1385 && !unk_0x4F2BFB7C2A730EC7())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2458750 = iParam1;
			Global_93007.f_1385 = 1;
			Global_93007.f_1386 = iParam2;
		}
	}
}

int func_439()
{
	if (func_440())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_440()
{
	return Global_2458197;
}

bool func_441()
{
	return Global_2458855;
}

int func_442(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_443(int iParam0)
{
	return func_444(iParam0);
}

bool func_444(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

void func_445(int iParam0)
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_446())
	{
		unk_0xC4BA30B532FE260F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_446()
{
	return Global_2436641.f_2703[0 /*80*/].f_1 != 0;
}

void func_447(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam1);
}

char* func_448(char* sParam0)
{
	return sParam0;
}

void func_449()
{
	if (iLocal_74 != -1)
	{
		func_417(&iLocal_74);
	}
}

void func_450(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

int func_451(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_452(var uParam0, float fParam1)
{
	if (func_216(uParam0, fParam1))
	{
		func_108(uParam0);
		return 1;
	}
	return 0;
}

void func_453(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_34(uParam0);
	}
}

void func_454(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_72 == 0)
	{
		bVar0 = true;
		if (func_530())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_455()
{
	if ((((((func_462() || func_461()) || func_460()) || func_459()) || func_456()) || Global_2394733) || Global_2394733.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_456()
{
	if (func_458() || func_457())
	{
		return Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_98 == 8;
	}
	return 0;
}

var func_457()
{
	return Global_2447942.f_622;
}

bool func_458()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 11);
}

bool func_459()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 5);
}

bool func_460()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 2);
}

bool func_461()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 20);
}

var func_462()
{
	return Global_2447942.f_586;
}

void func_463(int iParam0, int iParam1)
{
	func_464(iParam0, iParam1);
}

void func_464(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_465()
{
	if (Global_25429)
	{
		return 0;
	}
	if (func_530())
	{
		return 0;
	}
	if (!func_468())
	{
		return 0;
	}
	if (func_466())
	{
		iLocal_296 = 4;
		return 1;
	}
	return 0;
}

int func_466()
{
	int iVar0;
	
	iLocal_98 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(iLocal_96, 1), 15f, 0, 6);
	if (unk_0x724D816EA203A79E(iLocal_98) && !unk_0x1D403DFADBC2DE3C(iLocal_98, 0))
	{
		if (unk_0xE59B7F5A03335350(iLocal_98, 0))
		{
			if (func_85(&iLocal_98))
			{
				iLocal_97 = unk_0x3187EF5798B5D209(iLocal_98, -1, 0);
				if (!iLocal_97 == 0)
				{
					if (func_467(&iLocal_97))
					{
						iVar0 = unk_0x6F79ECA8C83E4357(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x5CAE759AE8219D20(iLocal_97))
							{
								unk_0x77815D3407C6700D(iLocal_97, 1, 0);
							}
							if (!unk_0x5CAE759AE8219D20(iLocal_98))
							{
								unk_0x77815D3407C6700D(iLocal_98, 1, 0);
							}
							unk_0x2E35C4FA5F0ED22F(iLocal_97, 1);
							unk_0xB71D41C0310C93DE(iLocal_97, 0, 1);
							unk_0xB71D41C0310C93DE(iLocal_98, 0, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_98 = 0;
	iLocal_97 = 0;
	return 0;
}

int func_467(int iParam0)
{
	if (!unk_0x36CEFBE9B745A58D(*iParam0))
	{
		if (unk_0xB6FD7D587FE0A1B4(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_468()
{
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) || unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		return 0;
	}
	return 1;
}

int func_469()
{
	if ((!func_468() || !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || func_471(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_471(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_93(2);
		func_472("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_470()
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		if (!unk_0x889DA6CE8E4DB344(iLocal_96))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 1805844857) != 1)
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_96, 0);
				unk_0xABA7AE40608505F2(iLocal_96, 196628, 1);
				unk_0x3D669AF9A68FF281(iLocal_96);
				unk_0x5558ED6D4A2DEC93(iLocal_96, unk_0xBC25C936A095B5BA(), 300f, -1, 1, 0);
				unk_0x22321800954A532E(iLocal_96, 1);
				func_89(15);
			}
		}
	}
}

bool func_471(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_472(char* sParam0)
{
}

int func_473()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return 0;
	}
	if (unk_0xF4FCC3C1048FF2AB(iLocal_96, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xD8BE87198802B1F7(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_474()
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_530())
			{
				func_434(&uLocal_287, func_61(iLocal_293));
				func_425(&uLocal_287, &uLocal_403);
				func_472("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_530())
			{
				unk_0xD1CF2F876BAD2600(1);
				unk_0xA6E7E0EC9E48D44C(1);
				unk_0xC7587327285D9984(iLocal_96);
			}
			iLocal_300 = 1;
			break;
		
		case 1:
			if (!func_530())
			{
				if (func_475(&uLocal_403))
				{
					func_463(&iLocal_49, 4194304);
					func_472("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_530())
			{
				func_463(&iLocal_49, 4194304);
				func_472("Moving to PROSTITUTE_INIT_INIT");
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			iLocal_297 = 0;
			iLocal_69 = iLocal_297;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_296 = 0;
			iLocal_97 = 0;
			iLocal_98 = 0;
			func_472("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(iLocal_96))
			{
				if (!func_530())
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_96, 0);
					unk_0xEA2C4A582CD26EF5(iLocal_96, 0);
					func_450(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x4DF785C4DF542CD0(iLocal_96))
				{
					unk_0xC7587327285D9984(iLocal_96);
				}
				else
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_96, 0);
					func_450(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					unk_0xEA2C4A582CD26EF5(iLocal_96, 0);
					unk_0x27602C068792FFD1(iLocal_96);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_475(var uParam0)
{
	return func_476(uParam0);
}

int func_476(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_477(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_477(var uParam0)
{
	return func_478(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_478(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xFA30DFD0084E92FE(uParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_433(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(uParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(uParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(uParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(uParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_479()
{
	if (unk_0x7930B3E9C919E90F())
	{
		if (func_18() == 0)
		{
			if (func_480(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0xB248FAA35ED47DB9(iLocal_96, 1))
				{
					if (func_530())
					{
						unk_0x77815D3407C6700D(iLocal_96, 0, 0);
					}
					else
					{
						unk_0x77815D3407C6700D(iLocal_96, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_480(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

int func_481()
{
	if (unk_0x4DF0825BB012BDB0(iLocal_96, func_59(0)))
	{
		if (unk_0xA83C5CB91839E2CD(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xA83C5CB91839E2CD(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x4DF0825BB012BDB0(iLocal_96, func_59(1)))
	{
		if (unk_0xA83C5CB91839E2CD(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xA83C5CB91839E2CD(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_482()
{
	if (unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_483(unk_0xBC25C936A095B5BA());
	}
	else if (iLocal_294 == 3)
	{
		func_483(iLocal_97);
	}
}

void func_483(int iParam0)
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	if (func_530())
	{
		if (!unk_0x4DF785C4DF542CD0(iParam0))
		{
			unk_0xC7587327285D9984(iParam0);
			return;
		}
	}
	if (func_401(iParam0, iLocal_96, 1) < 30f)
	{
		if (!unk_0x640A454FD54BBEF2(iLocal_96, iParam0))
		{
			if (func_530())
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_96))
				{
					unk_0x44C98C11ED6DD327(iLocal_96);
					unk_0x56F2E1B5599188FA(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x44C98C11ED6DD327(iLocal_96);
				unk_0x56F2E1B5599188FA(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x640A454FD54BBEF2(iLocal_96, iParam0))
	{
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				unk_0x44C98C11ED6DD327(iLocal_96);
			}
		}
		else
		{
			unk_0x44C98C11ED6DD327(iLocal_96);
		}
	}
}

void func_484()
{
	if (Global_25427)
	{
		if (unk_0xE59B7F5A03335350(iLocal_99, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_96, iLocal_99, 0))
			{
				func_485();
			}
		}
		return;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iLocal_96, 0) || !unk_0x724D816EA203A79E(iLocal_96))
	{
		if (Global_25431 != unk_0x8A55B15F4133C912() && func_471(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_96, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) < Global_25430 || Global_25430 == 0f) && iLocal_296 != 4)
	{
		Global_25430 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_96, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
		Global_25431 = unk_0x8A55B15F4133C912();
		func_463(&iLocal_49, 32);
	}
	else if (Global_25431 == unk_0x8A55B15F4133C912())
	{
		Global_25430 = unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_96, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_485()
{
	if (func_530())
	{
		if (unk_0x4DF785C4DF542CD0(iLocal_96))
		{
			unk_0x2E9860A2B72187F5(iLocal_96, 323, 1);
		}
	}
	else
	{
		unk_0x2E9860A2B72187F5(iLocal_96, 323, 1);
	}
}

void func_486(var uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (func_490())
			{
				if (func_530())
				{
					func_116(0);
					unk_0xABA7AE40608505F2(iLocal_96, 196624, 1);
					if (!unk_0x5CAE759AE8219D20(iLocal_96))
					{
						unk_0x77815D3407C6700D(iLocal_96, 1, 0);
					}
					unk_0x5558ED6D4A2DEC93(iLocal_96, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_96, 1);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_521();
					func_516(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0xD9C1758D86688CEA(iLocal_96, unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_67++;
				if (iLocal_67 >= 2)
				{
					func_472("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_472("prostitute BEEN HIT BY PLAYER");
					unk_0x5502708AECB47F5D(iLocal_96);
				}
			}
			else if (func_488())
			{
				func_487();
				iLocal_295 = 12;
			}
		}
	}
}

void func_487()
{
	if (unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		return;
	}
	unk_0xAFD2CBD312D69CFA(iLocal_96);
	unk_0x53D8178763EDCE60(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_488()
{
	var uVar0;
	
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (!func_489())
	{
		return 0;
	}
	uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (!unk_0xE59B7F5A03335350(uVar0, 0))
	{
		return 0;
	}
	if (unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA()))
	{
		return unk_0xAAED47028764A78D(iVar0);
	}
	return 0;
}

int func_489()
{
	if (!func_530())
	{
		return 1;
	}
	else if (unk_0x724D816EA203A79E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
	{
		if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
		{
			if (unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == unk_0xBC25C936A095B5BA())
			{
				if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					if (!unk_0x5CAE759AE8219D20(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						unk_0x77815D3407C6700D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0xC7587327285D9984(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
				}
			}
		}
		else
		{
			unk_0xCE1EBDF53DEA0B16(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
		}
	}
	return 0;
}

int func_490()
{
	struct<3> Var0;
	
	if (!func_471(iLocal_49, 4096))
	{
		if (func_401(iLocal_96, unk_0xBC25C936A095B5BA(), 1) < 30f)
		{
			Var0 = { unk_0x541C2AEF053615BC(iLocal_96, 1) };
			if ((((((unk_0x6103B6A8E33A21D1(86, Var0, 30f) || unk_0x6103B6A8E33A21D1(89, Var0, 30f)) || unk_0x6103B6A8E33A21D1(88, Var0, 30f)) || unk_0x6103B6A8E33A21D1(102, Var0, 30f)) || unk_0x6103B6A8E33A21D1(114, Var0, 30f)) || (unk_0x6103B6A8E33A21D1(112, Var0, 30f) && !func_530())) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				if (!func_530())
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_96, 0);
				}
				func_463(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_491()
{
	if ((unk_0x724D816EA203A79E(iLocal_96) && !unk_0x1D403DFADBC2DE3C(iLocal_96, 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_530())
		{
			if (func_532(unk_0xB5CEFD608600A09F(), 0))
			{
				func_472("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x5237AF95232D78C5(iLocal_96, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_96))
		{
			if (!unk_0x5237AF95232D78C5(iLocal_96, 0))
			{
				if (!func_493(9))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_96, unk_0xBC25C936A095B5BA(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_472("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_492() || unk_0x7930B3E9C919E90F()))
				{
					func_472("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_472("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_493(9) && !func_493(5))
			{
				return 1;
			}
			else if (!(func_492() || (unk_0x7930B3E9C919E90F() && !func_391())))
			{
				func_472("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_472("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_96))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_472("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_492()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_494(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_494(int iParam0)
{
	return func_495(iParam0, Global_35905);
}

int func_495(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_496()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 1500932196)
			{
				if (Var2.f_1 == unk_0xB5CEFD608600A09F())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_497()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (!unk_0x32405B7614E36453())
	{
		return;
	}
	if (unk_0xBC93E1C9C8F877D9(false, 0) != 1)
	{
		if (func_498(1, 0, 1))
		{
			if (unk_0xC77EC38683AB49CC(0) <= 1)
			{
				unk_0xD1CF2F876BAD2600(1);
			}
		}
	}
}

bool func_498(int iParam0, bool bParam1, bool bParam2)
{
	return func_499(0, iParam0, 1, bParam1, bParam2);
}

int func_499(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_1374943, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_503(iParam0) - func_502(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_502(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_503(iParam0) - func_501(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_502(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_503(iParam0) - func_502(iParam0, 1));
		}
		if (!bParam4 && Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_500(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1374943.f_1;
			break;
		
		case 1:
			return Global_1374943.f_2;
			break;
		
		case 2:
			return Global_1374943.f_3;
			break;
	}
	return 0;
}

int func_502(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x32405B7614E36453())
			{
				return Global_2423644[iVar0 /*406*/].f_205;
			}
			else
			{
				return unk_0xBC93E1C9C8F877D9(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x32405B7614E36453())
			{
				return Global_2423644[iVar0 /*406*/].f_206;
			}
			else
			{
				return unk_0x146F82F73FA40AB0(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x32405B7614E36453())
			{
				return Global_2423644[iVar0 /*406*/].f_207;
			}
			else
			{
				return unk_0x2B3A16ECF7925A20(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1374951;
			break;
		
		case 1:
			return Global_1374952;
			break;
		
		case 2:
			return Global_1374953;
			break;
	}
	return 0;
}

bool func_504(int iParam0)
{
	return func_471(iLocal_52, iParam0);
}

void func_505(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_272 + uParam0->f_273) || unk_0xFA30DFD0084E92FE(Global_92955.f_20, 2)) || unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_506(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_506(var uParam0)
{
	func_507(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_507(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xFA30DFD0084E92FE(*uParam0, 30))
	{
		switch (func_433(*uParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(uParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(uParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*uParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(uParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, uParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(uParam0, 29);
	}
}

void func_508(int iParam0)
{
	if (func_471(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_509()
{
	func_2(0);
	if (unk_0x724D816EA203A79E(iLocal_96))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
		{
			func_2(1);
		}
		else
		{
			func_472("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_472("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_2(0);
		func_472("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_510(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_514();
			}
			else
			{
				return 0;
			}
		}
		if (!func_513())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_512())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_511(155))
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_514();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_514();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_514();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_511(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_512()
{
	return Global_2447942.f_581;
}

bool func_513()
{
	return Global_1312831;
}

void func_514()
{
	unk_0x95E4B6F3ED223F5A();
}

void func_515()
{
	func_189(1);
}

void func_516(var uParam0)
{
	func_519();
	if (func_42(0, 1))
	{
		unk_0x4AED68BFACFB14CB(1);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		if (unk_0x5CAE759AE8219D20(iLocal_96))
		{
			if ((func_530() && unk_0xF4FCC3C1048FF2AB(iLocal_96, 1805844857) != 1) && unk_0xF4FCC3C1048FF2AB(iLocal_96, -251125078) != 1)
			{
				unk_0x8CE2798B9A7027EC(iLocal_96, 1193033728, 0);
				if (unk_0x4DF785C4DF542CD0(iLocal_96))
				{
					unk_0x22321800954A532E(iLocal_96, 1);
				}
				if (unk_0xE37F7B0CBE8148BF(iLocal_96))
				{
					unk_0x02537C8C1BEEB477(&iLocal_96);
				}
				unk_0xAFD2CBD312D69CFA(iLocal_96);
			}
			else
			{
				if (unk_0xE37F7B0CBE8148BF(iLocal_96))
				{
					unk_0x02537C8C1BEEB477(&iLocal_96);
				}
				unk_0xAFD2CBD312D69CFA(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_471(iLocal_49, 64))
	{
		Global_25429 = 0;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_97))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_97);
	}
	iLocal_97 = 0;
	iLocal_296 = 0;
	if (func_471(iLocal_49, 2048))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	func_518();
	if (func_530())
	{
		if (unk_0x2A0D5F9585271A68(uLocal_85))
		{
			unk_0x5BF83EEC9AFDCD0E(uLocal_85);
		}
	}
	iLocal_98 = 0;
	func_519();
	func_517();
	Global_25430 = 0f;
	if (!Global_1671574.f_4233 && !Global_1671574.f_4237)
	{
		unk_0x7A89E6B582BCD8C2();
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_504(256))
		{
			unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 6, iLocal_86, iLocal_87, 0);
			func_189(1024);
		}
	}
	if (func_451("PROS_ACCEPT") && !Global_25427)
	{
		unk_0x7456702622C62EA0(1);
	}
	if (Global_25431 == unk_0x8A55B15F4133C912())
	{
		Global_25427 = 0;
		Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_400 = 0;
	}
	func_428(uParam0, 0);
	if (func_530())
	{
		func_189(2048);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
}

void func_517()
{
}

void func_518()
{
	Global_2436641.f_1151.f_10 = 0;
}

void func_519()
{
}

void func_520(bool bParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_96))
	{
		if (unk_0x5237AF95232D78C5(iLocal_96, 0))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_96, -828834893) != 1)
			{
				unk_0xA3981DED4FC2E56E(iLocal_96, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_530())
			{
				if (unk_0x5CAE759AE8219D20(iLocal_96))
				{
					if (unk_0xE37F7B0CBE8148BF(iLocal_96))
					{
						if (unk_0xDD5EE7D9FC37FA16(unk_0x2F3B70ED60C4B9EB(iLocal_96)))
						{
							unk_0x22321800954A532E(iLocal_96, 1);
						}
					}
				}
			}
			else
			{
				unk_0x22321800954A532E(iLocal_96, 1);
			}
		}
	}
}

void func_521()
{
	if (!func_530())
	{
		if (iLocal_295 == 11 || iLocal_295 == 13)
		{
			return;
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_96, 0))
	{
		if (!unk_0x889DA6CE8E4DB344(iLocal_96))
		{
			func_89(0);
			iLocal_294 = 1;
		}
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_96))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_96, 0);
				unk_0x2A022CF97A7A1A9B(iLocal_96);
			}
		}
		else
		{
			unk_0x2A022CF97A7A1A9B(iLocal_96);
		}
		unk_0x38E412DB4A45B900(iLocal_96, 0);
	}
	if (unk_0xE59B7F5A03335350(iLocal_99, 0) && !unk_0x1D403DFADBC2DE3C(iLocal_99, 0))
	{
		if (func_530())
		{
			if (unk_0x4DF785C4DF542CD0(iLocal_99))
			{
				if (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_21 <= 0 && !unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 11))
				{
					unk_0xAC11493FE23DE883(iLocal_99, 0);
					unk_0x93D3868AE0D83B7C(iLocal_99, 3);
					unk_0xBDB583AA8DCA5600(iLocal_99, 0);
				}
				unk_0xD38EB677CBE7440A(iLocal_99, 1, 0);
			}
		}
		else
		{
			unk_0xAC11493FE23DE883(iLocal_99, 0);
			unk_0x93D3868AE0D83B7C(iLocal_99, 3);
			unk_0xBDB583AA8DCA5600(iLocal_99, 0);
		}
	}
	func_529(iLocal_76);
	func_529(iLocal_77);
	func_529(iLocal_78);
	func_529(iLocal_79);
	func_529(iLocal_80);
	func_529(iLocal_81);
	func_529(iLocal_82);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
		if ((func_530() && iLocal_297 != 3) && func_471(iLocal_49, 2048))
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		}
		unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
		unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 1);
	}
	if (func_471(iLocal_49, 2048))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x5EFA245B45A49778(2, 19, 1);
	unk_0x5EFA245B45A49778(2, 37, 1);
	func_518();
	iLocal_296 = 0;
	if (func_471(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25427 = 0;
		Global_25428 = 0;
		Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_400 = 0;
	}
	if (func_471(iLocal_49, 8))
	{
		if (unk_0x320539481B2F0121(func_86()))
		{
			unk_0xFC4EC4916831BFC8(func_86());
		}
	}
	func_528();
	func_449();
	if (((func_451("PROS_ACCEPT") || func_451("PROS_CAM_TOG")) || func_451("PROS_RESPONSE")) || func_451("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x7456702622C62EA0(1);
	}
	func_350(0);
	unk_0x43F06392C4EF25E0(1);
	if (func_471(iLocal_49, 8))
	{
		if (unk_0x320539481B2F0121(func_86()))
		{
			unk_0xFC4EC4916831BFC8(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0xC32C243942383443();
	func_116(0);
	unk_0x4AED68BFACFB14CB(1);
	func_522();
	if (func_530())
	{
		if (func_504(2))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x270072584099CC42(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					if (unk_0x4DF785C4DF542CD0(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						unk_0x42793EADF14EC888(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
						unk_0xD421BC740C5340C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
					}
				}
			}
			else if (unk_0x270072584099CC42(iLocal_99))
			{
				if (unk_0x4DF785C4DF542CD0(iLocal_99))
				{
					unk_0xD421BC740C5340C3(iLocal_99, 1);
					unk_0x42793EADF14EC888(iLocal_99, 0);
					unk_0x7EE3B21D7AC635E8(iLocal_99, 0);
				}
				else
				{
					unk_0xC7587327285D9984(iLocal_99);
					unk_0xD421BC740C5340C3(iLocal_99, 1);
					unk_0x42793EADF14EC888(iLocal_99, 0);
					unk_0x7EE3B21D7AC635E8(iLocal_99, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_522()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_527())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_526(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		unk_0x18054B9E2612CC6D(131, func_525(), 0f);
		unk_0x18054B9E2612CC6D(117, func_524(), 0f);
		unk_0x18054B9E2612CC6D(118, func_523(), 0f);
	}
}

int func_523()
{
	return iLocal_46;
}

int func_524()
{
	return iLocal_45;
}

int func_525()
{
	return 0;
}

int func_526(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x57D316754A262B34())
	{
	}
	if ((!unk_0x8BEB5B1064243AE5() && (unk_0x36C1DE668967177B() || !unk_0x11F704A1BA7AC122())) && unk_0x198118F0FE63908B())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xB9ACC1154C623363())
			{
				Var69 = { func_307(unk_0xB5CEFD608600A09F()) };
				if (unk_0xD7F4457CECF10121(&Var69))
				{
					if (unk_0x24723877416AAAFC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x7AF0088ABFA713B6() && Global_2455997.f_3)
			{
				unk_0xD10ECE53AB296FDB(&Var0, &(Global_1653267.f_10));
			}
			else
			{
				unk_0x2F7E331C1ABCF9E9(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x8BEB5B1064243AE5())
	{
	}
	if (!unk_0x36C1DE668967177B())
	{
	}
	if (unk_0x11F704A1BA7AC122())
	{
	}
	if (!unk_0x198118F0FE63908B())
	{
	}
	return 0;
}

int func_527()
{
	if ((unk_0x57D316754A262B34() && unk_0x7E3A4CFA5545546C()) && unk_0x670C0C6C780A3F84())
	{
		return 1;
	}
	return 0;
}

void func_528()
{
	if (func_471(iLocal_49, 128))
	{
		func_393(39, 0);
		func_393(40, 0);
		func_393(41, 0);
		func_393(42, 0);
		func_393(43, 0);
		func_393(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_529(int iParam0)
{
	if (func_530())
	{
		if (func_210(iParam0))
		{
			unk_0x913ADDC330AF164E(iParam0);
		}
	}
}

bool func_530()
{
	return func_504(1);
}

bool func_531(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_532(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0xA95CF30C72EB526E(iParam0);
		if (unk_0x5237AF95232D78C5(iVar0, iParam1))
		{
			uVar3 = unk_0x9FE9D386222EEE47(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				uVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
				if (func_201(uVar2, 1, 1))
				{
					if (unk_0xA95CF30C72EB526E(uVar2) != iVar0)
					{
						if (unk_0x62F3A07C43FFB568(unk_0xA95CF30C72EB526E(iVar2), uVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_533(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_443(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1589291[iParam0 /*770*/] == 2 || Global_1589291[iParam0 /*770*/] == 1) || Global_1589291[iParam0 /*770*/] == 0) || Global_1589291[iParam0 /*770*/] == 3) || Global_1589291[iParam0 /*770*/] == 8)
	{
		return 1;
	}
	return 0;
}

