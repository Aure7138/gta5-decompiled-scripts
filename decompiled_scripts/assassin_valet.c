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
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	struct<39> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 16;
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
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
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
	var uLocal_281 = 21;
	var uLocal_282 = 6;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 1132396544;
	var uLocal_290 = 1132396544;
	var uLocal_291 = 0;
	var uLocal_292 = -1082130432;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 8;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
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
	var uLocal_352 = -1;
	var uLocal_353 = 1092616192;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	bool bLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<7> Local_360 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	int iLocal_371 = 0;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	float fLocal_374 = 0f;
	bool bLocal_375 = 0;
	bool bLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
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
	var uLocal_420 = 3;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 1;
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
	var uLocal_441 = 2;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 13;
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
	var uLocal_459 = 13;
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
	var uLocal_668 = 13;
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
	var uLocal_877 = 13;
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
	var uLocal_891 = 13;
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
	var uLocal_905 = 13;
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
	var uLocal_919 = 13;
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
	struct<55> Local_964 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032[3] = { 0, 0, 0 };
	int iLocal_1036[2] = { 0, 0 };
	int iLocal_1039 = 0;
	int iLocal_1040[2] = { 0, 0 };
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	int iLocal_1046[2] = { 0, 0 };
	var uLocal_1049[3] = { 0, 0, 0 };
	var uLocal_1053[2] = { 0, 0 };
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	struct<8> Local_1059[3];
	struct<8> Local_1084[2];
	struct<8> Local_1101[2];
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120[3] = { 0, 0, 0 };
	var uLocal_1124[2] = { 0, 0 };
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	bool bLocal_1134 = 0;
	int iLocal_1135 = 0;
	bool bLocal_1136 = 0;
	int iLocal_1137 = 0;
	bool bLocal_1138 = 0;
	bool bLocal_1139 = 0;
	bool bLocal_1140 = 0;
	bool bLocal_1141 = 0;
	int iLocal_1142 = 0;
	bool bLocal_1143 = 0;
	bool bLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	bool bLocal_1148 = 0;
	bool bLocal_1149 = 0;
	bool bLocal_1150 = 0;
	bool bLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	bool bLocal_1154 = 0;
	int iLocal_1155 = 0;
	bool bLocal_1156 = 0;
	int iLocal_1157 = 0;
	bool bLocal_1158 = 0;
	int iLocal_1159 = 0;
	bool bLocal_1160 = 0;
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	bool bLocal_1163 = 0;
	int iLocal_1164 = 0;
	int iLocal_1165 = 0;
	bool bLocal_1166 = 0;
	int iLocal_1167 = 0;
	bool bLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	bool bLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	bool bLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	bool bLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	bool bLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	var uLocal_1195[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1201 = 0;
	var uLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	var uLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	float fLocal_1217 = 0f;
	float fLocal_1218 = 0f;
	float fLocal_1219 = 0f;
	float fLocal_1220[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1226[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1232 = 0f;
	float fLocal_1233 = 0f;
	float fLocal_1234[3] = { 0f, 0f, 0f };
	var uLocal_1238[3] = { 0, 0, 0 };
	float fLocal_1242 = 0f;
	float fLocal_1243 = 0f;
	float fLocal_1244 = 0f;
	int iLocal_1245 = 0;
	float fLocal_1246 = 0f;
	struct<3> Local_1247[3];
	struct<3> Local_1257[3];
	struct<3> Local_1267[5];
	struct<3> Local_1283 = { 0, 0, 0 } ;
	struct<3> Local_1286 = { 0, 0, 0 } ;
	struct<3> Local_1289 = { 0, 0, 0 } ;
	struct<3> Local_1292 = { 0, 0, 0 } ;
	struct<3> Local_1295 = { 0, 0, 0 } ;
	struct<3> Local_1298 = { 0, 0, 0 } ;
	struct<3> Local_1301 = { 0, 0, 0 } ;
	struct<3> Local_1304 = { 0, 0, 0 } ;
	struct<3> Local_1307 = { 0, 0, 0 } ;
	float fLocal_1310 = 0f;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	var uLocal_1315[2] = { 0, 0 };
	int iLocal_1318 = 0;
	int iLocal_1319[3] = { 0, 0, 0 };
	var uLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	int iLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	bool bLocal_1362 = 0;
	var uLocal_1363 = 16;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = -1;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 1000;
	var uLocal_1538 = 1000;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 8;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 4;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 4;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 4;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 4;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 4;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 4;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 4;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 4;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	struct<3> Local_1664 = { 0, 0, 0 } ;
	float fLocal_1667 = 0f;
	struct<3> Local_1668 = { 0, 0, 0 } ;
	float fLocal_1671 = 0f;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	struct<3> Local_1674 = { 0, 0, 0 } ;
	struct<3> Local_1677 = { 0, 0, 0 } ;
	struct<3> Local_1680 = { 0, 0, 0 } ;
	struct<3> Local_1683 = { 0, 0, 0 } ;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	int iLocal_1689 = 0;
	struct<12> Local_1690 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	Local_45 = { 500f, 500f, 500f };
	uLocal_54 = unk_0xD401739A5899EC1B();
	uLocal_55 = unk_0xF90D5D0199B23D8A();
	iLocal_268 = -1;
	fLocal_270 = 1f;
	iLocal_383 = 100;
	iLocal_384 = 3;
	iLocal_1030 = 3;
	iLocal_1209 = 37000;
	iLocal_1215 = -1;
	fLocal_1217 = 90000f;
	fLocal_1242 = 135f;
	fLocal_1244 = 0f;
	fLocal_1246 = 0f;
	Local_1292 = { -1162.985f, -161.715f, -38.221f };
	Local_1295 = { -1327.63f, -266.202f, 38.221f };
	Local_1298 = { -1236.661f, -197.316f, 39.6313f };
	Local_1301 = { -1266.027f, -218.9829f, 41.44594f };
	Local_1307 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1310 = 40f;
	iLocal_1324 = joaat("a_m_y_beachvesp_02");
	iLocal_1325 = joaat("fbi2");
	iLocal_1326 = joaat("s_m_m_highsec_01");
	iLocal_1327 = joaat("s_m_m_highsec_02");
	iLocal_1328 = joaat("washington");
	Local_1664 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1667 = 304.201f;
	Local_1668 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1671 = 137.9228f;
	Local_1674 = { -1510.733f, -935.96f, 10.90214f };
	Local_1677 = { 15.07491f, -0.024198f, -71.86189f };
	Local_1680 = { -1510.878f, -936.1155f, 9.798549f };
	Local_1683 = { 4.686822f, -0.024198f, -72.45972f };
	if (unk_0xBCA819F9975BEDFA(3))
	{
		unk_0x5BE53482EFD49141("ASS1_FAIL");
		func_490(&(Global_101700.f_18922.f_1), 1024);
		func_488();
		func_483();
	}
	unk_0x7E34CF542225E666(1);
	iLocal_1044 = unk_0x17B5CC8A8615737D();
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
	}
	if (func_482())
	{
		if (func_481())
		{
			iLocal_1152 = 1;
		}
		bLocal_1141 = true;
	}
	else
	{
		bLocal_1141 = false;
	}
	func_480();
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	}
	func_479();
	iLocal_269 = 0;
	Local_57 = { func_477(iLocal_269) };
	unk_0x16A327AF9E84ABA6(iLocal_1326, 1);
	unk_0x16A327AF9E84ABA6(iLocal_1327, 1);
	unk_0xEE7439C2B53B715A();
	if (func_482())
	{
		bLocal_376 = true;
		iLocal_1208 = func_476();
		if (Global_86001)
		{
			if (iLocal_1208 <= 1)
			{
				iLocal_1208++;
			}
		}
		func_475();
		if (iLocal_1208 == 0)
		{
			if (iLocal_1152)
			{
				func_473();
				while (!func_472())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar0 = func_429(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(iVar0)) && !unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar0))) && !unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar0))) && !unk_0x3C6792805E3BEB1B(iVar0))
				{
					unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
				}
				else
				{
					unk_0x813865264334331D(&iVar0);
				}
			}
			func_428(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1208 == 1)
		{
			if (iLocal_1152)
			{
				func_473();
				while (!func_472())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar1 = func_429(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(iVar1)) && !unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar1))) && !unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar1))) && !unk_0x3C6792805E3BEB1B(iVar1))
				{
					unk_0x482AE8C0EAF5AE07(iVar1, 1084227584);
				}
				else
				{
					unk_0x813865264334331D(&iVar1);
				}
			}
			func_428(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1208 == 2)
		{
			if (iLocal_1152)
			{
				func_473();
				while (!func_472())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2 = func_429(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(iVar2)) && !unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar2))) && !unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar2))) && !unk_0x3C6792805E3BEB1B(iVar2))
				{
					unk_0x482AE8C0EAF5AE07(iVar2, 1084227584);
				}
				else
				{
					unk_0x813865264334331D(&iVar2);
				}
			}
			func_428(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0x31683E0D6DBB707E("M_ASS1", 0);
		if (iLocal_1142)
		{
			if (func_427())
			{
				func_426();
			}
		}
		else if (!unk_0xCA41A00932714525(iLocal_1044))
		{
			func_419();
			if (iLocal_1030 < 10)
			{
				Local_360.f_6 = 1;
			}
			else
			{
				Local_360.f_6 = 5;
			}
			func_141();
			func_89();
			if (iLocal_1157)
			{
				func_84();
			}
			if (!bLocal_1140)
			{
				if (iLocal_1030 >= 9 && iLocal_1030 < 11)
				{
					func_80(&uLocal_1202, &fLocal_1217, &bLocal_1139, &bLocal_1140);
				}
			}
			func_55();
			func_53();
			if (((iLocal_1133 || bLocal_1138) && iLocal_1030 < 11) || (bLocal_1168 && iLocal_1030 < 11))
			{
				if (!func_52(&uLocal_1353) && iLocal_1030 > 8)
				{
					func_49(&uLocal_1353);
				}
				else if (iLocal_1030 < 8 || func_46(&uLocal_1353) > 5f)
				{
					if (iLocal_1043 == 1)
					{
						func_31(1);
					}
					else if (iLocal_1043 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&uLocal_1353) > 2.5f)
				{
					if (!iLocal_1169)
					{
						if (!bLocal_1188)
						{
							iLocal_1056 = func_30(70f, 0);
						}
						else
						{
							iLocal_1056 = func_30(70f, 1);
						}
						if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
						{
							if (!unk_0xCA41A00932714525(iLocal_1056))
							{
								unk_0x15848523A8959DBC(iLocal_1056);
								if (iLocal_1043 == 1)
								{
									if (unk_0x23E9113C762466ED(iLocal_1313))
									{
										if (!unk_0xFD0FE723227D5AB6(iLocal_1056, 0))
										{
											unk_0xE44B3F42EB747B10(iLocal_1056, iLocal_1313, iLocal_1313, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (unk_0x23E9113C762466ED(iLocal_1056) && !unk_0xCA41A00932714525(iLocal_1056))
									{
										func_28(iLocal_1056, 6, "OJAvaGUARD2");
										func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1043 == 8)
								{
									if (unk_0x23E9113C762466ED(iLocal_1311) && unk_0x45CD66F0A131E554(iLocal_1311, 0))
									{
										unk_0xE44B3F42EB747B10(iLocal_1056, iLocal_1311, iLocal_1311, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0xC62C6BBB860531B7(iLocal_1056, unk_0x17B5CC8A8615737D(), -1, 0);
									func_2(iLocal_1056);
								}
							}
						}
						iLocal_1169 = 1;
					}
				}
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(iLocal_1044, 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(iLocal_1044, 0);
		if (unk_0x0324EEB10F81965F(iVar0) == joaat("towtruck") || unk_0x0324EEB10F81965F(iVar0) == joaat("towtruck2"))
		{
			bLocal_1143 = true;
		}
	}
	else
	{
		bLocal_1143 = false;
	}
	if (bLocal_1143)
	{
		if (unk_0x2AFFA8434FA2066D(iVar0, iLocal_1311))
		{
			unk_0x0A57226793A19176(iVar0, iLocal_1311);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1179)
	{
		if ((unk_0x23E9113C762466ED(iParam0) && !unk_0xCA41A00932714525(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_1043 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1043 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1179 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0x6A7B0D91FD88D9EE(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_14611 = 0;
	func_4();
}

void func_4()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x660E8E7836E95077(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_4();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_19();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_12();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_11())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
				}
			}
			if (func_10())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_9();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_8();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_4();
	}
	return 0;
}

void func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_9()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_10()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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

void func_12()
{
	if (func_18(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_13();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_13()
{
	func_14();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_17(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_16(unk_0x17B5CC8A8615737D());
			if (func_15(iVar0) && (!func_18(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_15(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_22()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, int iParam1)
{
	return func_24(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), iParam0, iParam1);
}

float func_24(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

int func_25(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0xCA41A00932714525(uLocal_1049[iVar0]))
		{
			if (func_26(uLocal_1049[iVar0], Local_1289, 1) < fParam0)
			{
				return uLocal_1049[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xCA41A00932714525(uLocal_1053[iVar0]))
		{
			if (func_26(uLocal_1053[iVar0], Local_1289, 1) < fParam0)
			{
				return uLocal_1053[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), Param1, iParam4);
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		func_29(&uLocal_1363, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0xCA41A00932714525(uLocal_1049[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0xFD0FE723227D5AB6(uLocal_1049[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_1049[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1049[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xCA41A00932714525(uLocal_1053[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0xFD0FE723227D5AB6(uLocal_1053[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_1053[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1053[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xCA41A00932714525(iLocal_1046[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0xFD0FE723227D5AB6(uLocal_1053[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_1046[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1046[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)
{
	char* sVar0;
	
	if (iLocal_1142 == 0)
	{
		iLocal_1043 = iParam0;
		func_3();
		unk_0xD12BCC85C2F8B1DE();
		unk_0x5BE53482EFD49141("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			Global_91491.f_12[0] = 1;
		}
		else
		{
			Global_91491.f_12[0] = 0;
		}
		switch (iLocal_1043)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1142 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	if (Global_101700.f_8044 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 5);
		Global_91527 = iParam0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0x21F9081DAE2F8AF5(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	unk_0xF6B2E0D2CFCE7923(unk_0xBE369BE1BC57A796());
	unk_0xC23C2ED7CCA1618F(unk_0xBE369BE1BC57A796());
	func_34(&(Global_101700.f_2095.f_539), iVar1);
	if (Global_85999 == Global_91528)
	{
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x48B8265059381CD0(Global_82612[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x2359C336802E3CB4(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1)
	{
		if (Global_101700.f_8044)
		{
		}
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_82576[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_82576[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101700.f_17492[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_36(Global_101700.f_17492[iVar0], &Var2, &fVar5))
			{
				Global_101700.f_17492[iVar0] = 318;
				func_35(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_35(var uParam0)
{
	*uParam0 = -15;
}

int func_36(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85809[iParam0 /*2*/] = 0;
	}
}

void func_38()
{
	Global_91526 = 1;
	if (unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 25);
	}
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_40(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_41(char* sParam0)
{
	func_490(&(Global_101700.f_18922.f_1), 1024);
	if (!unk_0xD3115E7F7876D6E6(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)
{
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		if (unk_0xF9108830F4935563(sParam0) <= 16)
		{
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk_0xC81784511829F091())
			{
				unk_0x319B2408D3EC19AC();
			}
		}
	}
}

void func_43(struct<3> Param0, float fParam3)
{
	if (func_44(Global_69942, 0f, 0f, 0f, 0))
	{
		Global_69942 = { Param0 };
		Global_69945 = fParam3;
	}
}

bool func_44(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_45()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()) || unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
		{
			return 1;
		}
	}
	return 0;
}

float func_46(var uParam0)
{
	if (func_52(uParam0))
	{
		if (func_48(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_47(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_47(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar2 = unk_0xCB150A8B81012128();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C()) / 1000f);
}

bool func_48(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 2);
}

void func_49(var uParam0)
{
	if (!func_52(uParam0))
	{
		func_50(uParam0);
	}
}

void func_50(var uParam0)
{
	func_51(uParam0, 0f);
}

void func_51(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_47(unk_0x48B8265059381CD0(*uParam0, 4)) - fParam1);
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0x21E7933CCC7B3724(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_52(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 1);
}

void func_53()
{
	if (func_54(&iLocal_1043))
	{
		func_31(6);
	}
}

int func_54(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_1030 > 11)
	{
		if (!unk_0xCA41A00932714525(iLocal_1045))
		{
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				if (unk_0x2315BB1606BC3DC3(iLocal_1045, iLocal_1311, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1163)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0x23E9113C762466ED(iLocal_1045))
		{
			if (!unk_0xCA41A00932714525(iLocal_1045))
			{
				if (func_24(iLocal_1044, iLocal_1045, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
						{
							if (unk_0xF6563E19EDE84B8C(iLocal_1311) || !unk_0x1DCFA79E268F3EE5(iLocal_1311))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0xF6563E19EDE84B8C(iLocal_1045))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0xA3794949321E107C(uLocal_1119))
				{
					if (func_24(iLocal_1044, iLocal_1045, 1) >= (fVar0 * 0.5f))
					{
						if (!unk_0x2B4022428FED3F3B(uLocal_1119))
						{
							unk_0x76C0584E1FF9B958(uLocal_1119, 1);
						}
					}
					else if (unk_0x2B4022428FED3F3B(uLocal_1119))
					{
						unk_0x76C0584E1FF9B958(uLocal_1119, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()
{
	if (unk_0x23E9113C762466ED(iLocal_1045))
	{
		if (!unk_0xCA41A00932714525(iLocal_1045))
		{
			func_56(&uLocal_1528, iLocal_1045, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_57(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_58(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		func_79(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_59(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xAB01297DD4A8577F())
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD3115E7F7876D6E6(iVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_78(iVar0))
	{
		func_77();
	}
	if (func_76(iParam1) && unk_0xADA6DD2D53C59AF0(iParam1))
	{
		iVar1 = 0;
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			unk_0xCC614957B282546F(unk_0xB80CAAF3D65FBC1F(iParam1));
			unk_0x5A0679AC515DA45F(unk_0xB80CAAF3D65FBC1F(iParam1), 1);
			if (unk_0x4B08F3A62DC9B336(unk_0xB80CAAF3D65FBC1F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x3983CCB0D958159C(iParam1))
		{
			unk_0x1976D6B36CACBFE7(unk_0xBFC71CD990E479DB(iParam1));
			if (unk_0x7D86ADEE79DE4C72(unk_0xBFC71CD990E479DB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam1))
		{
			unk_0xA8A81E4A8E21148C(unk_0xACDCB2312E61BD53(iParam1));
			if (unk_0xC61161F0BC70D70C(unk_0xACDCB2312E61BD53(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xAB01297DD4A8577F())
		{
			if (func_71(uParam0, bParam7, bParam9, 0))
			{
				func_68(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0)) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if ((iVar1 && !unk_0x9E123D5FF2973C60()) && uParam8)
						{
							if (!func_78(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0))
				{
					if (((unk_0x1DCFA79E268F3EE5(iParam1) && iVar1) && !unk_0x9E123D5FF2973C60()) && uParam8)
					{
						if (!func_78(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
							{
								func_62(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD3115E7F7876D6E6(sParam5))
			{
				if (func_78(sParam5))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
			{
				if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
				{
					func_79(uParam0, iVar0, 1);
				}
			}
			if (!func_71(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_79(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)
{
	if (func_76(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x73624B45C8E405BA(1);
		unk_0x72B6EAB729050F5B(0);
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		unk_0x8BBC558C75738A6D("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_61(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x94E3E074F38DF86C()
		{
			return 1;
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101700.f_9008.f_100++;
			}
			return Global_101700.f_9008.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101700.f_9008.f_101++;
			}
			return Global_101700.f_9008.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101700.f_9008.f_102++;
			}
			return Global_101700.f_9008.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_63(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_64(char* sParam0)
{
	if (!func_65(1, 1, 0))
	{
		if ((!unk_0x9C88EB7B70229335(sParam0) && func_78(sParam0)) || func_78("CMN_HINT"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return 0;
	}
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (func_66())
	{
		return 0;
	}
	if (unk_0x349B6C82BE3EF6DD())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53003)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
			{
				return 0;
			}
			if (unk_0x54271E538645DBDB())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_66()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_67(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		func_79(uParam0, 0, 0);
	}
	if (func_44(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			iVar0 = unk_0xB80CAAF3D65FBC1F(iParam1);
			if (!unk_0xFD0FE723227D5AB6(iVar0, 0))
			{
				if (unk_0x0764AC92F08BEC9E(iVar0))
				{
					if (!func_69())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x81E2E02C57D459E6(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x73624B45C8E405BA(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x986AC95588E8693B(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iParam1, -1, iVar3, iVar4);
	unk_0x9AF1ABF0E97411BF("FocusIn", 0, 0);
	unk_0x4A5D4AD0FE6ACF73("HINT_CAM_SCENE");
	unk_0x4988C48537D1AE4F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x94E3E074F38DF86C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_69()
{
	return func_70(unk_0xBE369BE1BC57A796());
}

int func_70(int iParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_75(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_61(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (!func_75(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x94E3E074F38DF86C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_74(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_74(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (!func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_74(bParam1, bParam2, bParam3) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_75(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (func_73(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_72(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || func_72(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_73(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_65(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_77();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_72(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_74(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x3983CCB0D958159C(iParam0))
		{
			if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_77()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

bool func_78(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x72B6EAB729050F5B(iParam2);
		unk_0x8BBC558C75738A6D("FocusIn");
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x73624B45C8E405BA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD3115E7F7876D6E6(uParam0->f_3))
	{
		if (func_78(uParam0->f_3))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
	if (!unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (func_78(sVar0))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
}

void func_80(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_52(&uLocal_1350))
		{
			func_49(&uLocal_1350);
		}
		*bParam2 = 1;
	}
	if (func_52(&uLocal_1350))
	{
		fVar0 = func_46(&uLocal_1350);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1212 = unk_0xF2DB717A73826179((*fParam1 - fVar0));
	iLocal_1212 *= 1000;
	if (iLocal_1212 < 63000)
	{
		iLocal_1146 = 1;
	}
	if (iLocal_1212 < 65000)
	{
		iLocal_1153 = 1;
	}
	if (iLocal_1212 < iLocal_1209)
	{
		iLocal_1176 = 1;
	}
	if (!unk_0x985A2515CBAF7290("SCRIPT\ASSASSINATION_MULTI", 0, -1))
	{
		bLocal_1362 = false;
	}
	else
	{
		bLocal_1362 = true;
	}
	if (iLocal_1212 < 30000)
	{
		iLocal_1167 = 1;
		if (bLocal_1362)
		{
			if (func_52(&uLocal_1359))
			{
				if (func_46(&uLocal_1359) > 1f)
				{
					unk_0x4988C48537D1AE4F(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&uLocal_1359);
				}
			}
			else
			{
				unk_0x4988C48537D1AE4F(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&uLocal_1359);
			}
		}
		func_81(iLocal_1212, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_81(iLocal_1212, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_81(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_83(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354542.f_1 = 1;
		func_82(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_82(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_83(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

void func_84()
{
	int iVar0;
	
	switch (iLocal_1206)
	{
		case 0:
			if (!func_22())
			{
				if (!unk_0xA929B2923D14E2F8(uLocal_1049[0], 0))
				{
					unk_0xEF9294ED57E4AC3D(uLocal_1049[0]);
				}
				if (!unk_0xA929B2923D14E2F8(uLocal_1049[1], 0))
				{
					unk_0xEF9294ED57E4AC3D(uLocal_1049[1]);
				}
				iVar0 = func_88();
				if (bLocal_1156)
				{
					if (!iLocal_1172)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1363, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1172 = 1;
						}
					}
				}
				else if (!bLocal_1163 && unk_0xCA41A00932714525(iLocal_1045))
				{
					if (!iLocal_1172)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1363, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1172 = 1;
						}
					}
				}
				if (!func_52(&uLocal_1338))
				{
					func_49(&uLocal_1338);
				}
				else
				{
					func_50(&uLocal_1338);
				}
				iLocal_1206 = 1;
			}
			break;
		
		case 1:
			iLocal_1206 = 2;
			break;
		
		case 2:
			if (iLocal_1172 || !unk_0xCA41A00932714525(iLocal_1045))
			{
				if (!func_22() && !bLocal_1156)
				{
					if (!iLocal_1170)
					{
						iVar0 = func_88();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1363, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1170 = 1;
						}
					}
					else if (!bLocal_1180 && unk_0xCA41A00932714525(iLocal_1045))
					{
						iVar0 = func_88();
						func_87(iVar0);
					}
				}
			}
			else if (bLocal_1156)
			{
				if (!iLocal_1172)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1172 = 1;
					}
				}
			}
			else if (!bLocal_1163)
			{
				if (!iLocal_1172)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1172 = 1;
					}
				}
			}
			if (func_86(iLocal_1044))
			{
				fLocal_1243 = 2.5f;
			}
			else
			{
				fLocal_1243 = 5f;
			}
			if (func_52(&uLocal_1338))
			{
				if ((func_46(&uLocal_1338) > fLocal_1243 && func_85()) || unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
				{
					func_3();
					if (!iLocal_1133)
					{
						iLocal_1133 = 1;
						iLocal_1177 = 1;
					}
					iLocal_1157 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(uLocal_1049[iVar0]) && !unk_0xA929B2923D14E2F8(uLocal_1049[iVar0], 0))
		{
			unk_0x0E21DA99F698AF06(uLocal_1049[iVar0], 85, 1);
			if (unk_0xC37168D3A492594E(uLocal_1049[iVar0], unk_0x17B5CC8A8615737D()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x23E9113C762466ED(uLocal_1053[iVar0]) && !unk_0xA929B2923D14E2F8(uLocal_1053[iVar0], 0))
		{
			unk_0x0E21DA99F698AF06(uLocal_1053[iVar0], 85, 1);
			if (unk_0xC37168D3A492594E(uLocal_1053[iVar0], unk_0x17B5CC8A8615737D()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x23E9113C762466ED(iLocal_1046[iVar0]) && !unk_0xA929B2923D14E2F8(iLocal_1046[iVar0], 0))
		{
			unk_0x0E21DA99F698AF06(iLocal_1046[iVar0], 85, 1);
			if (unk_0xC37168D3A492594E(iLocal_1046[iVar0], unk_0x17B5CC8A8615737D()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0x70A9F320A34FAC28(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !unk_0x70A9F320A34FAC28(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0)
{
	if (!bLocal_1180)
	{
		if (unk_0x23E9113C762466ED(iLocal_1045) && unk_0xCA41A00932714525(iLocal_1045))
		{
			if (!func_22())
			{
				if ((unk_0x23E9113C762466ED(iParam0) && !unk_0xCA41A00932714525(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1180 = true;
				}
			}
		}
	}
}

int func_88()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x23E9113C762466ED(uLocal_1049[iVar1]) && !unk_0xCA41A00932714525(uLocal_1049[iVar1]))
		{
			iVar0 = uLocal_1049[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0x23E9113C762466ED(uLocal_1053[iVar1]) && !unk_0xCA41A00932714525(uLocal_1053[iVar1]))
			{
				iVar0 = uLocal_1053[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0x23E9113C762466ED(iLocal_1046[iVar1]) && !unk_0xCA41A00932714525(iLocal_1046[iVar1]))
			{
				iVar0 = iLocal_1046[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_89()
{
	func_96();
	if (!iLocal_1157)
	{
		if (!iLocal_1133)
		{
			if (func_90(&iLocal_1043))
			{
				iLocal_1133 = 1;
			}
		}
	}
}

int func_90(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1133)
	{
		if (iLocal_1167 && !bLocal_1136)
		{
			if (func_95(&iLocal_1043))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0x758839786F3B98F0(iLocal_1044, 4))
		{
			if (unk_0x1B30FA4AAC96F398(iLocal_1044))
			{
				fVar1 = func_26(unk_0x17B5CC8A8615737D(), -1230.599f, -196.5408f, 38.1528f, 1);
				unk_0x5CD8291F2C5E0AD1(iLocal_1044, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0x23E9113C762466ED(iLocal_1045))
					{
						iLocal_1157 = 1;
						iLocal_1155 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_94(iLocal_1311) || func_93(iLocal_1311)) || (unk_0x23E9113C762466ED(iLocal_1311) && unk_0xC017443DBE6DA4D6(iLocal_1311, iLocal_1044, 1)))
		{
			return 1;
		}
		if (func_94(iLocal_1312) || (unk_0x23E9113C762466ED(iLocal_1312) && unk_0xC017443DBE6DA4D6(iLocal_1312, iLocal_1044, 1)))
		{
			return 1;
		}
		if (unk_0x23E9113C762466ED(iLocal_1311) && !unk_0xA929B2923D14E2F8(iLocal_1311, 0))
		{
			if (unk_0x2315BB1606BC3DC3(iLocal_1044, iLocal_1311, 0))
			{
				unk_0x4172F1081FB7C193(iLocal_1311, 1);
				unk_0x879A84D74138DEB1(iLocal_1311);
				return 1;
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_1311))
		{
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				if (unk_0xFD0FE723227D5AB6(iLocal_1044, 0))
				{
					iVar0 = unk_0x60604E51E30D25B8(iLocal_1044, 0);
					if (unk_0xB42101338C533CB4(iVar0, iLocal_1311) || (bLocal_1143 && unk_0x2AFFA8434FA2066D(iVar0, iLocal_1311)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1030 == 12)
		{
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				if (func_24(iLocal_1044, iLocal_1311, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1032[0] == 2 || iLocal_1032[1] == 2) || iLocal_1032[2] == 2)
		{
			if (func_92())
			{
				return 1;
			}
		}
		if (iLocal_1030 < 11)
		{
			if (unk_0x3C04DDC5730997E5(-1, Local_1307, fLocal_1310))
			{
				return 1;
			}
		}
		else if (unk_0x3C04DDC5730997E5(-1, Local_1307, fLocal_1310))
		{
			if (func_91())
			{
				iLocal_1187 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	int iVar0;
	
	if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0xE58A1B5558D2DC66(unk_0xBE369BE1BC57A796()))
			{
				if ((unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()) && unk_0x79888727131C6854(0, 24)) || (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x79888727131C6854(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0xB7541DEA333EE53D(iParam0) == 3 && unk_0xF566689615D97192(iLocal_1044) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x17206B315923243C(iParam0, -1, 0) != 0)
			{
				if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(unk_0x17B5CC8A8615737D(), iParam0, 1) < 40f)
						{
							if (unk_0x7940476800F126AE(unk_0xBE369BE1BC57A796(), &iVar1))
							{
								if ((unk_0x3983CCB0D958159C(iVar1) && unk_0xBFC71CD990E479DB(iVar1) == iParam0) || (unk_0x80E9CA64E9C8E070(iVar1) && unk_0xB80CAAF3D65FBC1F(iVar1) == unk_0x17206B315923243C(iParam0, -1, 0)))
								{
									if ((unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()) && unk_0x79888727131C6854(0, 24)) || (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x79888727131C6854(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_95(int iParam0)
{
	if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
	{
		if (unk_0x8BE51858141C7DCA(unk_0x17B5CC8A8615737D(), iLocal_1311, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0x44A30EB8D9EE7035(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || unk_0x44A30EB8D9EE7035(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_96()
{
	int iVar0;
	
	func_137();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(uLocal_1049[iVar0]))
		{
			if (iLocal_1133 && !bLocal_1166)
			{
				func_136(uLocal_1049[iVar0], &(Local_1059[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x23E9113C762466ED(uLocal_1053[iVar0]))
		{
			if (iLocal_1133 && !bLocal_1166)
			{
				func_136(uLocal_1053[iVar0], &(Local_1084[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x23E9113C762466ED(iLocal_1046[iVar0]))
		{
			if (iLocal_1133 && !bLocal_1166)
			{
				func_136(iLocal_1046[iVar0], &(Local_1101[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!unk_0xCA41A00932714525(iLocal_1046[iVar0]))
			{
				if (iLocal_1040[iVar0] == 4)
				{
					unk_0x0E21DA99F698AF06(iLocal_1046[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1203 == 0)
	{
		func_134(0);
	}
	else if (iLocal_1203 == 1)
	{
		func_134(1);
	}
	else if (iLocal_1203 == 2)
	{
		if (iLocal_1030 >= 9)
		{
			func_123(0);
		}
	}
	else if (iLocal_1203 == 3)
	{
		if (iLocal_1030 >= 9)
		{
			func_123(1);
		}
	}
	else if (iLocal_1203 == 4)
	{
		if (iLocal_1030 >= 9)
		{
			func_123(2);
			func_122(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1203 == 5)
	{
		func_97(0);
		func_122(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1203 == 6)
	{
		func_97(1);
		func_122(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1203++;
	if (iLocal_1203 > 6)
	{
		iLocal_1203 = 0;
	}
	if (iLocal_1133)
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
		{
			unk_0x0E21DA99F698AF06(iLocal_1045, 120, 1);
		}
	}
}

void func_97(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	iVar0 = uLocal_1053[iParam0];
	switch (iLocal_1036[iParam0])
	{
		case 0:
			if (iLocal_1146)
			{
				iLocal_1036[iParam0] = 1;
			}
			else if (bLocal_1144)
			{
				iLocal_1036[iParam0] = 3;
			}
			break;
		
		case 1:
			if (unk_0x45CD66F0A131E554(iLocal_1312, 0))
			{
				if (func_121())
				{
					if (!unk_0xA269031A4ECAE4FA(iLocal_1312))
					{
						if (unk_0x17206B315923243C(iLocal_1312, -1, 0) == uLocal_1053[iParam0])
						{
							unk_0xAD1391A0485EA6BA(uLocal_1053[iParam0], iLocal_1312, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_1036[iParam0] = 2;
				}
				else
				{
					func_120(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0x45CD66F0A131E554(iLocal_1312, 0))
			{
				if (!unk_0xA269031A4ECAE4FA(iLocal_1312))
				{
					Var1 = { unk_0x57240623C1BC6E88(iLocal_1312, 1) };
					uVar4 = unk_0x638527C9799F2AE4(iLocal_1312);
					iLocal_1146 = 0;
					iLocal_1036[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0x45CD66F0A131E554(iLocal_1312, 0))
			{
				if (!unk_0xA929B2923D14E2F8(uLocal_1053[iParam0], 0))
				{
					if (unk_0x2315BB1606BC3DC3(uLocal_1053[iParam0], iLocal_1312, 0) && unk_0x45CD66F0A131E554(iLocal_1311, 0))
					{
						if (!iLocal_1133)
						{
							if (unk_0x17206B315923243C(iLocal_1312, -1, 0) == uLocal_1053[iParam0])
							{
								if (unk_0x1F8F07D86DA1A701(uLocal_1053[iParam0], -1273030092) != 1)
								{
									unk_0x1201F00D632D3F42(uLocal_1053[iParam0], iLocal_1312, iLocal_1311, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0x17206B315923243C(iLocal_1312, -1, 0) == uLocal_1053[iParam0])
						{
							if (!iLocal_1147)
							{
								if (unk_0xA929B2923D14E2F8(iLocal_1045, 0))
								{
									if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
									{
										unk_0x7DD7196E1A0C1D43(iVar0, unk_0x17B5CC8A8615737D(), 0, 16);
									}
									else
									{
										iLocal_1036[iParam0] = 8;
									}
								}
								else
								{
									unk_0x1201F00D632D3F42(uLocal_1053[iParam0], iLocal_1312, iLocal_1311, -1, 45f, 786981, 10f, -1, 10f);
									unk_0x5999F2D444C16D1F(iVar0, unk_0x17B5CC8A8615737D());
									iLocal_1147 = 1;
								}
							}
						}
						else if (!bLocal_1163)
						{
							if (unk_0x1F8F07D86DA1A701(uLocal_1053[iParam0], 780511057) != 1)
							{
								if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
								{
									if (unk_0x13B7ACE69D27E3E4(iLocal_1312) < 5f)
									{
										iLocal_1036[iParam0] = 8;
									}
								}
								unk_0x7DD7196E1A0C1D43(iVar0, unk_0x17B5CC8A8615737D(), 0, 16);
							}
						}
						else if (unk_0x1F8F07D86DA1A701(uLocal_1053[iParam0], 780511057) != 1)
						{
							unk_0x7DD7196E1A0C1D43(iVar0, unk_0x17B5CC8A8615737D(), 0, 16);
						}
					}
					else if (!iLocal_1157)
					{
						iLocal_1036[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&uLocal_1332))
			{
				func_50(&uLocal_1332);
			}
			func_117(&(uLocal_1053[iParam0]));
			iLocal_1036[iParam0] = 5;
			break;
		
		case 5:
			if (!func_86(iLocal_1044))
			{
				if (func_46(&uLocal_1332) >= 27f || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					if (!unk_0xCA41A00932714525(iVar0))
					{
						if (unk_0x4E84D2C9B54F79BA(iLocal_1044, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_116(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_120(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1036[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_1158)
			{
				unk_0x86DD54980FE55567(&uLocal_1323);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x0D322CDF37087C0E(0, func_115(), unk_0x0E29C61F26D96FDB(1000, 1500), 2048, 4);
				unk_0x0D322CDF37087C0E(0, func_115(), unk_0x0E29C61F26D96FDB(2000, 2500), 2048, 4);
				unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), unk_0x0E29C61F26D96FDB(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0xDF7ACB58AF1D59E0(0, unk_0x17B5CC8A8615737D(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x007AE2AA9E15FA7B(uLocal_1323);
				if (!unk_0xCA41A00932714525(uLocal_1053[iParam0]))
				{
					unk_0x00E85C3B3BD34B10(uLocal_1053[iParam0], uLocal_1323);
				}
				unk_0x08377FB2AE4C6899(&uLocal_1323);
			}
			else
			{
				unk_0x86DD54980FE55567(&uLocal_1323);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x25EEB78469C970E2(0, func_115(), unk_0x0E29C61F26D96FDB(3000, 3500), 1, 0);
				unk_0x25EEB78469C970E2(0, func_115(), unk_0x0E29C61F26D96FDB(3000, 3500), 0, 0);
				unk_0x25EEB78469C970E2(0, func_115(), unk_0x0E29C61F26D96FDB(3000, 3500), 0, 0);
				unk_0x25EEB78469C970E2(0, func_115(), unk_0x0E29C61F26D96FDB(3000, 3500), 0, 0);
				unk_0x25EEB78469C970E2(0, func_115(), -1, 0, 0);
				unk_0x007AE2AA9E15FA7B(uLocal_1323);
				if (!unk_0xCA41A00932714525(uLocal_1053[iParam0]))
				{
					unk_0x00E85C3B3BD34B10(uLocal_1053[iParam0], uLocal_1323);
				}
				unk_0x08377FB2AE4C6899(&uLocal_1323);
			}
			iLocal_1036[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0xCA41A00932714525(uLocal_1053[iParam0]))
			{
				if (unk_0x1F8F07D86DA1A701(uLocal_1053[iParam0], 1435919172) != 1)
				{
					unk_0xE44B3F42EB747B10(uLocal_1053[iParam0], iLocal_1044, iLocal_1044, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_1043 != 4 && iLocal_1043 != 5)
			{
				func_114(iVar0);
			}
			else
			{
				func_113(iVar0);
			}
			iLocal_1036[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1043 != 4)
				{
					func_112(iLocal_1312, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
			if (iLocal_1036[iParam0] != 6 && iLocal_1036[iParam0] != 7)
			{
				iLocal_1036[iParam0] = 6;
			}
		}
		else if (func_105(iVar0, iLocal_1312, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_104(iLocal_1312))
		{
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0)
			{
				func_103(unk_0x57240623C1BC6E88(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1133 = 1;
			}
		}
		else if (!bLocal_1136)
		{
			if (func_101(iVar0, 10f))
			{
				if (iLocal_1036[iParam0] != 4 && iLocal_1036[iParam0] != 5)
				{
					if (!bLocal_1134)
					{
						func_99(&Local_360, 4);
						iLocal_1036[iParam0] = 4;
					}
					else if (!func_86(iLocal_1044))
					{
						iLocal_1133 = 1;
						if (!unk_0x23E9113C762466ED(iLocal_1045))
						{
							iLocal_1043 = 5;
						}
						iLocal_1036[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0xCA41A00932714525(iVar0))
	{
		if (unk_0x2315BB1606BC3DC3(iVar0, iLocal_1312, 0))
		{
			if (((!unk_0x45CD66F0A131E554(iLocal_1312, 0) || !unk_0x45CD66F0A131E554(iLocal_1311, 0)) || iLocal_1145) || !bLocal_1136)
			{
				if (iLocal_1036[iParam0] < 8)
				{
					iLocal_1036[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1036[iParam0] < 8)
		{
			iLocal_1036[iParam0] = 8;
		}
	}
	func_98(iVar0, uLocal_1124[iParam0]);
}

void func_98(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0xCA41A00932714525(iParam0))
		{
			if (unk_0xA3794949321E107C(uParam1))
			{
				unk_0x020DF7300725ECAB(&uParam1);
			}
		}
	}
}

void func_99(var uParam0, int iParam1)
{
	func_100(uParam0, iParam1);
}

void func_100(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_101(int iParam0, float fParam1)
{
	if (!iLocal_1133)
	{
		if (!func_86(iLocal_1044))
		{
			if (unk_0x23E9113C762466ED(iParam0))
			{
				if (!unk_0xCA41A00932714525(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (unk_0xCAA82A181F15BFF5(iParam0, iLocal_1044, 120f))
						{
							if (unk_0x7F5C1711F4E1FDF7(iParam0, iLocal_1044, 17))
							{
								if (!unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0x23E9113C762466ED(iParam0))
		{
			if (!unk_0xCA41A00932714525(iParam0))
			{
				if (unk_0x4E84D2C9B54F79BA(iLocal_1044, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0xCAA82A181F15BFF5(iParam0, iLocal_1044, 120f))
					{
						if (unk_0x7F5C1711F4E1FDF7(iParam0, iLocal_1044, 17))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_102()
{
	if (iLocal_1157 || bLocal_1158)
	{
		return 1;
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x23E9113C762466ED(iLocal_1045))
	{
		return;
	}
	if (!unk_0x23E9113C762466ED(iLocal_1311))
	{
		return;
	}
	if (unk_0xA929B2923D14E2F8(iLocal_1311, 0) || iLocal_1187)
	{
		bLocal_1156 = true;
	}
	if (unk_0x23E9113C762466ED(iLocal_1045))
	{
		if (((unk_0x68EF3B23B93EEB24(iLocal_1045, joaat("weapon_sniperrifle"), 0) || unk_0x68EF3B23B93EEB24(iLocal_1045, joaat("weapon_heavysniper"), 0)) || unk_0x68EF3B23B93EEB24(iLocal_1045, joaat("weapon_remotesniper"), 0)) || unk_0x68EF3B23B93EEB24(iLocal_1045, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1155 = 1;
			iLocal_1031 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8)
	{
		if (!unk_0xA269031A4ECAE4FA(iLocal_1311))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1133)
	{
		if ((iLocal_1155 || bLocal_1156) || iVar0)
		{
			fVar1 = func_26(unk_0x17B5CC8A8615737D(), Param0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1157 = 1;
				if (fVar1 > fParam4)
				{
					bLocal_1158 = true;
				}
			}
		}
	}
}

int func_104(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
					if (unk_0x23E9113C762466ED(iVar0) && unk_0x45CD66F0A131E554(iVar0, 0))
					{
						fVar1 = unk_0x13B7ACE69D27E3E4(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0xB42101338C533CB4(iVar0, iParam0) || unk_0xC017443DBE6DA4D6(iVar0, iParam0, 1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x17B5CC8A8615737D();
	if (!unk_0xA929B2923D14E2F8(iVar0, 0) && !unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (!func_111(*uParam2, 1))
		{
			if (func_110(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_111(*uParam2, 2))
		{
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_111(*uParam2, 4))
		{
			if (func_109(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_111(*uParam2, 8))
		{
			if (func_108(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_111(*uParam2, 128);
		if (bParam4)
		{
			if (func_106(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_111(*uParam2, 16))
		{
			if (func_106(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x23E9113C762466ED(iParam0))
	{
		if (iParam7 && unk_0xC017443DBE6DA4D6(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_356)
		{
			iLocal_357 = unk_0xB5DF060B138CD2EA(iParam0);
			bLocal_356 = true;
		}
		iLocal_358 = unk_0xB5DF060B138CD2EA(iParam0);
		iLocal_359 = (iLocal_357 - iLocal_358);
		iVar0 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_356)
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(iVar1, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (unk_0x4FF557C7B233F003(iParam0))
			{
				if (unk_0xFFE01300722A85E9(iParam0) == unk_0x17B5CC8A8615737D())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x1C34CE8087E3897C(iParam0, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xB95F3BAC01F95DB8(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0x8E36A9305D573CF7(iParam0))
		{
			return 1;
		}
	}
	if (func_107(unk_0x17B5CC8A8615737D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x7F4AE93855973529(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), unk_0x60604E51E30D25B8(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iParam0))
		{
			return 1;
		}
		if (!unk_0xA929B2923D14E2F8(iParam1, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam1, unk_0x17B5CC8A8615737D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(iParam1, 1)) < 2.5f)
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x758839786F3B98F0(iParam0, 4))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0) && !unk_0xDC93048D895B2146(iParam0))
		{
			if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	if (unk_0x579A94EB2BF9398F(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x5193E99B6917C701(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x758839786F3B98F0(iParam0, 2))
	{
		if (unk_0x1B30FA4AAC96F398(iParam0))
		{
			if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xCAA82A181F15BFF5(unk_0xB80CAAF3D65FBC1F(iParam1), iParam0, 120f) && unk_0x7F5C1711F4E1FDF7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xFD0FE723227D5AB6(unk_0xB80CAAF3D65FBC1F(iParam1), 0))
			{
				iVar3 = unk_0x60604E51E30D25B8(unk_0xB80CAAF3D65FBC1F(iParam1), 0);
			}
			if (unk_0x95E290AF7BCBF364(iParam0) || func_94(iVar3))
			{
				if (unk_0x1C34CE8087E3897C(iParam1, unk_0x57240623C1BC6E88(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xCAA82A181F15BFF5(unk_0xB80CAAF3D65FBC1F(iParam1), iParam0, 120f) && unk_0x7F5C1711F4E1FDF7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x3BA3AD8AC9469C63((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0, var uParam1)
{
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6))
		{
			if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iParam0) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iParam0))
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, unk_0x17B5CC8A8615737D(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x94E3E074F38DF86C();
						}
						else if ((unk_0x94E3E074F38DF86C() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_112(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xCA41A00932714525(iParam1))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!unk_0x2315BB1606BC3DC3(iParam1, iParam0, 0))
					{
						if (unk_0x1F8F07D86DA1A701(iParam1, -1794415470) != 1)
						{
							unk_0x3AD5401AC8DD9226(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (unk_0x1F8F07D86DA1A701(iParam1, -1273030092) != 1)
					{
						unk_0x398C18AE22628160(iParam1, iParam0, unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x5999F2D444C16D1F(iParam1, unk_0x17B5CC8A8615737D());
					}
				}
				else if (!unk_0x2315BB1606BC3DC3(iParam1, iParam0, 0))
				{
					if (unk_0x1F8F07D86DA1A701(iParam1, 780511057) != 1)
					{
						unk_0x7DD7196E1A0C1D43(iParam1, unk_0x17B5CC8A8615737D(), 0, 16);
					}
				}
			}
			else if (unk_0x2315BB1606BC3DC3(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (unk_0x1F8F07D86DA1A701(iParam1, -1273030092) != 1)
					{
						unk_0xA0F84EA3D7C06982(iParam1, iParam0, unk_0x17B5CC8A8615737D(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x5999F2D444C16D1F(iParam1, unk_0x17B5CC8A8615737D());
					}
				}
				else if (unk_0x1F8F07D86DA1A701(iParam1, 780511057) != 1)
				{
					unk_0x7DD7196E1A0C1D43(iParam1, unk_0x17B5CC8A8615737D(), 0, 16);
				}
			}
		}
		else if (unk_0x1F8F07D86DA1A701(iParam1, 780511057) != 1)
		{
			unk_0x7DD7196E1A0C1D43(iParam1, unk_0x17B5CC8A8615737D(), 0, 16);
		}
	}
}

void func_113(int iParam0)
{
	var uVar0;
	
	if (!unk_0xCA41A00932714525(iLocal_1044) && !unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			unk_0xC96275575DC981A9(iParam0, 3, 1);
		}
		unk_0x08377FB2AE4C6899(&uVar0);
		unk_0x86DD54980FE55567(&uVar0);
		unk_0x83150B7E65C16AFE(0, 0, 256);
		unk_0xC62C6BBB860531B7(0, iLocal_1044, -1, 0);
		unk_0x007AE2AA9E15FA7B(uVar0);
		unk_0x00E85C3B3BD34B10(iParam0, uVar0);
		unk_0x08377FB2AE4C6899(&uVar0);
	}
}

void func_114(int iParam0)
{
	if (!unk_0xA929B2923D14E2F8(iLocal_1044, 0))
	{
		if (!unk_0xFD0FE723227D5AB6(iLocal_1044, 0))
		{
			if (!unk_0xA929B2923D14E2F8(iParam0, 0))
			{
				unk_0xC96275575DC981A9(iParam0, 3, 1);
			}
			unk_0x08377FB2AE4C6899(&uLocal_1323);
			unk_0x86DD54980FE55567(&uLocal_1323);
			unk_0x83150B7E65C16AFE(0, 0, 256);
			unk_0x7DD7196E1A0C1D43(0, iLocal_1044, 0, 16);
			unk_0x007AE2AA9E15FA7B(uLocal_1323);
			if (!unk_0xA929B2923D14E2F8(iParam0, 0))
			{
				unk_0x00E85C3B3BD34B10(iParam0, uLocal_1323);
			}
			unk_0x08377FB2AE4C6899(&uLocal_1323);
		}
		else if (!unk_0xCA41A00932714525(iParam0))
		{
			if (unk_0x1F8F07D86DA1A701(iParam0, 780511057) != 1)
			{
				unk_0x15848523A8959DBC(iParam0);
				unk_0x7DD7196E1A0C1D43(iParam0, iLocal_1044, 0, 16);
			}
		}
	}
}

Vector3 func_115()
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (unk_0x0E29C61F26D96FDB(0, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			Var0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_116(int iParam0, struct<3> Param1)
{
	if (!iLocal_1133)
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			if (unk_0x4E84D2C9B54F79BA(iLocal_1044, iParam0, Param1, 0, 1, 0))
			{
				if (unk_0xCAA82A181F15BFF5(iParam0, iLocal_1044, 160f))
				{
					if (unk_0x7F5C1711F4E1FDF7(iParam0, iLocal_1044, 17))
					{
						unk_0xE44B3F42EB747B10(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1043 = 5;
						iLocal_1133 = 1;
					}
				}
			}
			else if (!unk_0xFD0FE723227D5AB6(iParam0, 0))
			{
				if (unk_0x1F8F07D86DA1A701(iParam0, -1207174364) != 1)
				{
					unk_0xE44B3F42EB747B10(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_117(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_1056 == 0)
	{
		iLocal_1056 = func_30(70f, 0);
	}
	if (!unk_0xCA41A00932714525(*iParam0))
	{
		if (!unk_0xFD0FE723227D5AB6(*iParam0, 0))
		{
			if (!iLocal_1135)
			{
				if (*iParam0 == iLocal_1056)
				{
					unk_0x08377FB2AE4C6899(&uVar0);
					unk_0x86DD54980FE55567(&uVar0);
					unk_0x834EF3BF2E6A8D29(0, iLocal_1044, 20000, 2f, 1f, 1073741824, 0);
					unk_0x6349785089ED32B4(0, iLocal_1044, -1);
					unk_0x007AE2AA9E15FA7B(uVar0);
					unk_0x00E85C3B3BD34B10(*iParam0, uVar0);
					unk_0x08377FB2AE4C6899(&uVar0);
					iLocal_1135 = 1;
					Var1 = { unk_0x57240623C1BC6E88(*iParam0, 1) };
				}
				else if (unk_0x1F8F07D86DA1A701(*iParam0, 1227113341) != 1)
				{
					unk_0x6349785089ED32B4(*iParam0, iLocal_1044, -1);
				}
			}
			else if (*iParam0 != iLocal_1056)
			{
				if (unk_0x1F8F07D86DA1A701(*iParam0, 1227113341) != 1)
				{
					unk_0x6349785089ED32B4(*iParam0, iLocal_1044, -1);
				}
			}
		}
		unk_0x6F65279C9BC14EDB(*iParam0, 1);
		func_118();
	}
}

void func_118()
{
	int iVar0;
	
	if (!iLocal_1137)
	{
		if (!bLocal_1148)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_119())
				{
					func_6(&uLocal_1363, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1137 = 1;
				}
				else
				{
					func_27(&uLocal_1363, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1137 = 1;
				}
			}
		}
	}
}

int func_119()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
		if (!unk_0xA929B2923D14E2F8(iLocal_1311, 0))
		{
			Var3 = { unk_0x57240623C1BC6E88(iLocal_1311, 1) };
		}
		fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_120(int iParam0)
{
	int iVar0;
	
	bLocal_1134 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!unk_0xA929B2923D14E2F8(uLocal_1053[iParam0], 0))
	{
		if (unk_0x45CD66F0A131E554(iLocal_1312, 0))
		{
			if (!unk_0x2315BB1606BC3DC3(uLocal_1053[iParam0], iLocal_1312, 0))
			{
				if (unk_0x1F8F07D86DA1A701(uLocal_1053[iParam0], -1794415470) != 1)
				{
					unk_0x3AD5401AC8DD9226(uLocal_1053[iParam0], iLocal_1312, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_121()
{
	if (!unk_0xCA41A00932714525(uLocal_1053[0]) && !unk_0xCA41A00932714525(uLocal_1053[1]))
	{
		if (unk_0x2315BB1606BC3DC3(uLocal_1053[0], iLocal_1312, 0) && unk_0x2315BB1606BC3DC3(uLocal_1053[1], iLocal_1312, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_122(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!iLocal_1133)
	{
		if (unk_0x44A30EB8D9EE7035(Param0, Param3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1133 = 1;
		}
	}
}

void func_123(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_1049[iParam0];
	switch (iLocal_1032[iParam0])
	{
		case 0:
			if (!unk_0xCA41A00932714525(iVar0))
			{
				unk_0x08377FB2AE4C6899(&uLocal_1323);
				unk_0x86DD54980FE55567(&uLocal_1323);
				unk_0x26AB82CDFC655AC9(0, Local_1267[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0x3DB139C144156433(0, fLocal_1220[iParam0], 0);
				unk_0x007AE2AA9E15FA7B(uLocal_1323);
				unk_0x00E85C3B3BD34B10(iVar0, uLocal_1323);
				unk_0x08377FB2AE4C6899(&uLocal_1323);
				iLocal_1032[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0x23E9113C762466ED(iVar0))
			{
				if (!unk_0xA929B2923D14E2F8(iVar0, 0))
				{
					if (!bLocal_1168)
					{
						if (unk_0x1F8F07D86DA1A701(iVar0, -2017877118) != 1 && unk_0x1F8F07D86DA1A701(iVar0, 242628503) != 1)
						{
							if (unk_0x1C34CE8087E3897C(iVar0, Local_1267[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_131(iVar0, &(uLocal_1195[iParam0]), 1);
							}
							else
							{
								iLocal_1032[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&uLocal_1332))
			{
				func_50(&uLocal_1332);
				func_117(&iVar0);
				iLocal_1032[iParam0] = 2;
			}
			else if (func_46(&uLocal_1332) > uLocal_1226[iParam0] || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				func_117(&iVar0);
				iLocal_1032[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_86(iLocal_1044))
			{
				iLocal_1161 = 1;
				if (bLocal_1160)
				{
					iLocal_1032[iParam0] = 4;
					break;
				}
				else if (func_46(&uLocal_1332) >= 27f && iLocal_1137)
				{
					func_116(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&uLocal_1332) >= 15f)
				{
					func_129(iVar0);
				}
			}
			else
			{
				iLocal_1161 = 0;
				bLocal_1134 = true;
				if (!bLocal_1154)
				{
					iLocal_1032[iParam0] = 0;
				}
				else
				{
					iLocal_1032[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!unk_0xCA41A00932714525(iVar0))
			{
				unk_0x6F65279C9BC14EDB(iVar0, 1);
				unk_0x0E21DA99F698AF06(iVar0, 60, 1);
			}
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				if (!unk_0xCA41A00932714525(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0x4718A774D9248520(uLocal_1049[0], uLocal_1049[1], -1, 0, 2);
						if (!unk_0x2315BB1606BC3DC3(iVar0, iLocal_1311, 0))
						{
							unk_0x3AD5401AC8DD9226(iVar0, iLocal_1311, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0x4718A774D9248520(uLocal_1049[1], uLocal_1049[0], -1, 0, 2);
						if (!unk_0x2315BB1606BC3DC3(iVar0, iLocal_1311, 0))
						{
							unk_0x3AD5401AC8DD9226(iVar0, iLocal_1311, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0x45CD66F0A131E554(iLocal_1312, 0))
						{
							if (!unk_0x2315BB1606BC3DC3(iVar0, iLocal_1312, 0))
							{
								unk_0x3AD5401AC8DD9226(iVar0, iLocal_1312, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1032[iParam0] = 5;
			}
			else
			{
				iLocal_1032[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!unk_0xCA41A00932714525(iVar0))
			{
				unk_0x0E21DA99F698AF06(iVar0, 60, 1);
			}
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x1F8F07D86DA1A701(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0x4718A774D9248520(uLocal_1049[iParam0], uLocal_1049[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0x4718A774D9248520(uLocal_1049[iParam0], uLocal_1049[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				if (!func_127())
				{
					if (iLocal_1133)
					{
						if (!unk_0xCA41A00932714525(iVar0))
						{
							if (unk_0x1F8F07D86DA1A701(iVar0, 780511057) != 1)
							{
								if (func_126(uLocal_1049[0]))
								{
									unk_0xEF9294ED57E4AC3D(uLocal_1049[0]);
								}
								if (func_126(uLocal_1049[1]))
								{
									unk_0xEF9294ED57E4AC3D(uLocal_1049[1]);
								}
								unk_0x7DD7196E1A0C1D43(iVar0, iLocal_1044, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1032[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1032[iParam0] = 10;
			}
			if (bLocal_1149)
			{
				if (iLocal_1032[iParam0] != 10 && iLocal_1032[iParam0] != 11)
				{
					iLocal_1032[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1133)
			{
				if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
				{
					if (unk_0x17206B315923243C(iLocal_1311, -1, 0) == iVar0)
					{
						if (!unk_0xCA41A00932714525(iVar0))
						{
							unk_0x524A422B74847594(iLocal_1311, 1, 1, 0);
							if (func_125())
							{
								unk_0xAD1391A0485EA6BA(iVar0, iLocal_1311, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0xAD1391A0485EA6BA(iVar0, iLocal_1311, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_1032[iParam0] = 7;
				}
			}
			else
			{
				if (func_126(uLocal_1049[0]))
				{
					unk_0xEF9294ED57E4AC3D(uLocal_1049[0]);
				}
				if (func_126(uLocal_1049[1]))
				{
					unk_0xEF9294ED57E4AC3D(uLocal_1049[1]);
				}
				iLocal_1032[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1133)
			{
				if ((unk_0x45CD66F0A131E554(iLocal_1311, 0) && unk_0x17206B315923243C(iLocal_1311, -1, 0) == iVar0) && unk_0x17206B315923243C(iLocal_1311, 1, 0) == iLocal_1045)
				{
					if (!unk_0xCA41A00932714525(iVar0))
					{
						if (bLocal_1148 || (iLocal_1162 && !unk_0xA269031A4ECAE4FA(iLocal_1311)))
						{
							unk_0x15848523A8959DBC(iVar0);
							if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
							{
								if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
								{
									if (unk_0x1F8F07D86DA1A701(iVar0, -1273030092) != 1)
									{
										unk_0x398C18AE22628160(iVar0, iLocal_1311, unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0x1F8F07D86DA1A701(iVar0, -1273030092) != 1)
								{
									unk_0xA0F84EA3D7C06982(iVar0, iLocal_1311, unk_0x17B5CC8A8615737D(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0xCA41A00932714525(iVar0))
				{
					if (unk_0x1F8F07D86DA1A701(iVar0, 780511057) != 1)
					{
						unk_0x7DD7196E1A0C1D43(iVar0, iLocal_1044, 0, 16);
					}
				}
			}
			else if (bLocal_1148 || (iLocal_1162 && !unk_0xA269031A4ECAE4FA(iLocal_1311)))
			{
				if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
				{
					if (unk_0x17206B315923243C(iLocal_1311, -1, 0) == iVar0)
					{
						if (!unk_0xA929B2923D14E2F8(iVar0, 0))
						{
							if (unk_0x1F8F07D86DA1A701(iVar0, -1273030092) != 1)
							{
								unk_0x83315F81FAC58A20(iVar0, iLocal_1311, Local_1289, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1158)
			{
				unk_0x86DD54980FE55567(&uLocal_1323);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x0D322CDF37087C0E(0, func_115(), unk_0x0E29C61F26D96FDB(1000, 1500), 2048, 4);
				unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), unk_0x0E29C61F26D96FDB(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0xDF7ACB58AF1D59E0(0, unk_0x17B5CC8A8615737D(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x007AE2AA9E15FA7B(uLocal_1323);
				if (!unk_0xA929B2923D14E2F8(uLocal_1049[iParam0], 0))
				{
					unk_0x00E85C3B3BD34B10(uLocal_1049[iParam0], uLocal_1323);
				}
				unk_0x08377FB2AE4C6899(&uLocal_1323);
			}
			else
			{
				unk_0x86DD54980FE55567(&uLocal_1323);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x25EEB78469C970E2(0, func_115(), unk_0x0E29C61F26D96FDB(3000, 3500), 1, 0);
				unk_0xDF7ACB58AF1D59E0(0, unk_0x17B5CC8A8615737D(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x007AE2AA9E15FA7B(uLocal_1323);
				if (!unk_0xA929B2923D14E2F8(uLocal_1049[iParam0], 0))
				{
					unk_0x00E85C3B3BD34B10(uLocal_1049[iParam0], uLocal_1323);
				}
				unk_0x08377FB2AE4C6899(&uLocal_1323);
			}
			iLocal_1032[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0xCA41A00932714525(uLocal_1049[iParam0]))
			{
				if (unk_0x1F8F07D86DA1A701(uLocal_1049[iParam0], 1435919172) != 1)
				{
					unk_0xE44B3F42EB747B10(uLocal_1049[iParam0], iLocal_1044, iLocal_1044, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_1043 == 4 || iLocal_1043 == 5)
			{
				func_113(iVar0);
			}
			else if (iLocal_1043 != 8)
			{
				func_114(iVar0);
				iLocal_1032[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_112(iLocal_1311, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (iLocal_1030 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1233;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
			if (iLocal_1032[iParam0] != 8 && iLocal_1032[iParam0] != 9)
			{
				iLocal_1032[iParam0] = 8;
			}
		}
		else if (func_124(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_103(unk_0x57240623C1BC6E88(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1133 = 1;
			}
		}
		else if (!bLocal_1136)
		{
			if (func_101(iVar0, fVar1))
			{
				if ((iLocal_1032[iParam0] != 3 && iLocal_1032[iParam0] != 2) && !bLocal_1160)
				{
					if (!bLocal_1134)
					{
						func_99(&Local_360, 4);
						iLocal_1032[iParam0] = 3;
					}
					else if (!func_86(iLocal_1044))
					{
						iLocal_1133 = 1;
						if (!unk_0x23E9113C762466ED(iLocal_1045))
						{
							iLocal_1043 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1032[iParam0] != 10 && iLocal_1032[iParam0] != 11) && iLocal_1032[iParam0] != 7)
	{
		iLocal_1032[iParam0] = 10;
	}
	func_98(iVar0, uLocal_1120[iParam0]);
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (!iLocal_1133)
	{
		if (unk_0x23E9113C762466ED(iParam0))
		{
			if (!unk_0xCA41A00932714525(iParam0))
			{
				if (unk_0xFD0FE723227D5AB6(iParam0, 0))
				{
					iVar0 = unk_0x60604E51E30D25B8(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_105(iParam0, iVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || (unk_0x7F4AE93855973529(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1211 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &iVar1);
	uLocal_1211 = uLocal_1211;
	uLocal_1211 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x23E9113C762466ED(iVar1[iVar0]) && !unk_0xA929B2923D14E2F8(iVar1[iVar0], 0))
		{
			if (unk_0x70A9F320A34FAC28(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
			{
				iLocal_1210++;
			}
		}
		iVar0++;
	}
	if (iLocal_1210 >= 1)
	{
		iLocal_1162 = 1;
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
	{
		if (!unk_0xCA41A00932714525(iLocal_1045))
		{
			if (!iLocal_1133)
			{
				if (unk_0x2315BB1606BC3DC3(iLocal_1045, iLocal_1311, 0) && func_128())
				{
					return 1;
				}
			}
			else if (unk_0x2315BB1606BC3DC3(iLocal_1045, iLocal_1311, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xCA41A00932714525(iLocal_1046[iVar0]))
		{
			if (!unk_0xFD0FE723227D5AB6(iLocal_1046[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_129(int iParam0)
{
	switch (iLocal_1207)
	{
		case 0:
			if (!unk_0xA929B2923D14E2F8(iParam0, 0))
			{
				if (unk_0x1F8F07D86DA1A701(iParam0, 1630799643) != 1)
				{
					unk_0xC62C6BBB860531B7(iParam0, unk_0x17B5CC8A8615737D(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1363, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1137 = 1;
				iLocal_1207 = 1;
			}
			break;
		
		case 1:
			func_130(iParam0);
			break;
	}
}

void func_130(int iParam0)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (unk_0x1F8F07D86DA1A701(iParam0, -1207174364) != 1 && unk_0x1F8F07D86DA1A701(iParam0, 1630799643) != 1)
			{
				unk_0xC62C6BBB860531B7(iParam0, iLocal_1044, -1, 0);
			}
		}
		else if (unk_0x1F8F07D86DA1A701(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_1056)
			{
				unk_0xE44B3F42EB747B10(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (unk_0x1F8F07D86DA1A701(iParam0, 1630799643) != 1)
			{
				unk_0xC62C6BBB860531B7(iParam0, iLocal_1044, -1, 0);
			}
		}
	}
}

void func_131(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (bParam2)
		{
			func_132(iParam0, uParam1);
		}
	}
}

void func_132(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_133(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0xEB1EFACA68933402(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0x6B1497B2FDBC8466(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0xEB1EFACA68933402(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0x6B1497B2FDBC8466(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0xEB1EFACA68933402(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0x6B1497B2FDBC8466(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0xEB1EFACA68933402(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0x6B1497B2FDBC8466(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0x0E29C61F26D96FDB(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0x0E29C61F26D96FDB(iParam0, iParam1);
	}
	return iVar0;
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!unk_0x23E9113C762466ED(iLocal_1046[iParam0]))
	{
		return;
	}
	switch (iLocal_1040[iParam0])
	{
		case 0:
			if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
			{
				if (!unk_0xFD0FE723227D5AB6(iLocal_1045, 0))
				{
					if (!unk_0xCA41A00932714525(iLocal_1046[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0x8C17F851E89377D3(iLocal_1046[iParam0], iLocal_1045, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0x45CD66F0A131E554(iLocal_1312, 0))
							{
								unk_0x86DD54980FE55567(&uVar2);
								unk_0x26AB82CDFC655AC9(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0x3AD5401AC8DD9226(0, iLocal_1312, 30000, 2, 1f, 1, 0);
								unk_0x007AE2AA9E15FA7B(uVar2);
								unk_0x00E85C3B3BD34B10(iLocal_1046[iParam0], uVar2);
								unk_0x08377FB2AE4C6899(&uVar2);
							}
						}
						iLocal_1040[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1311;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1312;
				iVar1 = 2;
			}
			if (!unk_0xA929B2923D14E2F8(iLocal_1046[iParam0], 0))
			{
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_1046[iParam0], 0))
					{
						if (!unk_0x2315BB1606BC3DC3(iLocal_1046[iParam0], iVar0, 0))
						{
							if (unk_0xFD0FE723227D5AB6(iLocal_1045, 0))
							{
								if (unk_0x1F8F07D86DA1A701(iLocal_1046[iParam0], -1794415470) != 1)
								{
									unk_0x3AD5401AC8DD9226(iLocal_1046[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1040[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1311;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1312;
			}
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_1046[iParam0], 0))
				{
					if (unk_0x2315BB1606BC3DC3(iLocal_1046[iParam0], iVar0, 0) && unk_0x45CD66F0A131E554(iLocal_1311, 0))
					{
						if (iLocal_1133)
						{
							if (!bLocal_1163)
							{
								if (unk_0x1F8F07D86DA1A701(iLocal_1046[iParam0], 780511057) != 1)
								{
									if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
									{
										if (unk_0x13B7ACE69D27E3E4(iVar0) < 5f)
										{
											iLocal_1040[iParam0] = 5;
										}
									}
									unk_0x7DD7196E1A0C1D43(iLocal_1046[iParam0], unk_0x17B5CC8A8615737D(), 0, 16);
								}
							}
							else if (unk_0x1F8F07D86DA1A701(iLocal_1046[iParam0], 780511057) != 1)
							{
								unk_0x7DD7196E1A0C1D43(iLocal_1046[iParam0], unk_0x17B5CC8A8615737D(), 0, 16);
							}
						}
					}
					else if (!iLocal_1157)
					{
						iLocal_1040[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xCA41A00932714525(iLocal_1046[iParam0]))
			{
				if (unk_0x0B1B005A46EF4C32(iLocal_1046[iParam0]))
				{
					unk_0xD4D420EA885FC154(iLocal_1046[iParam0]);
				}
			}
			if (bLocal_1158)
			{
				unk_0x86DD54980FE55567(&uLocal_1323);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x0D322CDF37087C0E(0, func_115(), unk_0x0E29C61F26D96FDB(2000, 2500), 2048, 4);
				unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), unk_0x0E29C61F26D96FDB(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0xDF7ACB58AF1D59E0(0, unk_0x17B5CC8A8615737D(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x007AE2AA9E15FA7B(uLocal_1323);
				unk_0x00E85C3B3BD34B10(iLocal_1046[iParam0], uLocal_1323);
				unk_0x08377FB2AE4C6899(&uLocal_1323);
			}
			else if (!unk_0xCA41A00932714525(iLocal_1046[iParam0]))
			{
				unk_0x6DE4D679A0565F8A(iLocal_1046[iParam0], Local_1304, 15f, 0, 0);
				unk_0x2937901439E611F5(iLocal_1046[iParam0], 1);
				unk_0xC96275575DC981A9(iLocal_1046[iParam0], 0, 1);
				unk_0x7B0D34D6C9709C7A(iLocal_1046[iParam0], 2f);
				if (!iLocal_1130 && !unk_0xFD0FE723227D5AB6(iLocal_1046[iParam0], 0))
				{
					unk_0x86DD54980FE55567(&uLocal_1323);
					if (unk_0xCA41A00932714525(iLocal_1045))
					{
						unk_0xEB1EFACA68933402(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0x25EEB78469C970E2(0, func_115(), 3000, 0, 1);
						unk_0xC62C6BBB860531B7(0, unk_0x17B5CC8A8615737D(), -1, 0);
					}
					else
					{
						unk_0xEB1EFACA68933402(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0x8C17F851E89377D3(0, iLocal_1045, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0x007AE2AA9E15FA7B(uLocal_1323);
					iLocal_1130 = 1;
				}
				else
				{
					if (unk_0x23E9113C762466ED(iLocal_1311) && unk_0x45CD66F0A131E554(iLocal_1311, 0))
					{
						Var4 = { unk_0xE9833D7A09D570F1(iLocal_1311, unk_0x36ACE2C7E56D90D6(iLocal_1311, "wheel_lr")) };
						Var7 = { unk_0x57240623C1BC6E88(iLocal_1311, 1) };
						Var7 = { Var4 - Var7 };
						unk_0xC392D787BDBE6F53(iLocal_1046[iParam0], iLocal_1311, Var7, 1.5f, 0);
					}
					unk_0x86DD54980FE55567(&uLocal_1323);
					unk_0x83150B7E65C16AFE(0, 0, 0);
					if (unk_0xCA41A00932714525(iLocal_1045) && !func_44(func_135(), Var4, 0))
					{
						unk_0xE8CF93C61DC938CD(0, Var4, func_115(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0xDC4F16C663A04D64(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0x25EEB78469C970E2(0, func_115(), 1500, 1, 0);
						if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
						{
							unk_0x8C17F851E89377D3(0, iLocal_1045, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0x007AE2AA9E15FA7B(uLocal_1323);
				}
				if (!unk_0xA929B2923D14E2F8(iLocal_1046[iParam0], 0))
				{
					unk_0x00E85C3B3BD34B10(iLocal_1046[iParam0], uLocal_1323);
				}
				unk_0x08377FB2AE4C6899(&uLocal_1323);
			}
			iLocal_1040[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0xA929B2923D14E2F8(iLocal_1046[iParam0], 0))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0x8E978F99E8F731CB(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						unk_0x64E8BCBA7FB39814(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						unk_0x64E8BCBA7FB39814(iLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1311;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1312;
			}
			if (!unk_0xCA41A00932714525(iLocal_1045))
			{
				if (!unk_0xCA41A00932714525(iLocal_1046[iParam0]))
				{
					if (unk_0xFD0FE723227D5AB6(iLocal_1045, 0))
					{
						unk_0x7DD7196E1A0C1D43(iLocal_1046[iParam0], iLocal_1044, 0, 16);
					}
					else
					{
						unk_0xE44B3F42EB747B10(iLocal_1046[iParam0], iLocal_1045, unk_0x17B5CC8A8615737D(), 3f, 1, 0.005f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1040[iParam0] = 6;
			}
			else if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (unk_0x13B7ACE69D27E3E4(iVar0) < 5f)
				{
					func_114(iLocal_1046[iParam0]);
					iLocal_1040[iParam0] = 6;
				}
				else if (unk_0x1F8F07D86DA1A701(iLocal_1046[iParam0], 780511057) != 1)
				{
					unk_0x7DD7196E1A0C1D43(iLocal_1046[iParam0], iLocal_1044, 0, 16);
				}
			}
			else
			{
				func_114(iLocal_1046[iParam0]);
				iLocal_1040[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1046[iParam0]);
			func_87(iLocal_1046[iParam0]);
			break;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
			if (iLocal_1040[iParam0] != 3 && iLocal_1040[iParam0] != 4)
			{
				iLocal_1040[iParam0] = 3;
			}
		}
		else if (func_124(iLocal_1046[iParam0]))
		{
			iLocal_1133 = 1;
		}
	}
	else if (iLocal_1040[iParam0] < 5)
	{
		if (!unk_0xCA41A00932714525(iLocal_1046[iParam0]))
		{
			if (unk_0x0B1B005A46EF4C32(iLocal_1046[iParam0]))
			{
				unk_0xD4D420EA885FC154(iLocal_1046[iParam0]);
			}
			unk_0x489EC42A4411CC78(iLocal_1046[iParam0]);
			unk_0x2937901439E611F5(iLocal_1046[iParam0], 2);
			unk_0xC96275575DC981A9(iLocal_1046[iParam0], 13, 1);
		}
		iLocal_1040[iParam0] = 5;
	}
}

Vector3 func_135()
{
	struct<3> Var0;
	
	return Var0;
}

int func_136(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x592069F95C314814();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0x708B478711FA7649(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x53D9FD8A3418C8E9(iParam0, 1);
			}
			else
			{
				unk_0x20DA9B5EBDD69183(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E0E4A8CBE4A8769(iParam0, iParam2);
			unk_0xC49F45795B7AFEEA(iParam0, fParam6);
			if (unk_0xA3794949321E107C(*uParam1))
			{
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x8F033B85B9F09390(iParam0, iParam9);
		}
		unk_0xB9B7F383FB2453E6(iParam0, iParam4);
		unk_0xB04373FE92ECD69C(iParam0, iParam5);
		*uParam1 = unk_0x4DFA608A26DB4230(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xCC930AE12D020496(*uParam1, iParam8);
				}
				unk_0x457AECF7F7E33610("STRING");
				if (bParam10)
				{
					unk_0xBAB00B98D1E61BEE(sParam7);
				}
				else
				{
					unk_0x34D84D73B5DF8E80(sParam7);
				}
				unk_0xB58BBC88882D90A6(*uParam1);
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!unk_0x48B8265059381CD0(uParam1->f_6, 2))
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!unk_0x9C88EB7B70229335(sParam7))
				{
					unk_0x457AECF7F7E33610("STRING");
					if (bParam10)
					{
						unk_0xBAB00B98D1E61BEE(sParam7);
					}
					else
					{
						unk_0x34D84D73B5DF8E80(sParam7);
					}
					unk_0xB58BBC88882D90A6(*uParam1);
				}
				unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			uParam1->f_1 = unk_0x3329BF35D4BD3992(iParam0);
			if (!unk_0x48B8265059381CD0(uParam1->f_6, 3))
			{
				if (unk_0xA3794949321E107C(uParam1->f_1))
				{
					unk_0x84DAB725836026C6(uParam1->f_1, 7);
					unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA3794949321E107C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x21E7933CCC7B3724(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iLocal_1045))
	{
		Local_1304 = { unk_0x57240623C1BC6E88(iLocal_1045, 0) };
	}
	switch (iLocal_1039)
	{
		case 0:
			if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
			{
				if (unk_0x45CD66F0A131E554(iLocal_1311, 0) && !unk_0xA929B2923D14E2F8(uLocal_1049[0], 0))
				{
					if (!unk_0x2315BB1606BC3DC3(iLocal_1045, iLocal_1311, 0))
					{
						if (unk_0x1F8F07D86DA1A701(iLocal_1045, -1794415470) != 1)
						{
							if (!iLocal_1133 && !iLocal_1157)
							{
								unk_0x3AD5401AC8DD9226(iLocal_1045, iLocal_1311, 30000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0x3AD5401AC8DD9226(iLocal_1045, iLocal_1311, 30000, 1, 2f, 1, 0);
							}
							if (!func_52(&uLocal_1341))
							{
								func_49(&uLocal_1341);
							}
							else
							{
								func_50(&uLocal_1341);
							}
						}
						if (!iLocal_1159)
						{
							if (func_52(&uLocal_1341))
							{
								if (func_46(&uLocal_1341) > 3.5f)
								{
									if (!unk_0xCA41A00932714525(iLocal_1045))
									{
										func_29(&uLocal_1363, 4, iLocal_1045, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1159 = 1;
										}
									}
								}
							}
						}
						if (func_140(iLocal_1045))
						{
							func_3();
							iLocal_1039 = 4;
						}
					}
					else
					{
						bLocal_1136 = true;
						iLocal_1039 = 1;
					}
				}
				else
				{
					iLocal_1039 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1159)
			{
				if (!unk_0xCA41A00932714525(iLocal_1045))
				{
					func_29(&uLocal_1363, 4, iLocal_1045, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1159 = 1;
					}
				}
			}
			if (!iLocal_1178)
			{
				if (func_139())
				{
					if (func_24(iLocal_1045, unk_0x17B5CC8A8615737D(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_138())
							{
								iLocal_1178 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
			{
				if (unk_0x2315BB1606BC3DC3(iLocal_1045, iLocal_1311, 0))
				{
					if (unk_0x1F8F07D86DA1A701(iLocal_1045, -828834893) != 1)
					{
						unk_0x83150B7E65C16AFE(iLocal_1045, 0, 256);
					}
				}
				else if (!bLocal_1163)
				{
					unk_0x7B0D34D6C9709C7A(iLocal_1045, 2f);
					unk_0x08377FB2AE4C6899(&uVar0);
					unk_0x86DD54980FE55567(&uVar0);
					unk_0xEB1EFACA68933402(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xCA58071CE9CCE891(0, iLocal_1044, 200f, -1, 0, 0);
					unk_0x007AE2AA9E15FA7B(uVar0);
					if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
					{
						unk_0x00E85C3B3BD34B10(iLocal_1045, uVar0);
					}
					unk_0x08377FB2AE4C6899(&uVar0);
					bLocal_1163 = true;
				}
				else if (unk_0x1F8F07D86DA1A701(iLocal_1045, 1435919172) != 1)
				{
					unk_0xCA58071CE9CCE891(iLocal_1045, iLocal_1044, 200f, -1, 0, 0);
				}
				if (!iLocal_1178)
				{
					if (!func_22() && !unk_0x75342B3CD0FB5275())
					{
						func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1178 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1133)
	{
		if (iLocal_1157)
		{
		}
		else if (func_124(iLocal_1045) || iLocal_1187)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_103(unk_0x57240623C1BC6E88(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1133 = 1;
			}
		}
	}
}

int func_138()
{
	switch (iLocal_1213)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&uLocal_1341);
				iLocal_1213++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&uLocal_1341) > 7f)
			{
				func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&uLocal_1341);
				iLocal_1213++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&uLocal_1341) > 8f)
			{
				func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_139()
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
	{
		iVar0 = unk_0x17206B315923243C(iLocal_1311, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0xCA41A00932714525(iVar0)))
		{
			iVar0 = unk_0x17206B315923243C(iLocal_1311, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0xCA41A00932714525(iVar0)))
			{
				iVar0 = unk_0x17206B315923243C(iLocal_1311, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0xCA41A00932714525(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	var uVar0;
	
	if ((iLocal_1133 || iLocal_1157) || bLocal_1158)
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			if (func_22())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!unk_0xFD0FE723227D5AB6(iParam0, 0))
			{
				if (!bLocal_1163)
				{
					unk_0x08377FB2AE4C6899(&uVar0);
					unk_0x86DD54980FE55567(&uVar0);
					unk_0xEB1EFACA68933402(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xCA58071CE9CCE891(0, iLocal_1044, 200f, -1, 0, 0);
					unk_0x007AE2AA9E15FA7B(uVar0);
					if (!unk_0xA929B2923D14E2F8(iLocal_1045, 0))
					{
						unk_0x00E85C3B3BD34B10(iLocal_1045, uVar0);
					}
					unk_0x08377FB2AE4C6899(&uVar0);
					bLocal_1163 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_141()
{
	if (!iLocal_1164)
	{
		if (iLocal_1030 > 15)
		{
			unk_0x5BE53482EFD49141("ASS1_ALERT");
			iLocal_1164 = 1;
		}
	}
	if (!iLocal_1165)
	{
		if (iLocal_1133 && !func_22())
		{
			func_418();
			iLocal_1165 = 1;
			if (!iLocal_1164)
			{
				unk_0x5BE53482EFD49141("ASS1_ALERT");
				iLocal_1164 = 1;
			}
		}
	}
	func_417();
	switch (iLocal_1030)
	{
		case 3:
			if (func_482())
			{
				iLocal_1030 = 4;
				break;
			}
			func_416();
			func_414();
			break;
		
		case 4:
			if (func_482())
			{
				if (func_481())
				{
					iLocal_1152 = 1;
				}
				bLocal_1141 = true;
			}
			func_413();
			func_412();
			func_411();
			func_410(1);
			func_409();
			func_490(&Local_360, 2);
			iLocal_1030 = 5;
			break;
		
		case 5:
			if (func_408())
			{
				iLocal_1030 = 6;
			}
			break;
		
		case 6:
			func_407();
			func_406();
			if (bLocal_1141)
			{
				if (Global_101700.f_18922.f_5 != 0f)
				{
					func_51(&uLocal_1335, Global_101700.f_18922.f_5);
				}
				iLocal_1208 = func_476();
				if (Global_86001)
				{
					if (iLocal_1208 <= 2)
					{
						iLocal_1208++;
					}
				}
				if (iLocal_1208 == 0)
				{
					func_405();
				}
				else if (iLocal_1208 == 1)
				{
					func_404();
				}
				else if (iLocal_1208 == 2)
				{
					func_400();
				}
			}
			else
			{
				if (!func_52(&uLocal_1335))
				{
					func_49(&uLocal_1335);
					Global_101700.f_18922.f_5 = 0f;
				}
				iLocal_1030 = 7;
			}
			break;
		
		case 7:
			func_394();
			func_379();
			break;
		
		case 8:
			func_345();
			break;
		
		case 9:
			func_394();
			func_344();
			func_263();
			break;
		
		case 10:
			func_344();
			func_259();
			break;
		
		case 11:
			func_245();
			func_244();
			break;
		
		case 12:
			func_243();
			func_244();
			break;
		
		case 13:
			func_239();
			func_244();
			break;
		
		case 15:
			func_237();
			break;
		
		case 16:
			func_234();
			break;
		
		case 17:
			func_228();
			break;
		
		case 18:
			func_142();
			break;
	}
}

void func_142()
{
	unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
	func_143();
}

void func_143()
{
	func_227();
	switch (iLocal_1214)
	{
		case 0:
			if (!iLocal_377)
			{
				if (iLocal_1031 == 1)
				{
					bLocal_375 = true;
					func_226();
				}
				Global_101700.f_18922.f_5 = func_46(&uLocal_1335);
				fLocal_372 = Global_101700.f_18922.f_5;
				func_219();
				iLocal_377 = 1;
				iLocal_1214 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1186)
			{
				unk_0x3FB911E0030D4BB5("FRANKLIN_BIG_01");
				iLocal_1186 = 1;
			}
			if (func_215(&uLocal_388, 1, 0) && unk_0x83B6D53A5AE06120())
			{
				func_214(&uLocal_1540, 0, 0, 0, 1);
				func_213(&uLocal_1540, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_213(&uLocal_1540, "ES_XPAND", 2, 216, 1, 1, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1214 = 2;
			}
			break;
		
		case 2:
			if (func_189(&uLocal_388, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1184 = true;
			}
			if (!bLocal_1184)
			{
				func_181(&uLocal_1540, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0x4B972043966C2EB8(2, 215) || unk_0x698C9A4C14BF3957(2, 200))
			{
				if (!bLocal_1184)
				{
					bLocal_1184 = true;
					func_180(&uLocal_388);
				}
			}
			if (bLocal_1184)
			{
				if (func_189(&uLocal_388, 0, 1065353216, 0, 0, 0))
				{
					func_178(&uLocal_388);
					Global_101700.f_18922++;
					func_177();
					func_148(Local_57);
					func_146(0, 0);
					func_144();
					func_483();
				}
			}
			break;
	}
}

void func_144()
{
	func_145();
}

int func_145()
{
	if (func_40(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

void func_146(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55824)
	{
		Global_55824 = iParam1;
	}
	if (bParam0)
	{
		if ((func_40(0) && Global_69948.f_1 == 1) && func_147(Global_69948))
		{
		}
		else
		{
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_40(0))
	{
		iVar0 = func_39();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101700.f_8044)
			{
			}
			return;
		}
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 4);
		unk_0xEB79FECD9022AAF0(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = unk_0x94E3E074F38DF86C();
	}
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_148(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	float fVar0;
	
	fVar0 = (1f + func_176());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_111(Global_101700.f_18922.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_149(func_13(), 96, unk_0xF2DB717A73826179(fVar0), 0, 0);
}

void func_149(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_150(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x7FE4F330D3D74809(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x731753D8494ABECD(iVar1, iVar0, 1);
	}
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_175();
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
					func_174(99, 1);
					func_173(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_173(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_173(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_158(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_157(5))
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
							func_173(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_157(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_173(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_173(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_173(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_173(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_173(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBDF22BDA553CBEE4())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_157(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_173(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_173(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_173(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_156(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_174(95, iParam3);
					break;
				
				case 1:
					func_174(97, iParam3);
					break;
				
				case 2:
					func_174(96, iParam3);
					break;
			}
			func_174(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_153(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_153(iVar1);
	}
	iVar5 = (Global_52996[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52996[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52996[iVar2] = 2147483647;
				}
				else
				{
					Global_52996[iVar2] = (Global_52996[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_173(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_173(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_173(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52996[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52996[iVar2];
			Global_52996[iVar2] = (Global_52996[iVar2] - iParam3);
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
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_152(iParam0);
	if (Global_35781 == 15)
	{
		func_151(0);
	}
	return 1;
}

void func_151(bool bParam0)
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
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!bParam0)
		{
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52996[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x731753D8494ABECD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x731753D8494ABECD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x731753D8494ABECD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_153(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0) || unk_0x48B8265059381CD0(Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		unk_0x21E7933CCC7B3724(&(Global_2097152[func_155() /*10758*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xBD18006F0815A298("COUP_RED");
		unk_0x34D84D73B5DF8E80(func_154(iParam0));
		unk_0x6132B0FB7289E50A(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_154(int iParam0)
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
		
		default:
	}
	return "";
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_156(int iParam0)
{
	func_174(93, iParam0);
	func_174(29, iParam0);
	func_174(30, iParam0);
}

bool func_157(int iParam0)
{
	if (!unk_0x63C468D583002D23())
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0);
	}
	return unk_0x48B8265059381CD0(Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0);
}

int func_158(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF0EE2EF8EA972239(27))
	{
		return 0;
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x7FE4F330D3D74809(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x731753D8494ABECD(joaat("num_cash_spent"), iVar1, 1);
		func_172(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_159(27, 1);
	return 1;
}

int func_159(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_160(iParam0, iParam1);
}

int func_160(int iParam0, int iParam1)
{
	if (func_18(14) && !func_171(iParam0))
	{
		return 0;
	}
	if (unk_0xF0EE2EF8EA972239(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702)
	{
		return 0;
	}
	if (func_170(&Global_2595550))
	{
		if (func_168(&Global_2595550, iParam0))
		{
			return 0;
		}
		if (func_161(&Global_2595550, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xDDAC6D364DFB4FD7(iParam0))
		{
			return 0;
		}
		if (unk_0xF0EE2EF8EA972239(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_161(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_171(iParam1))
	{
		return 0;
	}
	if (func_168(uParam0, iParam1))
	{
		return 0;
	}
	if (func_167(uParam0) < 0f)
	{
		func_166(uParam0, 0);
	}
	func_164(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_162(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_162(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_171(iParam1))
	{
		return 0;
	}
	if (func_168(uParam0, iParam1))
	{
		return 0;
	}
	if (func_167(uParam0) < 0f)
	{
		func_166(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_163(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_163(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_164(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_165(uParam0, iVar0);
		iVar0++;
	}
	func_166(uParam0, (Global_2595549 - 0.5f));
}

void func_165(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_166(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_167(var uParam0)
{
	return uParam0->f_72;
}

bool func_168(var uParam0, int iParam1)
{
	return func_169(uParam0, iParam1) != -1;
}

int func_169(var uParam0, int iParam1)
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

bool func_170(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_171(int iParam0)
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

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x7FE4F330D3D74809(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(iParam0, iVar0, 1);
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_175()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		unk_0x7FE4F330D3D74809(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52996[0] == iVar0)
		{
			Global_52996[0] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52996[1] == iVar0)
		{
			Global_52996[1] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52996[2] == iVar0)
		{
			Global_52996[2] = iVar0;
		}
	}
}

float func_176()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_111(Global_101700.f_18922.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_101700.f_18922.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_101700.f_18922.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_101700.f_18922.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_101700.f_18922.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_101700.f_18922.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_101700.f_18922.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_111(Global_101700.f_18922.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_111(Global_101700.f_18922.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_177()
{
	func_490(&(Global_101700.f_18922.f_1), 2048);
}

void func_178(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x33CBABDFE7B17924(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xEF4E5E47AF0D4480())
		{
			unk_0xEAC9A8A194DF8F91(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x14ED5B5B8289F2FC(false);
			unk_0x44983883E630A945();
		}
		unk_0x33CBABDFE7B17924(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x97225621CA125FF2(0);
		uParam0->f_564 = 0;
	}
	if (!Global_69970)
	{
		if (!unk_0xCEB2A4290BD633BE(unk_0x592069F95C314814()))
		{
			if (!Global_69971)
			{
				if (unk_0x25BD4C26D84038CD() && !func_40(0))
				{
					unk_0xC7845898207D067F(800);
				}
			}
		}
	}
	func_179(0);
}

void func_179(int iParam0)
{
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

void func_180(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_181(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x46EEE08565CE19CA() || unk_0x5C0856D86B18EE57()) || unk_0x25BD4C26D84038CD()) || unk_0x9E0EF228488611AD())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_188(uParam0))
	{
		return;
	}
	unk_0x406D7A3B92830257();
	unk_0x4ED9ECF3735CB826(iParam2);
	if (!func_187(uParam0->f_1, 256) || (func_187(uParam0->f_1, 8192) && unk_0x987367D2EDB45658(2)))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_CLEAR_SPACE");
		unk_0x584CF9CAE83942E5(fParam1);
		unk_0x44983883E630A945();
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_MAX_WIDTH");
		unk_0x584CF9CAE83942E5(fParam5);
		unk_0x44983883E630A945();
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x44983883E630A945();
		if (unk_0xEF4E5E47AF0D4480())
		{
			unk_0xEAC9A8A194DF8F91(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x14ED5B5B8289F2FC(func_187(uParam0->f_1, 4096));
			unk_0x44983883E630A945();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xF23B2033129FFCF0(2);
					break;
				
				case 2:
					bVar4 = !unk_0xF23B2033129FFCF0(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEAC9A8A194DF8F91(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xDF18CF55301CEB8B(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x48B8265059381CD0(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x48B8265059381CD0(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0x38DDA814F2E19659(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x9AF1671E53EE8CE7(iVar0, iVar1, bVar2);
						}
						if (!unk_0x9C88EB7B70229335(uVar3))
						{
							func_186(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x9C88EB7B70229335(uParam0->f_2[iVar6 /*15*/]))
					{
						func_185(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xEF4E5E47AF0D4480())
					{
						if (func_187(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x14ED5B5B8289F2FC(true);
								unk_0xDF18CF55301CEB8B(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x14ED5B5B8289F2FC(false);
								unk_0xDF18CF55301CEB8B(-1);
							}
						}
					}
					unk_0x44983883E630A945();
				}
			}
			iVar6++;
		}
		fVar8 = func_184(bParam4, func_184(func_187(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEAC9A8A194DF8F91(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x584CF9CAE83942E5(fVar8);
		unk_0x44983883E630A945();
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x584CF9CAE83942E5(0f);
		unk_0x584CF9CAE83942E5(0f);
		unk_0x584CF9CAE83942E5(0f);
		unk_0x584CF9CAE83942E5(80f);
		unk_0x44983883E630A945();
		func_183(&(uParam0->f_1), 256);
		func_182(&(uParam0->f_1), 128);
	}
	unk_0x90101FEE397F4A7E(*uParam0, 255, 255, 255, 0, 0);
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_184(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_185(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_186(var uParam0)
{
	unk_0x0A7B7FF9E4F6CAA7(uParam0);
}

bool func_187(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_188(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xFF84A94166FBB351(*uParam0))
		{
			func_183(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_189(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x0385EDD8AAEC86F4() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x0385EDD8AAEC86F4();
	if (!unk_0x63C468D583002D23())
	{
		if (unk_0xE34CF180A5429DEA(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x8ABAB1F335EBFAC2(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x25BD4C26D84038CD() || unk_0x46EEE08565CE19CA())
		{
			unk_0x97225621CA125FF2(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0x63C468D583002D23())
		{
			if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC23C2ED7CCA1618F(unk_0xBE369BE1BC57A796());
			}
		}
	}
	unk_0xE57F94EA937AAD99(7);
	unk_0xE57F94EA937AAD99(8);
	unk_0xE57F94EA937AAD99(9);
	unk_0xE57F94EA937AAD99(6);
	unk_0xE57F94EA937AAD99(19);
	unk_0xD1BB2AD73E7FC3A7(2, 19, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 37, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 21, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 28, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 29, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 171, 1);
	func_210();
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (unk_0x593C7E6CB36E2042() || (unk_0x25BD4C26D84038CD() && !unk_0x5C0856D86B18EE57()))
		{
			unk_0xB05075754D5DD4A3();
		}
	}
	Global_36331 = 1;
	if (!uParam0->f_563)
	{
		switch (func_16(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814())))
		{
			case 1:
				unk_0x9AF1ABF0E97411BF("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9AF1ABF0E97411BF("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9AF1ABF0E97411BF("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_209(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_209(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_209((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_209(30f) - func_209(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_179(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_192(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_191(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0xEAC9A8A194DF8F91(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x44983883E630A945();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_191(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xEAC9A8A194DF8F91(uParam0->f_1, "TRANSITION_OUT");
			unk_0x44983883E630A945();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_191(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x987367D2EDB45658(2))
			{
				if (unk_0xFF84A94166FBB351(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_190(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x4B972043966C2EB8(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xFF84A94166FBB351(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xEAC9A8A194DF8F91(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x44983883E630A945();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xEAC9A8A194DF8F91(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x44983883E630A945();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_190(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0xEAC9A8A194DF8F91(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x44983883E630A945();
				}
				uParam0->f_559 = func_191((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_191((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_191((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_191((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x4B972043966C2EB8(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_179(0);
			}
			return !bVar0;
		}
	}
	func_179(0);
	return 1;
}

void func_190(var uParam0, bool bParam1)
{
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "CLEAR_ALL");
	unk_0x44983883E630A945();
	if (unk_0xEF4E5E47AF0D4480())
	{
		unk_0xEAC9A8A194DF8F91(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x14ED5B5B8289F2FC(true);
		unk_0x44983883E630A945();
	}
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(0);
	func_186(unk_0x38DDA814F2E19659(2, 215, true));
	func_185("ES_HELP");
	if (unk_0xEF4E5E47AF0D4480())
	{
		unk_0x14ED5B5B8289F2FC(true);
		unk_0xDF18CF55301CEB8B(215);
	}
	unk_0x44983883E630A945();
	if (bParam1)
	{
		unk_0xEAC9A8A194DF8F91(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xDF18CF55301CEB8B(1);
		func_186(unk_0x38DDA814F2E19659(2, 216, true));
		func_185("ES_XPAND");
		if (unk_0xEF4E5E47AF0D4480())
		{
			unk_0x14ED5B5B8289F2FC(true);
			unk_0xDF18CF55301CEB8B(216);
		}
		unk_0x44983883E630A945();
	}
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x44983883E630A945();
}

float func_191(float fParam0, float fParam1, float fParam2)
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

void func_192(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_208() * 0.25f);
	if (unk_0xFF84A94166FBB351(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEAC9A8A194DF8F91(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_185(&(uParam0->f_5));
				func_185(&(uParam0->f_13));
				if (unk_0x63C468D583002D23())
				{
					unk_0xDF18CF55301CEB8B(150);
				}
				else
				{
					unk_0xDF18CF55301CEB8B(100);
				}
				unk_0x14ED5B5B8289F2FC(true);
				unk_0xDF18CF55301CEB8B(uParam0->f_56);
				unk_0x14ED5B5B8289F2FC(iParam2);
				unk_0xDF18CF55301CEB8B(69);
				unk_0x44983883E630A945();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xEAC9A8A194DF8F91(uParam0->f_1, "TRANSITION_UP");
				unk_0x584CF9CAE83942E5(0.15f);
				unk_0x14ED5B5B8289F2FC(true);
				unk_0x44983883E630A945();
				uParam0->f_3 = 1;
			}
		}
		func_207();
		unk_0x90101FEE397F4A7E(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_209((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_208());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_206(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (unk_0x73E1DAE2E39E5E52(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_206(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_208()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (uParam0->f_556 == 3)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x28EAA5C7C54BD253(2, 215);
	unk_0x28EAA5C7C54BD253(2, 216);
	unk_0x28EAA5C7C54BD253(2, 200);
	unk_0xD1BB2AD73E7FC3A7(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_81((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x25BD4C26D84038CD())
			{
				unk_0x406D7A3B92830257();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xE57F94EA937AAD99(7);
				unk_0xE57F94EA937AAD99(8);
				unk_0xE57F94EA937AAD99(9);
				unk_0xE57F94EA937AAD99(6);
				unk_0x90101FEE397F4A7E(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
				unk_0xD1BB2AD73E7FC3A7(0, 141, 1);
				unk_0xD1BB2AD73E7FC3A7(0, 142, 1);
				unk_0xD1BB2AD73E7FC3A7(2, 188, 1);
				if (unk_0x698C9A4C14BF3957(2, 188))
				{
					unk_0x4988C48537D1AE4F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x4988C48537D1AE4F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xD1BB2AD73E7FC3A7(2, 187, 1);
				if (unk_0x698C9A4C14BF3957(2, 187))
				{
					unk_0x4988C48537D1AE4F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x4988C48537D1AE4F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xD1BB2AD73E7FC3A7(2, 202, 1);
				if (unk_0x698C9A4C14BF3957(2, 202))
				{
					unk_0x4988C48537D1AE4F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x4988C48537D1AE4F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xE57F94EA937AAD99(7);
				unk_0xE57F94EA937AAD99(8);
				unk_0xE57F94EA937AAD99(9);
				unk_0xE57F94EA937AAD99(6);
				unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
				unk_0xD1BB2AD73E7FC3A7(0, 141, 1);
				unk_0xD1BB2AD73E7FC3A7(0, 142, 1);
				if (unk_0x4B972043966C2EB8(2, 215) || unk_0x698C9A4C14BF3957(2, 200))
				{
					unk_0x4988C48537D1AE4F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x4988C48537D1AE4F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xE3B46F8779F1AB2E(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0x95F5FAE83A0364F7(uVar13, uVar14, uVar15, iVar0);
	unk_0x71D93F31C9937FC7(fVar9, fVar10);
	unk_0xE32F769454EED7A6(0);
	unk_0xF52EFF0C6EF215CB(1f, 0.4f);
	fVar1 = (fVar1 - func_209(6f));
	fVar1 = (fVar1 + (func_209(30f) - func_209((2f * 2f))));
	fVar11 = (fVar2 - func_209((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_191((fVar11 / (0.6f * func_209(25f))), 0f, 1f);
		func_207();
		unk_0x2F8697C8670CAD58(0.5f, (fVar1 - (func_209((2f - 0.5f)) - 0.001388889f)), fVar6, func_205(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_209((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_209((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_208())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_191((fVar11 / (0.8f * func_209(25f))), 0f, 1f);
			func_202(uParam0, iVar17, (fVar1 + func_209(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_209(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_209((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_208())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_209(2f));
			fVar12 = func_191((fVar11 / (0.6f * func_209(25f))), 0f, 1f);
			func_207();
			unk_0x2F8697C8670CAD58(0.5f, (fVar1 + func_209((2f * 0.5f))), fVar6, func_205(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_209((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_208())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_191((fVar11 / (0.8f * func_209(25f))), 0f, 1f);
			unk_0x95F5FAE83A0364F7(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_195(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB8EB22F9350F13DC() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_208()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_208()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_208()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_208()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			unk_0x71D93F31C9937FC7(fVar20, fVar21);
			unk_0xE32F769454EED7A6(1);
			unk_0xF52EFF0C6EF215CB(1f, 0.4f);
			func_194(&(uParam0->f_550), fVar20, (fVar1 + func_209((2f * 2f))), 0, 0, 0);
			unk_0x71D93F31C9937FC7(fVar20, fVar21);
			unk_0xE32F769454EED7A6(2);
			unk_0xF52EFF0C6EF215CB(1f, 0.4f);
			unk_0xD9DDC2582B7C61C4(0);
			func_207();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x71D93F31C9937FC7(fVar20, fVar22);
			unk_0x95F5FAE83A0364F7(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x169EAB5A8FBE845B("PERCENTAGE");
					unk_0x69967F83C1E636E2(uParam0->f_554);
					unk_0x30122BDF124C9221(fVar20, (fVar1 + func_209((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x169EAB5A8FBE845B("FO_TWO_NUM");
					unk_0x69967F83C1E636E2(uParam0->f_554);
					unk_0x69967F83C1E636E2(uParam0->f_555);
					unk_0x30122BDF124C9221(fVar20, (fVar1 + func_209((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x169EAB5A8FBE845B("MTPHPER_XPNO");
					unk_0x69967F83C1E636E2(uParam0->f_554);
					unk_0x30122BDF124C9221(fVar20, (fVar1 + func_209((2f * 2f))), 0);
					break;
				
				case 3:
					unk_0x169EAB5A8FBE845B("ESDOLLA");
					unk_0x1C4A0E5E77C7F187(uParam0->f_554, 1);
					unk_0x30122BDF124C9221(fVar20, (fVar1 + func_209((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0xE3B46F8779F1AB2E(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xE3B46F8779F1AB2E(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xE3B46F8779F1AB2E(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_193(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_209(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x67972FF1523F6D32(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_209(30f) - 2f));
		}
	}
}

float func_193(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_194(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xD9DDC2582B7C61C4(iParam3);
	unk_0x6C65E322B18B5D28(iParam5);
	func_207();
	if (bParam4)
	{
		unk_0x169EAB5A8FBE845B("STRING");
		unk_0xBAB00B98D1E61BEE(sParam0);
	}
	else
	{
		unk_0x169EAB5A8FBE845B(sParam0);
	}
	unk_0x30122BDF124C9221(fParam1, fParam2, 0);
}

int func_195(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_201(iParam0), 64);
	StringCopy(&cVar16, func_198(iParam0, bParam1), 64);
	if (unk_0x765F5B806B517045(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xC00B89C485A069D9(&iVar32, &iVar33);
			fVar35 = unk_0x73E1DAE2E39E5E52(0);
			if (func_197())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_197())
			{
				fVar34 = 1f;
			}
			if (unk_0x82F1A060D8F4583B(joaat("director_mode")) > 0)
			{
				unk_0xFCD5E0181ABDD64D(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xFCD5E0181ABDD64D(&iVar32, &iVar33);
		}
		Var37 = { unk_0xD52DED36C2D0B48F(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_196(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_196(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x765F5B806B517045(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x4FF5482BE67FE954() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_196(int iParam0)
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

int func_197()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xC00B89C485A069D9(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_198(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x9C88EB7B70229335(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x765F5B806B517045(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_200(unk_0xBE369BE1BC57A796()) };
			if (unk_0x143C79C845931BB3(&Var19, &uVar3))
			{
				return func_199(&uVar3);
			}
		}
		else
		{
			return func_199(&(Global_17290.f_6703[iParam0 /*16*/]));
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

var func_199(var uParam0)
{
	return uParam0;
}

struct<13> func_200(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

char* func_201(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x9C88EB7B70229335(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x765F5B806B517045(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_200(unk_0xBE369BE1BC57A796()) };
			unk_0x143C79C845931BB3(&Var16, &uVar0);
			return func_199(&uVar0);
		}
		else
		{
			return func_199(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_202(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xE3B46F8779F1AB2E(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x95F5FAE83A0364F7(uVar0, uVar1, uVar2, iParam5);
	unk_0x71D93F31C9937FC7(fParam3, fParam4);
	unk_0xE32F769454EED7A6(1);
	unk_0xF52EFF0C6EF215CB(1f, func_204(14f));
	unk_0xD9DDC2582B7C61C4(0);
	unk_0x6C65E322B18B5D28(0);
	func_207();
	if (uParam0->f_531[iParam1])
	{
		unk_0x169EAB5A8FBE845B("STRING");
		unk_0xBAB00B98D1E61BEE(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x169EAB5A8FBE845B(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x69967F83C1E636E2(uParam0->f_489[iParam1]);
		}
	}
	unk_0x30122BDF124C9221(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_195(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x67972FF1523F6D32("CommonMenu", func_198(7, 0), (fParam4 - 0.006f), ((fParam2 + func_209(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_195(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x67972FF1523F6D32("CommonMenu", func_198(5, 0), (fParam4 - 0.006f), ((fParam2 + func_209(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_195(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x67972FF1523F6D32("CommonMenu", func_198(6, 0), (fParam4 - 0.006f), ((fParam2 + func_209(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xE32F769454EED7A6(1);
	}
	else
	{
		unk_0xE32F769454EED7A6(2);
	}
	unk_0xF52EFF0C6EF215CB(1f, func_204(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x71D93F31C9937FC7(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x71D93F31C9937FC7(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x95F5FAE83A0364F7(uVar0, uVar1, uVar2, iParam5);
	func_203(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_203(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xD9DDC2582B7C61C4(0);
	unk_0x6C65E322B18B5D28(0);
	func_207();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xF52EFF0C6EF215CB(1f, func_204(18f));
			unk_0x6C65E322B18B5D28(4);
			if (iParam0 < 0)
			{
				unk_0x2FCB88845EB45E2E("ESMINDOLLA");
				unk_0x1C4A0E5E77C7F187((-1 * iParam0), 1);
				fVar1 = unk_0x79BC75FF4F056899(0);
			}
			else
			{
				unk_0x2FCB88845EB45E2E("ESDOLLA");
				unk_0x1C4A0E5E77C7F187(iParam0, 1);
				fVar1 = unk_0x79BC75FF4F056899(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x67972FF1523F6D32("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x67972FF1523F6D32("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x67972FF1523F6D32("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xF52EFF0C6EF215CB(1f, func_204(14f));
			break;
	}
	unk_0x80A171A436807CA0(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x169EAB5A8FBE845B("PERCENTAGE");
			unk_0x69967F83C1E636E2(iParam0);
			break;
		
		case 1:
			unk_0x6C65E322B18B5D28(5);
			unk_0x169EAB5A8FBE845B("FO_NUM");
			unk_0x69967F83C1E636E2(iParam0);
			break;
		
		case 2:
			unk_0x6C65E322B18B5D28(5);
			unk_0x169EAB5A8FBE845B("FO_TWO_NUM");
			unk_0x69967F83C1E636E2(iParam0);
			unk_0x69967F83C1E636E2(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xF52EFF0C6EF215CB(1f, func_204(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x169EAB5A8FBE845B("ESMINDOLLA");
				unk_0x1C4A0E5E77C7F187((-1 * iParam0), 1);
			}
			else
			{
				unk_0x169EAB5A8FBE845B("ESDOLLA");
				unk_0x1C4A0E5E77C7F187(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x169EAB5A8FBE845B(sParam4);
			break;
		
		case 7:
			unk_0x169EAB5A8FBE845B("STRING");
			unk_0xBAB00B98D1E61BEE(sParam4);
			break;
		
		case 8:
			unk_0x6C65E322B18B5D28(5);
			unk_0x169EAB5A8FBE845B("STRING");
			unk_0x96F1415E7C5E58EB(iParam0, 14);
			break;
		
		case 9:
			unk_0x6C65E322B18B5D28(5);
			unk_0x169EAB5A8FBE845B("STRING");
			unk_0x96F1415E7C5E58EB(iParam0, 6);
			break;
		
		case 10:
			unk_0x6C65E322B18B5D28(5);
			unk_0x169EAB5A8FBE845B("STRING");
			unk_0x96F1415E7C5E58EB(iParam0, 2055);
			break;
		
		case 18:
			unk_0x6C65E322B18B5D28(5);
			unk_0x169EAB5A8FBE845B("STRING");
			unk_0x96F1415E7C5E58EB(iParam0, 2055);
			break;
		
		case 12:
			unk_0x169EAB5A8FBE845B("AHD_DIST");
			unk_0x69967F83C1E636E2(iParam0);
			break;
		
		case 13:
			unk_0x169EAB5A8FBE845B(sParam4);
			unk_0x69967F83C1E636E2(iParam0);
			unk_0x69967F83C1E636E2(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x169EAB5A8FBE845B(sParam4);
			unk_0x69967F83C1E636E2(iParam0);
			unk_0x69967F83C1E636E2(iParam1);
			break;
		
		case 16:
			unk_0x169EAB5A8FBE845B(sParam4);
			unk_0x69967F83C1E636E2(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x30122BDF124C9221((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xF52EFF0C6EF215CB(1f, func_204(14f));
		}
		else
		{
			unk_0x30122BDF124C9221(fParam2, fParam3, 0);
		}
	}
}

float func_204(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_205(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_206(char* sParam0)
{
	unk_0x2FCB88845EB45E2E(sParam0);
	return (unk_0x79BC75FF4F056899(1) / 2f);
}

void func_207()
{
	unk_0x4ED9ECF3735CB826(1);
	if (unk_0x46EEE08565CE19CA() || unk_0x25BD4C26D84038CD())
	{
		unk_0x4ED9ECF3735CB826(7);
	}
	unk_0xF9B73D09E3ADD73F(0);
}

float func_208()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xEF4E5E47AF0D4480())
	{
	}
	return fVar0;
}

float func_209(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_210()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_67(0))
		{
			func_211(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_211(int iParam0)
{
	if (Global_14604)
	{
		func_212(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_10())
	{
		Global_14443.f_1 = 3;
	}
}

void func_212(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_67(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_213(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_214(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xFE3B16624B0B356E("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_183(&(uParam0->f_1), 32);
	}
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		func_183(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xD475F943F6FE2CA6(*uParam0, 1);
		}
	}
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (bParam3)
		{
			func_183(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_183(&(uParam0->f_1), 8192);
	}
}

int func_215(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_218(uParam0);
	func_217(uParam0);
	if (unk_0x6A7B0D91FD88D9EE(&(uParam0->f_550), "SPR_RESULT") || (unk_0x6A7B0D91FD88D9EE(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0xA6AD245AF4469018("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xA6AD245AF4469018("CommonMenu", 0);
		unk_0xA6AD245AF4469018("MPLeaderboard", 0);
		unk_0xA6AD245AF4469018("MPHud", 0);
		uParam0->f_1 = unk_0xB50E108F09B8EC7A("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xFE3B16624B0B356E("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xFF84A94166FBB351(uParam0->f_1) || !unk_0xE0B615EF03FE4422("CommonMenu")) || !unk_0xE0B615EF03FE4422("MPLeaderboard")) || !unk_0xE0B615EF03FE4422("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xFF84A94166FBB351(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0xFF84A94166FBB351(uParam0->f_1) || !unk_0xE0B615EF03FE4422("CommonMenu")) || !unk_0xE0B615EF03FE4422("MPLeaderboard")) || !unk_0xE0B615EF03FE4422("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xFF84A94166FBB351(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_216(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_190(uParam0, 1);
		}
		else
		{
			func_190(uParam0, 0);
		}
	}
	Global_69963 = 1;
	return 1;
}

void func_216(var uParam0)
{
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "CLEAR_ALL");
	unk_0x44983883E630A945();
	if (unk_0xEF4E5E47AF0D4480())
	{
		unk_0xEAC9A8A194DF8F91(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x14ED5B5B8289F2FC(true);
		unk_0x44983883E630A945();
	}
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(2);
	func_186(unk_0x38DDA814F2E19659(2, 188, true));
	func_185("ES_HELP_TU");
	unk_0x44983883E630A945();
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(1);
	func_186(unk_0x38DDA814F2E19659(2, 187, true));
	func_185("ES_HELP_TD");
	unk_0x44983883E630A945();
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(0);
	func_186(unk_0x38DDA814F2E19659(2, 202, true));
	func_185("ES_HELP_AB");
	unk_0x44983883E630A945();
	unk_0xEAC9A8A194DF8F91(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x44983883E630A945();
}

void func_217(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xE32F769454EED7A6(0);
	unk_0xF52EFF0C6EF215CB(1f, func_204(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x2FCB88845EB45E2E("STRING");
			unk_0xBAB00B98D1E61BEE(&(uParam0->f_13));
			fVar0 = unk_0x79BC75FF4F056899(1);
		}
		else
		{
			unk_0x2FCB88845EB45E2E(&(uParam0->f_13));
			fVar0 = unk_0x79BC75FF4F056899(1);
		}
	}
	else
	{
		unk_0x2FCB88845EB45E2E("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x69967F83C1E636E2(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x34D84D73B5DF8E80(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xBAB00B98D1E61BEE(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x79BC75FF4F056899(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_218(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_219()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_377)
	{
		func_225(&uLocal_388, &Local_964, &Global_55837, 0);
		fLocal_372 = (fLocal_372 * 1000f);
		if (Global_86001)
		{
			func_224(&uLocal_388, 6, &(Local_964.f_12), "MTPHPERSKI", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			func_224(&uLocal_388, 6, &(Local_964.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_224(&uLocal_388, 6, &(Local_964.f_30), "MTPHPERSKI", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 3, 0);
			func_223();
		}
		else
		{
			if (bLocal_376)
			{
				func_224(&uLocal_388, 6, &(Local_964.f_12), "MTPHPERRET", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			}
			else
			{
				func_224(&uLocal_388, 9, &(Local_964.f_12), "", unk_0xF34EE736CF047844(fLocal_372), 0, 0, 0);
			}
			if (!unk_0x9C88EB7B70229335(&(Local_964.f_18)))
			{
				if (bLocal_375)
				{
					func_224(&uLocal_388, 6, &(Local_964.f_24), "", 0, 0, 2, 0);
					func_224(&uLocal_388, 3, &(Local_964.f_30), "", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 2, 0);
				}
				else
				{
					func_224(&uLocal_388, 6, &(Local_964.f_24), "", 0, 0, 1, 0);
					func_224(&uLocal_388, 3, &(Local_964.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
				}
			}
			else
			{
				func_224(&uLocal_388, 3, &(Local_964.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_86001)
		{
			iVar1 = 0;
			while (iVar1 < Global_67917)
			{
				if (Global_67918[iVar1 /*9*/] >= 0 && !Global_56047[Global_67918[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_67918[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_222(&uLocal_388, 1, &(Local_964.f_48), iLocal_383, 0, 0, 1);
		}
		else if (bLocal_375)
		{
			if (bLocal_376)
			{
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_222(&uLocal_388, 1, &(Local_964.f_42), iLocal_383, 0, 0, 2);
			}
			else
			{
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_222(&uLocal_388, 1, &(Local_964.f_36), iLocal_383, 0, 0, 3);
			}
		}
		else if (!bLocal_375 && !bLocal_376)
		{
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_222(&uLocal_388, 1, &(Local_964.f_42), iLocal_383, 0, 0, 2);
		}
		else
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_222(&uLocal_388, 1, &(Local_964.f_48), iLocal_383, 0, 0, 1);
		}
		func_220();
		iLocal_377 = 1;
	}
}

void func_220()
{
	if (unk_0x82F1A060D8F4583B(joaat("assassin_valet")) == 1)
	{
		func_221(38, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_221(39, 1, 1);
		}
		else
		{
			func_221(39, 0, 1);
		}
		if (bLocal_375)
		{
			func_221(40, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_221(40, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_221(41, iLocal_383, 1);
		func_221(42, iLocal_384, 1);
	}
	else if (unk_0x82F1A060D8F4583B(joaat("assassin_multi")) == 1)
	{
		func_221(52, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_221(53, 1, 1);
		}
		else
		{
			func_221(53, 0, 1);
		}
		if (bLocal_375)
		{
			func_221(56, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_221(56, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_221(54, iLocal_383, 1);
		func_221(55, iLocal_384, 1);
	}
	else if (unk_0x82F1A060D8F4583B(joaat("assassin_hooker")) == 1)
	{
		func_221(66, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_221(67, 1, 1);
		}
		else
		{
			func_221(67, 0, 1);
		}
		if (bLocal_375)
		{
			func_221(68, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_221(68, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_221(69, iLocal_383, 1);
		func_221(70, iLocal_384, 1);
	}
	else if (unk_0x82F1A060D8F4583B(joaat("assassin_bus")) == 1)
	{
		func_221(81, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_221(82, 1, 1);
		}
		else
		{
			func_221(82, 0, 1);
		}
		if (bLocal_375)
		{
			func_221(83, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_221(83, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_221(84, iLocal_383, 1);
		func_221(85, iLocal_384, 1);
	}
	else if (unk_0x82F1A060D8F4583B(joaat("assassin_construction")) == 1)
	{
		func_221(97, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_221(98, 1, 1);
		}
		else
		{
			func_221(98, 0, 1);
		}
		if (bLocal_375)
		{
			func_221(99, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_221(99, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_221(100, iLocal_383, 1);
		func_221(101, iLocal_384, 1);
	}
}

void func_221(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917)
	{
		if (Global_67918[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67918[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67918[iVar0 /*9*/].f_1 = (Global_67918[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67918[iVar0 /*9*/] != -1)
	{
		if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67918[iVar0 /*9*/].f_1 > 1)
			{
				Global_67918[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67918[iVar0 /*9*/].f_1 < 0)
			{
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_222(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

void func_223()
{
	Global_86000 = 0;
	Global_86001 = 0;
}

void func_224(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_225(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_226()
{
	func_490(&(Global_101700.f_18922.f_1), 4194304);
}

void func_227()
{
	int iVar0;
	
	if (!bLocal_1174)
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if (unk_0x23E9113C762466ED(iVar0) && !unk_0xA929B2923D14E2F8(iVar0, 0))
				{
					if (unk_0x5DEB532E62B5680C(iVar0))
					{
						if (unk_0x5823F1F25CE33C5D("ASS1_LOST"))
						{
							bLocal_1174 = true;
						}
					}
				}
			}
		}
	}
}

void func_228()
{
	float fVar0;
	
	if (!iLocal_1171)
	{
		if (!unk_0x75342B3CD0FB5275())
		{
			if (!func_22())
			{
				func_233("ASS_VA_GO", 7500, -1);
				iLocal_1171 = 1;
			}
		}
	}
	func_232(&iLocal_1183, &uLocal_1363, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1192)
	{
		case 0:
			iLocal_1192++;
			break;
		
		case 1:
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				fVar0 = func_26(unk_0x17B5CC8A8615737D(), Local_1298, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_1166 = true;
					func_230();
					iLocal_1192++;
				}
				else
				{
					unk_0x1B7B205820ED9CE2(unk_0xBE369BE1BC57A796());
				}
			}
			break;
		
		case 2:
			if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_227();
					if (func_229())
					{
						iLocal_1030 = 18;
					}
				}
			}
			else if (!iLocal_1182)
			{
				if (!func_22())
				{
					if (!unk_0x75342B3CD0FB5275())
					{
						func_233("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1192++;
						iLocal_1182 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				iLocal_1192 = 2;
			}
			break;
	}
}

int func_229()
{
	if (bLocal_1174)
	{
		unk_0x5BE53482EFD49141("ASS1_LOST");
		iLocal_1175 = 1;
	}
	func_230();
	return 1;
}

void func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x23E9113C762466ED(iLocal_1046[iVar0]))
		{
			if (!unk_0xCA41A00932714525(iLocal_1046[iVar0]))
			{
				func_231(&(Local_1101[iVar0 /*8*/]));
				unk_0x15848523A8959DBC(iLocal_1046[iVar0]);
				unk_0x6500ADB01E821BC0(&(iLocal_1046[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x23E9113C762466ED(iLocal_1045))
	{
		if (!unk_0xCA41A00932714525(iLocal_1045))
		{
			unk_0x15848523A8959DBC(iLocal_1045);
			unk_0x6500ADB01E821BC0(&iLocal_1045);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(uLocal_1049[iVar0]))
		{
			if (!unk_0xCA41A00932714525(uLocal_1049[iVar0]))
			{
				func_231(&(Local_1059[iVar0 /*8*/]));
				unk_0x15848523A8959DBC(uLocal_1049[iVar0]);
				unk_0x6500ADB01E821BC0(&(uLocal_1049[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x23E9113C762466ED(uLocal_1053[iVar0]))
		{
			if (!unk_0xCA41A00932714525(uLocal_1053[iVar0]))
			{
				func_231(&(Local_1084[iVar0 /*8*/]));
				unk_0x15848523A8959DBC(uLocal_1053[iVar0]);
				unk_0x6500ADB01E821BC0(&(uLocal_1053[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x924CDE68BA2ED3BA(iLocal_1324);
}

void func_231(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
		bVar0 = true;
	}
	if (unk_0xA3794949321E107C(uParam0->f_1))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x23E9113C762466ED(uParam0->f_7))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_7))
		{
			if (unk_0x708B478711FA7649(uParam0->f_7))
			{
				unk_0x53D9FD8A3418C8E9(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_232(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_233(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

void func_234()
{
	func_232(&iLocal_1183, &uLocal_1363, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1192)
	{
		case 0:
			if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				if (!iLocal_1182)
				{
					if (!func_22())
					{
						if (!unk_0x75342B3CD0FB5275())
						{
							func_233("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1192++;
							iLocal_1182 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_1171)
				{
					if (!func_22())
					{
						if (!unk_0x75342B3CD0FB5275())
						{
							func_233("ASS_VA_GO", 7500, -1);
							iLocal_1192++;
							iLocal_1171 = 1;
						}
					}
				}
			}
			else if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1192++;
			}
			break;
		
		case 1:
			if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0) && func_30(125f, 1) == 0)
			{
				func_227();
				func_230();
				func_236(1);
				func_235();
				iLocal_1192++;
			}
			break;
		
		case 2:
			func_227();
			iLocal_1030 = 18;
			break;
	}
}

void func_235()
{
	if (unk_0x23E9113C762466ED(iLocal_1311))
	{
		if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
		{
			unk_0xD602D152E57C823D(iLocal_1311, 1);
		}
		unk_0x921CF98C637B0043(&iLocal_1311);
	}
	if (unk_0x23E9113C762466ED(iLocal_1312))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_1312, 0))
		{
			if ((unk_0x1DCFA79E268F3EE5(iLocal_1312) && !unk_0xF6563E19EDE84B8C(iLocal_1312)) && !unk_0x25BD4C26D84038CD())
			{
				unk_0x921CF98C637B0043(&iLocal_1312);
			}
			else
			{
				if (unk_0x23E9113C762466ED(uLocal_1053[0]) && !unk_0xA929B2923D14E2F8(uLocal_1053[0], 0))
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_1312, 0))
					{
						if (unk_0x2315BB1606BC3DC3(uLocal_1053[0], iLocal_1312, 0))
						{
							unk_0xBC8C26E1CC191108(uLocal_1053[0]);
						}
					}
				}
				if (unk_0x23E9113C762466ED(uLocal_1053[1]) && !unk_0xA929B2923D14E2F8(uLocal_1053[1], 0))
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_1312, 0))
					{
						if (unk_0x2315BB1606BC3DC3(uLocal_1053[1], iLocal_1312, 0))
						{
							unk_0xBC8C26E1CC191108(uLocal_1053[1]);
						}
					}
				}
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_1312, 0))
					{
						unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
					}
				}
				unk_0x921CF98C637B0043(&iLocal_1312);
			}
		}
	}
	if (unk_0x23E9113C762466ED(uLocal_1315[0]))
	{
		unk_0x921CF98C637B0043(&(uLocal_1315[0]));
	}
	if (unk_0x23E9113C762466ED(uLocal_1315[1]))
	{
		unk_0x921CF98C637B0043(&(uLocal_1315[1]));
	}
	if (unk_0x23E9113C762466ED(iLocal_1318) && !unk_0xA929B2923D14E2F8(iLocal_1318, 0))
	{
		if (unk_0xC26429B504BA534D(iLocal_1318) && unk_0x45CA7F42CA715849(iLocal_1318, 1))
		{
			unk_0x921CF98C637B0043(&iLocal_1318);
		}
	}
}

void func_236(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0xA3794949321E107C(uLocal_1119))
		{
			unk_0x020DF7300725ECAB(&uLocal_1119);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA3794949321E107C(uLocal_1120[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_1120[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xA3794949321E107C(uLocal_1124[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_1124[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xA3794949321E107C(uLocal_1124[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_1124[iVar0]));
		}
		iVar0++;
	}
}

void func_237()
{
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_1292, Local_1295, fLocal_1242, 1, 0, 0))
	{
		bLocal_1151 = true;
	}
	else
	{
		bLocal_1151 = false;
	}
	if (unk_0xA3794949321E107C(uLocal_1119))
	{
		unk_0x020DF7300725ECAB(&uLocal_1119);
	}
	unk_0x000E46314C3A507F(0.5f);
	if (bLocal_1151)
	{
		func_238();
		iLocal_1030 = 17;
	}
	else
	{
		func_238();
		iLocal_1030 = 16;
	}
	func_79(&uLocal_1528, 0, 0);
}

void func_238()
{
	iLocal_1192 = 0;
}

void func_239()
{
	if (!bLocal_1148)
	{
		if (unk_0x23E9113C762466ED(iLocal_1311))
		{
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				unk_0xD602D152E57C823D(iLocal_1311, 3);
				if (func_241(iLocal_1311, 5f))
				{
					bLocal_1148 = true;
				}
			}
		}
	}
	if (!iLocal_1145)
	{
		if (func_240(iLocal_1311, 10000))
		{
			iLocal_1145 = 1;
		}
	}
}

int func_240(int iParam0, int iParam1)
{
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (((unk_0x01F09F0D64EF3285(iParam0, 0, iParam1) || unk_0x01F09F0D64EF3285(iParam0, 2, iParam1)) || unk_0x01F09F0D64EF3285(iParam0, 3, iParam1)) || unk_0x01F09F0D64EF3285(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0, float fParam1)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (func_242(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_242(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Param1, iParam4);
}

void func_243()
{
	switch (iLocal_1192)
	{
		case 0:
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				if (func_127())
				{
					if (!unk_0xCA41A00932714525(uLocal_1049[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
						{
							if (unk_0x2315BB1606BC3DC3(uLocal_1049[0], iLocal_1311, 0))
							{
								bLocal_1144 = true;
								func_238();
								iLocal_1030 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_244()
{
	if (unk_0x23E9113C762466ED(iLocal_1045))
	{
		if (unk_0xCA41A00932714525(iLocal_1045))
		{
			if (unk_0xA929B2923D14E2F8(iLocal_1045, 0))
			{
				bLocal_1149 = true;
				if (unk_0xA3794949321E107C(uLocal_1119))
				{
					unk_0x020DF7300725ECAB(&uLocal_1119);
				}
				func_103(Local_1304, 1097859072, 1116471296);
			}
			unk_0x2DE9FDD822EE641B(3f, 1073741824, 3);
			func_238();
			iLocal_1030 = 15;
		}
	}
}

void func_245()
{
	func_236(0);
	func_252();
	func_250();
	func_247();
	func_246();
	func_233("ASS_VA_KILL", 7500, -1);
	unk_0xC1B1E9A034A63A62(0);
	bLocal_1160 = true;
	func_238();
	iLocal_1030 = 12;
}

void func_246()
{
	unk_0x924CDE68BA2ED3BA(iLocal_1326);
	unk_0x924CDE68BA2ED3BA(iLocal_1327);
}

void func_247()
{
	func_249(&(Local_1690.f_4));
	func_248(&(Local_1690[0]));
	func_248(&(Local_1690[1]));
	func_248(&(Local_1690.f_8[0]));
	func_248(&(Local_1690.f_8[1]));
	func_248(&(Local_1690.f_5[0]));
	func_248(&(Local_1690.f_5[1]));
	func_248(&(Local_1690.f_3));
}

void func_248(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF6563E19EDE84B8C(*uParam0))
		{
			unk_0x478AE709A466CB7E(uParam0);
		}
		else
		{
			unk_0x6500ADB01E821BC0(uParam0);
		}
	}
}

void func_249(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF6563E19EDE84B8C(*uParam0))
		{
			unk_0x921CF98C637B0043(uParam0);
		}
	}
}

void func_250()
{
	struct<3> Var0[2];
	struct<3> Var7;
	var uVar10;
	int iVar11;
	
	if (unk_0x23E9113C762466ED(iLocal_1045) && !unk_0xA929B2923D14E2F8(iLocal_1045, 0))
	{
		Var7 = { unk_0x57240623C1BC6E88(iLocal_1045, 1) };
		uVar10 = unk_0x638527C9799F2AE4(iLocal_1045);
	}
	Var0[0 /*3*/] = { unk_0x3CE07141081BBC2B(Var7, uVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { unk_0x3CE07141081BBC2B(Var7, uVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1046[iVar11] = unk_0x2AD5F4170F4ACBEB(26, iLocal_1326, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1238[iLocal_1201], 1, 1);
		}
		else
		{
			iLocal_1046[iVar11] = unk_0x2AD5F4170F4ACBEB(26, iLocal_1327, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1238[iLocal_1201], 1, 1);
		}
		unk_0x4114B83B329702FF(iLocal_1046[iVar11], 1);
		unk_0x7F73E2B58861632F(iLocal_1046[iVar11]);
		unk_0xC96275575DC981A9(iLocal_1046[iVar11], 3, 0);
		unk_0xC96275575DC981A9(iLocal_1046[iVar11], 23, 1);
		unk_0xC96275575DC981A9(iLocal_1046[iVar11], 30, 0);
		unk_0xC96275575DC981A9(iLocal_1046[iVar11], 13, 1);
		unk_0xE1F5F70A15CF94CB(iLocal_1046[iVar11], 2);
		unk_0x650BB0E111420EAF(iLocal_1046[iVar11], 1);
		func_251(iLocal_1046[iVar11], 1);
		unk_0xAA70EB198C6F2985(iLocal_1046[iVar11], 1);
		iVar11++;
	}
}

void func_251(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_1045)
	{
		unk_0xC1B7B5C6FDC0755B(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		unk_0x2937901439E611F5(iParam0, 1);
		unk_0xC96275575DC981A9(iParam0, 0, 1);
	}
	else
	{
		unk_0x2937901439E611F5(iParam0, 2);
		unk_0xC96275575DC981A9(iParam0, 13, 1);
	}
	unk_0xFA4023BBD5BCB8B5(iParam0, 60);
	unk_0x8B54B100C5719325(iParam0, 2);
	unk_0xCC61640A821F277C(iParam0, 1);
	unk_0xCCEA0D9BEB843226(iParam0, 1);
	unk_0x3BB70315907D9456(iParam0, iLocal_1331);
}

void func_252()
{
	func_254();
	iLocal_1201 = unk_0x0E29C61F26D96FDB(0, iLocal_1194);
	iLocal_1045 = unk_0x2AD5F4170F4ACBEB(26, iLocal_1324, Local_1257[iLocal_1201 /*3*/], uLocal_1238[iLocal_1201], 1, 1);
	unk_0x4114B83B329702FF(iLocal_1045, 1);
	unk_0x7F73E2B58861632F(iLocal_1045);
	func_251(iLocal_1045, 1);
	unk_0x924CDE68BA2ED3BA(iLocal_1324);
	if (!unk_0xA3794949321E107C(uLocal_1119))
	{
		uLocal_1119 = func_253(iLocal_1045, 0, 0);
	}
	unk_0x00EA14207118EEE2(uLocal_1119, 1f);
}

int func_253(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_184(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, iParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_184(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, iParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_184(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_254()
{
	int iVar0;
	
	iLocal_1194 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xF7E1BD8196545EE3(Local_1247[iVar0 /*3*/], 5f) && !func_258(iVar0, 6f))
		{
			Local_1257[iLocal_1194 /*3*/] = { Local_1247[iVar0 /*3*/] };
			uLocal_1238[iLocal_1194] = fLocal_1234[iVar0];
			iLocal_1194++;
		}
		iVar0++;
	}
	if (iLocal_1194 == 0)
	{
		if (func_91())
		{
			Local_1257[0 /*3*/] = { Local_1247[1 /*3*/] };
			uLocal_1238[0] = fLocal_1234[1];
			iLocal_1194++;
		}
		else if (func_257())
		{
			Local_1257[0 /*3*/] = { Local_1247[0 /*3*/] };
			uLocal_1238[0] = fLocal_1234[0];
			iLocal_1194++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_256(Local_1247[iVar0 /*3*/], 1) > 30f && !func_258(iVar0, 6f))
				{
					Local_1257[iLocal_1194 /*3*/] = { Local_1247[iVar0 /*3*/] };
					uLocal_1238[iLocal_1194] = fLocal_1234[iVar0];
					iLocal_1194++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1194 == 0)
	{
		func_255();
	}
}

void func_255()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = unk_0x2A488C176D52CCA5(Var1, Local_1247[iVar0 /*3*/]);
		if (fVar4 > fLocal_1246)
		{
			fLocal_1246 = fVar4;
			iLocal_1245 = iVar0;
		}
		iVar0++;
	}
	Local_1257[0 /*3*/] = { Local_1247[iLocal_1245 /*3*/] };
	uLocal_1238[0] = fLocal_1234[iLocal_1245];
}

float func_256(struct<3> Param0, int iParam3)
{
	return func_26(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), Param0, iParam3);
}

int func_257()
{
	if (func_26(unk_0x17B5CC8A8615737D(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, float fParam1)
{
	if (unk_0x47865C56C9B1EFE6(Local_1247[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_259()
{
	switch (iLocal_1192)
	{
		case 0:
			if (!iLocal_1161)
			{
				func_99(&Local_360, 4);
				func_262();
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1192++;
			}
			break;
		
		case 1:
			if (((bLocal_1140 && !bLocal_1138) && func_261()) && func_260())
			{
				func_238();
				iLocal_1030 = 11;
			}
			break;
	}
}

int func_260()
{
	int iVar0;
	
	unk_0xE1324F59713746FA(iLocal_1324);
	if (unk_0x9F746898F7881612(iLocal_1324))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_261()
{
	if (((unk_0x23E9113C762466ED(uLocal_1049[0]) && unk_0x23E9113C762466ED(uLocal_1049[1])) && !unk_0xCA41A00932714525(uLocal_1049[0])) && !unk_0xCA41A00932714525(uLocal_1049[1]))
	{
		if (unk_0x2315BB1606BC3DC3(uLocal_1049[0], iLocal_1311, 0) && unk_0x2315BB1606BC3DC3(uLocal_1049[1], iLocal_1311, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_262()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1032[iVar0] = 4;
		iVar0++;
	}
	bLocal_1154 = true;
}

void func_263()
{
	switch (iLocal_1192)
	{
		case 0:
			func_284(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_99(&Local_360, 2);
			if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
			{
				unk_0x524A422B74847594(iLocal_1311, 0, 1, 0);
			}
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0x23E9113C762466ED(iLocal_1318) && !unk_0xA929B2923D14E2F8(iLocal_1318, 0))
					{
						func_271(iLocal_1318);
					}
				}
			}
			func_268();
			func_267();
			unk_0x5BE53482EFD49141("ASS1_START");
			unk_0xEB79FECD9022AAF0(&Local_360, 4);
			func_233("ASS_VA_PLANT", 7500, 1);
			iLocal_1192++;
			break;
		
		case 1:
			if (iLocal_1167)
			{
				if (((!func_266(&iLocal_1313) && !func_265(&(iLocal_1319[0]), &bLocal_1188)) && !func_265(&(iLocal_1319[1]), &bLocal_1188)) && !func_265(&(iLocal_1319[2]), &bLocal_1188))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_238();
					iLocal_1030 = 10;
				}
				else
				{
					func_264();
				}
			}
			break;
	}
}

void func_264()
{
	iLocal_1043 = 1;
	bLocal_1138 = true;
}

int func_265(var uParam0, int iParam1)
{
	if (!unk_0x23E9113C762466ED(*uParam0))
	{
		return 0;
	}
	if (!unk_0x23E9113C762466ED(iLocal_1312))
	{
		return 0;
	}
	if (func_24(*uParam0, iLocal_1312, 1) <= 5f)
	{
		iLocal_1313 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_266(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = unk_0xCE499B0B1C2F5684(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1311) && *uParam0 != iLocal_1312) && *uParam0 != Local_1690.f_4)
	{
		if (unk_0x23E9113C762466ED(*uParam0) && !unk_0xA929B2923D14E2F8(*uParam0, 0))
		{
			if (unk_0x17206B315923243C(*uParam0, -1, 0) == 0)
			{
				Var0 = { unk_0x57240623C1BC6E88(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1318 != 0)
	{
		if (unk_0x23E9113C762466ED(iLocal_1318) && !unk_0xA929B2923D14E2F8(iLocal_1318, 0))
		{
			if (!func_86(iLocal_1318))
			{
				Var0 = { unk_0x57240623C1BC6E88(iLocal_1318, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_267()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x23E9113C762466ED(uLocal_1049[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1327;
			}
			else
			{
				iVar0 = iLocal_1326;
			}
			uLocal_1049[iVar1] = unk_0x2AD5F4170F4ACBEB(26, iVar0, Local_1267[iVar1 /*3*/], fLocal_1220[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 0, 0, 2, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 3, 0, 0, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 4, 0, 1, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 8, 0, 0, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 0, 1, 2, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 3, 0, 1, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 4, 0, 0, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 8, 0, 0, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 0, 1, 2, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 3, 0, 2, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 4, 0, 1, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 8, 0, 0, 0);
				unk_0x2F933BB106547968(uLocal_1049[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0xCA41A00932714525(uLocal_1049[iVar1]))
		{
			unk_0x6F65279C9BC14EDB(uLocal_1049[iVar1], 0);
			unk_0x650BB0E111420EAF(uLocal_1049[iVar1], 1);
			unk_0xC96275575DC981A9(uLocal_1049[iVar1], 23, 1);
			unk_0xC96275575DC981A9(uLocal_1049[iVar1], 30, 0);
			unk_0xE1F5F70A15CF94CB(uLocal_1049[iVar1], 2);
			unk_0x6018E338F7ABCE75(uLocal_1049[iVar1], 104, 1);
			func_251(uLocal_1049[iVar1], 1);
		}
		iVar1++;
	}
}

void func_268()
{
	func_270();
	func_269();
	unk_0x924CDE68BA2ED3BA(iLocal_1328);
}

void func_269()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x23E9113C762466ED(uLocal_1053[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_1053[iVar0] = unk_0x3FBC0964EB7878AF(iLocal_1312, 26, iLocal_1326, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_1053[iVar0] = unk_0x3FBC0964EB7878AF(iLocal_1312, 26, iLocal_1327, 0, 1, 1);
			}
			func_251(uLocal_1053[iVar0], 1);
			unk_0xC96275575DC981A9(uLocal_1053[iVar0], 3, 0);
			unk_0xC96275575DC981A9(uLocal_1053[iVar0], 23, 1);
			unk_0xC96275575DC981A9(uLocal_1053[iVar0], 30, 0);
			unk_0xE1F5F70A15CF94CB(uLocal_1053[iVar0], 2);
			unk_0x650BB0E111420EAF(uLocal_1053[iVar0], 1);
		}
		iVar0++;
	}
}

void func_270()
{
	if (!unk_0x23E9113C762466ED(iLocal_1312))
	{
		iLocal_1312 = unk_0x692A2891A2BA7352(iLocal_1328, Local_1283, fLocal_1232, 1, 1);
		unk_0xEF9B9F466C3E73F6(iLocal_1312, 0);
	}
}

void func_271(int iParam0)
{
	func_272(&(Global_96040.f_2311), &Global_96040, iParam0, 1);
}

int func_272(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x45CD66F0A131E554(iParam2, 0))
	{
		func_274(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_273(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91491.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_274(var uParam0, int iParam1, int iParam2)
{
	func_280(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_277(iParam1, 145, 0);
	uParam0->f_11 = func_276(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_275(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x57240623C1BC6E88(iParam1, 1) };
		uParam0->f_6 = unk_0x638527C9799F2AE4(iParam1);
		uParam0->f_3 = { unk_0xACA666C39EA49E82(iParam1) };
		if (unk_0x70A9F320A34FAC28(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if (iParam0 == Global_68531.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0])
				{
					if (iParam2 == 0 || unk_0x0324EEB10F81965F(iParam0) == func_278(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_278(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_279(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_279(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101700.f_8044.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101700.f_8044.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_280(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_283(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_282(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_281(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
		}
	}
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_282(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_283(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_284(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0x6A7B0D91FD88D9EE("FinaleC2", unk_0x6AF6B39BFDB53CB5()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91528)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_151(1);
		if (iParam0 <= Global_91528)
		{
		}
		iVar1 = func_342(unk_0x6AF6B39BFDB53CB5(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_340(iVar1);
			cVar3 = { Global_82612[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_101700.f_8044.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x7EAB099DE46EBC94(&cVar3, uVar2, Global_91528, iParam0);
		}
		else
		{
			iVar5 = func_335(unk_0x6AF6B39BFDB53CB5(), 1);
			if (iVar5 != -1)
			{
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_334(iVar5)}, 4);
				unk_0x7EAB099DE46EBC94(&uVar6, 0, Global_91528, iParam0);
			}
			else
			{
				iVar10 = func_333(&(Global_91491.f_3));
				if (iVar10 > -1)
				{
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_285(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x6A7B0D91FD88D9EE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91528)
	{
	}
}

void func_285(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_286(&Global_96040, unk_0x6AF6B39BFDB53CB5(), iParam0, uParam1, iParam3, iParam2);
}

void func_286(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_322();
	unk_0x4281819BD66C66CF(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		func_307(&(uParam0->f_2305), 0);
		func_306(unk_0x17B5CC8A8615737D());
		func_300(unk_0x17B5CC8A8615737D(), 0);
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_299())
		{
			func_292(unk_0x17B5CC8A8615737D(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x7FE4F330D3D74809(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x7FE4F330D3D74809(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x7FE4F330D3D74809(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_288(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_287(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_287(var uParam0)
{
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_288(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x17B5CC8A8615737D();
	}
	if (unk_0x23E9113C762466ED(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_289(iParam2, &iVar0, iParam3, iParam5))
	{
		func_272(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("skylift")) && unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
			{
				func_272(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_289(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			if (iParam0 == unk_0x17B5CC8A8615737D())
			{
				*uParam1 = unk_0x0C00E753D78DEA62();
			}
			else
			{
				*uParam1 = unk_0x60604E51E30D25B8(iParam0, 1);
			}
			if (unk_0x23E9113C762466ED(*uParam1))
			{
				if (unk_0x45CD66F0A131E554(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(*uParam1, 1), unk_0x57240623C1BC6E88(iParam0, 1), 1) < 100f)
					{
						if (unk_0x5AF6E4F22F4B49C3(*uParam1, joaat("taxi")))
						{
							if (unk_0x17206B315923243C(*uParam1, -1, 0) != iParam0 && unk_0x17206B315923243C(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_290(*uParam1, func_13(), 1))
						{
							sVar0 = unk_0x6AF6B39BFDB53CB5();
							if (!unk_0x6A7B0D91FD88D9EE(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xFD0FE723227D5AB6(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x44748DA5CF34DA5E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x12D059B73664565A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5AF6E4F22F4B49C3(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_291(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_291(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_292(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_298(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_297(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x63C468D583002D23() && unk_0x0324EEB10F81965F(iParam0) == unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			if (func_296(161, -1))
			{
				uParam1->f_59 = func_293(2045, Global_69521, 0);
			}
			else
			{
				uParam1->f_59 = func_293(747, Global_69521, 0);
			}
			uParam1->f_60 = func_293(748, Global_69521, 0);
			uParam1->f_61 = func_293(749, Global_69521, 0);
		}
		if (unk_0x63C468D583002D23() && iParam0 == unk_0x17B5CC8A8615737D())
		{
			if (func_296(161, -1))
			{
				uParam1->f_59 = func_293(2045, Global_69521, 0);
			}
			else
			{
				uParam1->f_59 = func_293(747, Global_69521, 0);
			}
		}
	}
}

int func_293(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_294(iParam1)];
	if (unk_0x7FE4F330D3D74809(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_294(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_295();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_295()
{
	return Global_1312735;
}

int func_296(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_294(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_297(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB50239D338267F95(iParam0, iParam1);
		*uParam3 = unk_0xBE372F0FD574ACB1(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x697A7F59AC98FE0F(iParam0) && unk_0x5FC915A947F19410(iParam0) != -1)
				{
					*uParam2 = unk_0x5FC915A947F19410(iParam0);
					*uParam3 = unk_0x9015F42528E39793(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_298(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC72E4A160D2D5004(iParam0, iParam1);
		*uParam3 = unk_0x9E9290608A6EFB37(iParam0, iParam1);
		*uParam4 = unk_0x15D0CB3C99F0F8B0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_299()
{
	func_14();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_300(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0xCA41A00932714525(iParam0))
	{
		if (iParam0 == unk_0x17B5CC8A8615737D())
		{
			func_301(iParam0, &(Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xB41415484B2631D9(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x819A98CCFE5FACD6();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xD8B4ACC0B5F2BA05(unk_0xBE369BE1BC57A796(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x731753D8494ABECD(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x731753D8494ABECD(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x731753D8494ABECD(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_301(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_305(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x937B062731EC9E7B(iParam0, func_305(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x034EB52F6D89BFA0(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xEB79FECD9022AAF0(&(Var4.f_2), (20 + unk_0x56D81513B2CCEDD3(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEC52867E1145BD99(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_303(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xF848952075C9EC8A(iParam0, Var4.f_0, iVar2))
						{
							unk_0xEB79FECD9022AAF0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_303(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0xDD29471727F67A12();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x7DF39E88C502C09C(iVar7, &Var9) && !func_302(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x5D46F50AE982AB28(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x034EB52F6D89BFA0(iParam0, Var4.f_0);
					if (unk_0x509A3191A6C4EB38(iParam0, Var4.f_0, 0))
					{
						unk_0xEB79FECD9022AAF0(&(Var4.f_2), (20 + unk_0x56D81513B2CCEDD3(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xEB79FECD9022AAF0(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEC52867E1145BD99(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x7DCA7EA2B13F77EF(iVar7))
					{
						if (unk_0x94C9039E2251B8A8(iVar7, iVar1, &Var48))
						{
							if (unk_0xF848952075C9EC8A(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xEB79FECD9022AAF0(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x509A3191A6C4EB38(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_302(int iParam0)
{
	if (unk_0x63C468D583002D23())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_304(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x7DCA7EA2B13F77EF(iVar1))
					{
						if (unk_0x94C9039E2251B8A8(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_304(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDD29471727F67A12();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x7DF39E88C502C09C(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_305(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0xCA41A00932714525(iParam0))
	{
		Global_101700.f_2095.f_539.f_294[iVar0] = unk_0x55C72967EFB9CECF(iParam0);
	}
}

void func_307(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	uParam0->f_3 = unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D());
	uParam0->f_5 = unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D());
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		uParam0->f_4 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x82F1A060D8F4583B(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0xCA0D2B42E97CB506(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_310(&iVar0))
		{
			if (func_309(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_13();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_308(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_308(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB0A41EC77A49B189(Param0))
	{
		iVar0 = unk_0xCA0D2B42E97CB506(Param4, sParam3);
		if (!unk_0x623BDE1B17A9D9E3(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x26CBF9EAAC681B92(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_309(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

int func_310(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_321())
		{
			*uParam0 = func_316(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 6, -1, 0, 1, -1);
			if (func_315(*uParam0) && !func_311(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_311(int iParam0)
{
	return func_312(iParam0, 0, 1);
}

int func_312(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_314() == 0)
		{
			return unk_0x48B8265059381CD0(func_293(func_313(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_314()
{
	return Global_25190;
}

int func_315(int iParam0)
{
	return func_312(iParam0, 5, 1);
}

int func_316(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45)
	{
		if (iParam3 == 6 || iParam3 == func_320(iVar0))
		{
			if (!bParam5 || func_319(iVar0))
			{
				fVar1 = unk_0x3DC4639D5F23DEA2(Param0, func_317(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_317(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_318(Global_93004);
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_318(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_319(int iParam0)
{
	return func_312(iParam0, 0, 0);
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
	}
	return 6;
}

bool func_321()
{
	return Global_91543.f_303 > 0;
}

var func_322()
{
	var uVar0;
	
	func_332(&uVar0, unk_0x0956E4296D9CC40A());
	func_331(&uVar0, unk_0x32883EAC7DC86C40());
	func_330(&uVar0, unk_0x80BC37C67CB292E5());
	func_325(&uVar0, unk_0x202B089E6328ABFA());
	func_324(&uVar0, unk_0xCD8338A83E1BCC14());
	func_323(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

void func_323(var uParam0, int iParam1)
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

void func_324(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_325(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_329(*uParam0);
	iVar1 = func_327(*uParam0);
	if (iParam1 < 1 || iParam1 > func_326(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_326(int iParam0, int iParam1)
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

var func_327(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_328(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_328(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_329(var uParam0)
{
	return uParam0 & 15;
}

void func_330(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_331(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_332(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_333(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_334(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_335(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x765F5B806B517045(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_336(iVar0, &sVar1);
		if (unk_0x765F5B806B517045(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_336(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_337(uParam1, "Abigail1", func_339(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 1:
			func_337(uParam1, "Abigail2", func_339(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 2:
			func_337(uParam1, "Barry1", func_339(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 3:
			func_337(uParam1, "Barry2", func_339(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
			break;
		
		case 4:
			func_337(uParam1, "Barry3", func_339(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 5:
			func_337(uParam1, "Barry3A", func_339(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 6:
			func_337(uParam1, "Barry3C", func_339(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 7:
			func_337(uParam1, "Barry4", func_339(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_338(iParam0), 0, 0);
			break;
		
		case 8:
			func_337(uParam1, "Dreyfuss1", func_339(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 9:
			func_337(uParam1, "Epsilon1", func_339(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 10:
			func_337(uParam1, "Epsilon2", func_339(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 11:
			func_337(uParam1, "Epsilon3", func_339(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 12:
			func_337(uParam1, "Epsilon4", func_339(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 13:
			func_337(uParam1, "Epsilon5", func_339(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 14:
			func_337(uParam1, "Epsilon6", func_339(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 15:
			func_337(uParam1, "Epsilon7", func_339(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 16:
			func_337(uParam1, "Epsilon8", func_339(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 17:
			func_337(uParam1, "Extreme1", func_339(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 18:
			func_337(uParam1, "Extreme2", func_339(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 19:
			func_337(uParam1, "Extreme3", func_339(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 20:
			func_337(uParam1, "Extreme4", func_339(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 21:
			func_337(uParam1, "Fanatic1", func_339(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_338(iParam0), 1, 0);
			break;
		
		case 22:
			func_337(uParam1, "Fanatic2", func_339(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_338(iParam0), 1, 0);
			break;
		
		case 23:
			func_337(uParam1, "Fanatic3", func_339(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_338(iParam0), 0, 1);
			break;
		
		case 24:
			func_337(uParam1, "Hao1", func_339(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_338(iParam0), 0, 1);
			break;
		
		case 25:
			func_337(uParam1, "Hunting1", func_339(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 26:
			func_337(uParam1, "Hunting2", func_339(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 27:
			func_337(uParam1, "Josh1", func_339(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 28:
			func_337(uParam1, "Josh2", func_339(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
			break;
		
		case 29:
			func_337(uParam1, "Josh3", func_339(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
			break;
		
		case 30:
			func_337(uParam1, "Josh4", func_339(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 31:
			func_337(uParam1, "Maude1", func_339(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 32:
			func_337(uParam1, "Minute1", func_339(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 33:
			func_337(uParam1, "Minute2", func_339(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 34:
			func_337(uParam1, "Minute3", func_339(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 35:
			func_337(uParam1, "MrsPhilips1", func_339(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 36:
			func_337(uParam1, "MrsPhilips2", func_339(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 37:
			func_337(uParam1, "Nigel1", func_339(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 38:
			func_337(uParam1, "Nigel1A", func_339(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
			break;
		
		case 39:
			func_337(uParam1, "Nigel1B", func_339(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_338(iParam0), 1, 1);
			break;
		
		case 40:
			func_337(uParam1, "Nigel1C", func_339(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_338(iParam0), 1, 1);
			break;
		
		case 41:
			func_337(uParam1, "Nigel1D", func_339(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_338(iParam0), 1, 1);
			break;
		
		case 42:
			func_337(uParam1, "Nigel2", func_339(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
			break;
		
		case 43:
			func_337(uParam1, "Nigel3", func_339(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
			break;
		
		case 44:
			func_337(uParam1, "Omega1", func_339(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 45:
			func_337(uParam1, "Omega2", func_339(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 46:
			func_337(uParam1, "Paparazzo1", func_339(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 47:
			func_337(uParam1, "Paparazzo2", func_339(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 48:
			func_337(uParam1, "Paparazzo3", func_339(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 49:
			func_337(uParam1, "Paparazzo3A", func_339(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 50:
			func_337(uParam1, "Paparazzo3B", func_339(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 51:
			func_337(uParam1, "Paparazzo4", func_339(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 52:
			func_337(uParam1, "Rampage1", func_339(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 54:
			func_337(uParam1, "Rampage3", func_339(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 55:
			func_337(uParam1, "Rampage4", func_339(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 56:
			func_337(uParam1, "Rampage5", func_339(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_338(iParam0), 0, 0);
			break;
		
		case 53:
			func_337(uParam1, "Rampage2", func_339(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
			break;
		
		case 57:
			func_337(uParam1, "TheLastOne", func_339(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 58:
			func_337(uParam1, "Tonya1", func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 59:
			func_337(uParam1, "Tonya2", func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 60:
			func_337(uParam1, "Tonya3", func_339(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 61:
			func_337(uParam1, "Tonya4", func_339(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		case 62:
			func_337(uParam1, "Tonya5", func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_337(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_339(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_334(iParam0) };
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_341(Global_101700.f_8044.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_341(Global_101700.f_8044.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_341(Global_101700.f_8044.f_99.f_205[11]);
			break;
		
		case 90:
			return func_341(Global_101700.f_8044.f_99.f_205[7]);
			break;
		
		case 93:
			return func_341(Global_101700.f_8044.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_342(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x765F5B806B517045(sParam0);
	iVar1 = func_343(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_343(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_344()
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		}
		if (unk_0x23E9113C762466ED(iVar0))
		{
			if (unk_0x70A9F320A34FAC28(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
			{
				if (unk_0x13B7ACE69D27E3E4(iVar0) <= 0.5f)
				{
					if (!func_52(&uLocal_1344))
					{
						func_49(&uLocal_1344);
					}
				}
				else if (func_52(&uLocal_1344))
				{
					func_50(&uLocal_1344);
				}
				if (func_52(&uLocal_1344))
				{
					if (func_46(&uLocal_1344) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&uLocal_1344))
			{
				func_50(&uLocal_1344);
			}
		}
	}
}

void func_345()
{
	switch (iLocal_1192)
	{
		case 0:
			if (func_376(1084227584, 1) || (bLocal_1150 && unk_0x3D01C3117AA19C90(uLocal_1129)))
			{
				func_375(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1664, fLocal_1667, 1, 1, 1, 0, 0);
				unk_0x0668B21A0C3A4821(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
				unk_0x7B408F9F309B3E56(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_374();
				func_373();
				if (!unk_0xA929B2923D14E2F8(iLocal_1311, 0))
				{
					if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
					{
						unk_0x9D14C436A01A0B15(iLocal_1311, 107, "ASSOJva", 1);
						unk_0x367ABC65EA3C0FDD(iLocal_1311, 2500f);
					}
				}
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						unk_0x2F40A4997A9C988D(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), "OFF");
					}
				}
				iLocal_1192++;
			}
			else if (unk_0x3D01C3117AA19C90(uLocal_1129))
			{
			}
			break;
		
		case 1:
			if (func_346())
			{
				iLocal_1193 = 0;
				unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
				func_475();
				func_238();
				iLocal_1030 = 9;
			}
			break;
	}
}

int func_346()
{
	int iVar0;
	
	switch (iLocal_1193)
	{
		case 0:
			func_372(0, 0, 1);
			func_371();
			unk_0x2F0C4DC7A4D75C2E(uLocal_1329, "HAND_SHAKE", 0.2f);
			unk_0x2F0C4DC7A4D75C2E(uLocal_1330, "HAND_SHAKE", 0.2f);
			unk_0x6530B35F40F7E78B(uLocal_1330, uLocal_1329, 6000, 0, 0);
			unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
			unk_0x2E2945F5602A744F(1);
			unk_0xD12BCC85C2F8B1DE();
			func_233("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1150)
			{
				func_370();
				unk_0xBA7CD73403732191(0);
				unk_0x503F20CB07C55470(0, 1065353216);
			}
			else
			{
				func_361();
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_1193++;
			break;
		
		case 1:
			if (!unk_0xA929B2923D14E2F8(iLocal_1311, 0))
			{
				if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x72222684DEA44B9F(iLocal_1311))
						{
							unk_0x394D4A83F07AE208(iLocal_1311);
						}
						unk_0x9D14C436A01A0B15(iLocal_1311, 102, "ASSOJva", 1);
						unk_0x367ABC65EA3C0FDD(iLocal_1311, 4500f);
						unk_0x2099B88C16CE7D57(iLocal_1311, 1);
						func_233("ASS_VA_SNIPE2", 7500, 1);
						unk_0x10AEEB80A49DD974(uLocal_1329, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						unk_0x95158FE242BD6B8C(uLocal_1329, 0.5f);
						unk_0x1451EABCA5C5F5FA(uLocal_1329, 7f);
						unk_0x2F0C4DC7A4D75C2E(uLocal_1329, "HAND_SHAKE", 0.2f);
						unk_0x10AEEB80A49DD974(uLocal_1330, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						unk_0x95158FE242BD6B8C(uLocal_1330, 0.7f);
						unk_0x1451EABCA5C5F5FA(uLocal_1330, 10f);
						unk_0x2F0C4DC7A4D75C2E(uLocal_1330, "HAND_SHAKE", 0.2f);
						unk_0x6530B35F40F7E78B(uLocal_1330, uLocal_1329, 2000, 3, 3);
						iLocal_1193++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xA929B2923D14E2F8(iLocal_1311, 0))
			{
				if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
				{
					if (unk_0x76423F51C82ED0C8(iLocal_1311) >= 7000f)
					{
						unk_0xDD70F47E7E3A0F76(iLocal_1311);
						iLocal_1191 = 0;
						while (iLocal_1191 < 3)
						{
							if (!unk_0xA929B2923D14E2F8(uLocal_1049[iLocal_1191], 0))
							{
								if (iLocal_1191 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1191 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (unk_0x1F8F07D86DA1A701(uLocal_1049[iLocal_1191], 242628503) != 1)
								{
									unk_0x08377FB2AE4C6899(&uLocal_1323);
									unk_0x86DD54980FE55567(&uLocal_1323);
									unk_0x83150B7E65C16AFE(0, iVar0, 0);
									unk_0x084522380FECC554(0, Local_1247[iLocal_1191 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x007AE2AA9E15FA7B(uLocal_1323);
									unk_0x00E85C3B3BD34B10(uLocal_1049[iLocal_1191], uLocal_1323);
									unk_0x08377FB2AE4C6899(&uLocal_1323);
								}
							}
							iLocal_1191++;
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_1193++;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() >= 2000)
			{
				if (unk_0x1066E7A58E2A0D9D() == 4)
				{
					unk_0x10AEEB80A49DD974(uLocal_1329, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0x2F0C4DC7A4D75C2E(uLocal_1329, "HAND_SHAKE", 0.2f);
					unk_0x10AEEB80A49DD974(uLocal_1330, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0x2F0C4DC7A4D75C2E(uLocal_1330, "HAND_SHAKE", 0.2f);
					unk_0x6530B35F40F7E78B(uLocal_1330, uLocal_1329, 4000, 3, 3);
					iLocal_1216 = 4000;
				}
				else
				{
					unk_0x10AEEB80A49DD974(uLocal_1329, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					unk_0x2F0C4DC7A4D75C2E(uLocal_1329, "HAND_SHAKE", 0.2f);
					unk_0x10AEEB80A49DD974(uLocal_1330, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					unk_0x2F0C4DC7A4D75C2E(uLocal_1330, "HAND_SHAKE", 0.2f);
					unk_0x6530B35F40F7E78B(uLocal_1330, uLocal_1329, 4000, 3, 3);
					iLocal_1216 = 4000;
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1193++;
			}
			break;
		
		case 4:
			if (!iLocal_1189)
			{
				if (unk_0x1066E7A58E2A0D9D() == 4)
				{
					if (unk_0x83666F9FB8FEBD4B() >= (iLocal_1216 - 300))
					{
						unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
						unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1189 = 1;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() >= iLocal_1216)
			{
				if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
				{
					if (unk_0x72222684DEA44B9F(iLocal_1311))
					{
						unk_0x394D4A83F07AE208(iLocal_1311);
					}
				}
				unk_0xF8E2640CE709A221(102, "ASSOJva");
				unk_0xF8E2640CE709A221(107, "ASSOJva");
				unk_0xFBD8170293283E41(iLocal_1311, 1, 1);
				unk_0xFBD8170293283E41(iLocal_1311, 0, 1);
				unk_0xFBD8170293283E41(iLocal_1311, 2, 1);
				unk_0x2E2945F5602A744F(1);
				if (unk_0x1066E7A58E2A0D9D() == 4)
				{
					unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x2FCF54C709BA255D(1, 0f, 1, 0);
				}
				func_351(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_349(iLocal_382))
	{
		unk_0x2E2945F5602A744F(1);
		func_347(1);
		return 1;
	}
	return 0;
}

void func_347(bool bParam0)
{
	unk_0xBA7CD73403732191(0);
	unk_0x503F20CB07C55470(0, 1065353216);
	if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
	{
		if (unk_0x72222684DEA44B9F(iLocal_1311))
		{
			unk_0x394D4A83F07AE208(iLocal_1311);
		}
		unk_0xF8E2640CE709A221(102, "ASSOJva");
		unk_0xF8E2640CE709A221(107, "ASSOJva");
		unk_0x5DC8C2F2F8A363C2(iLocal_1311, Local_1289, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(iLocal_1311, fLocal_1219);
		unk_0xFBD8170293283E41(iLocal_1311, 0, 1);
		unk_0xFBD8170293283E41(iLocal_1311, 1, 1);
		unk_0xFBD8170293283E41(iLocal_1311, 2, 1);
		unk_0xFBD8170293283E41(iLocal_1311, 2, 1);
		iLocal_1193 = 0;
		unk_0xD12BCC85C2F8B1DE();
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		func_351(1, 1, 1);
		if (bParam0)
		{
			func_348();
		}
	}
}

void func_348()
{
	unk_0xC7845898207D067F(1000);
	while (!unk_0x30F06AB0772AFB80())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_349(int iParam0)
{
	if (func_350() && unk_0x94E3E074F38DF86C() >= iParam0 + 1000)
	{
		unk_0x50FD1894558DE186(500);
		while (!unk_0x25BD4C26D84038CD())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_211(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_350()
{
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0x4B972043966C2EB8(0, 18) || unk_0x4B972043966C2EB8(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_351(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 1, 0);
	}
	unk_0x1DE6AC35EE6430C8(1);
	func_353(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x2D28D5B324F77D2D(1);
		unk_0xE418A8E16B02C0AC(1);
	}
	func_352(23, 0);
}

void func_352(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&Global_25434, iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_25434, iParam0);
	}
}

void func_353(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_360(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_10())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_359(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_360(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_359(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_357(unk_0xBE369BE1BC57A796())) && !func_355(unk_0xBE369BE1BC57A796(), 0)) && !func_354())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_357(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_354()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_355(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_356(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_356(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_295();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_357(int iParam0)
{
	if (func_355(iParam0, 0))
	{
		return 1;
	}
	if (func_358())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_358()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_359(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_360(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

void func_361()
{
	func_362(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_369(), 1, 1, 1, 0, 0);
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
		unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 310.0126f);
	}
}

void func_362(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_363(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_363(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xC26429B504BA534D(iVar0))
		{
			unk_0xF0F77C99098F999B(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			if (bParam18)
			{
				func_368(iVar0);
			}
			if (unk_0x70A9F320A34FAC28(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_365(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("taxi")))
				{
					if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D() && unk_0x17206B315923243C(iVar0, -1, 0) != 0)
					{
						if (unk_0x3DC4639D5F23DEA2(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x57240623C1BC6E88(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_290(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_364(Param11))
				{
					if (unk_0x45CD66F0A131E554(iVar0, 0))
					{
						iVar13 = unk_0x0324EEB10F81965F(iVar0);
						unk_0x397665926E912F5B(iVar0, &Var4, &Var7);
						if (unk_0xC5082382D5482C0C(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x0668B21A0C3A4821(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x0608D50823C6AA6D(iVar0, fParam10);
						unk_0x5DC8C2F2F8A363C2(iVar0, Param7, 1, 0, 0, 1);
						unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x524A422B74847594(iVar0, 0, 1, 0);
							unk_0x016C65ED12A14D44(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xC26429B504BA534D(iVar0) || !unk_0x45CA7F42CA715849(iVar0, 1))
						{
							unk_0xF0F77C99098F999B(iVar0, 1, 1);
						}
						if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
						{
							unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x813865264334331D(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x2A5905FD3A0ED2A0(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (unk_0xC26429B504BA534D(iVar0))
					{
						unk_0x921CF98C637B0043(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xC26429B504BA534D(iVar0))
			{
				unk_0xF0F77C99098F999B(iVar0, 1, 0);
			}
			iVar14 = unk_0x17206B315923243C(iVar0, -1, 0);
			if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
			{
				unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 0, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 1, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x17206B315923243C(iVar0, 2, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x813865264334331D(&iVar0);
		}
	}
}

int func_364(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_367(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_366(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_366(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_366(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_366(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_366(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_366(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_366(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_366(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_366(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_366(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_366(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_366(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_366(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_366(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_366(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_366(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_366(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_367(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_368(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x27CB4A87DBB58E6E(iParam0) <= 200f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
			if (unk_0x1667F287C40D3CA4(iParam0) <= 700f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 900f);
			}
			if (unk_0xB5DF060B138CD2EA(iParam0) < 200)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
		}
	}
}

Vector3 func_369()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_370()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
		unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Local_1301, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 299.4985f);
	}
	if (unk_0x23E9113C762466ED(iLocal_1314))
	{
		if (unk_0x45CD66F0A131E554(iLocal_1314, 0))
		{
			unk_0x524A422B74847594(iLocal_1314, 0, 1, 0);
			unk_0x5DC8C2F2F8A363C2(iLocal_1314, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(iLocal_1314, 296.7603f);
			unk_0x482AE8C0EAF5AE07(iLocal_1314, 1084227584);
		}
	}
}

int func_371()
{
	iLocal_382 = unk_0x94E3E074F38DF86C();
	return iLocal_382;
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 0, iParam0);
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x8F088665928570EA(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 15f);
	}
	unk_0x1DE6AC35EE6430C8(iParam1);
	func_211(0);
	func_353(1, 1, iParam2, 0);
	unk_0x2D28D5B324F77D2D(0);
	unk_0xE418A8E16B02C0AC(0);
	func_352(23, 1);
}

void func_373()
{
	if (unk_0x23E9113C762466ED(iLocal_1311))
	{
		if (unk_0x45CD66F0A131E554(iLocal_1311, 0))
		{
			iLocal_1191 = 0;
			while (iLocal_1191 < 3)
			{
				if (!unk_0x23E9113C762466ED(uLocal_1049[iLocal_1191]))
				{
					if (iLocal_1191 == 0)
					{
						uLocal_1049[iLocal_1191] = unk_0x3FBC0964EB7878AF(iLocal_1311, 26, iLocal_1326, -1, 1, 1);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 0, 0, 2, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 3, 0, 0, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 4, 0, 1, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 8, 0, 0, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 11, 0, 0, 0);
					}
					else if (iLocal_1191 == 1)
					{
						uLocal_1049[iLocal_1191] = unk_0x3FBC0964EB7878AF(iLocal_1311, 26, iLocal_1326, 0, 1, 1);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 0, 1, 2, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 3, 0, 1, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 4, 0, 0, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 8, 0, 0, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 11, 0, 2, 0);
					}
					else if (iLocal_1191 == 2)
					{
						uLocal_1049[iLocal_1191] = unk_0x3FBC0964EB7878AF(iLocal_1311, 26, iLocal_1327, 1, 1, 1);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 0, 1, 2, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 3, 0, 2, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 4, 0, 1, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 8, 0, 0, 0);
						unk_0x2F933BB106547968(uLocal_1049[iLocal_1191], 11, 1, 1, 0);
					}
				}
				iLocal_1191++;
			}
		}
	}
}

void func_374()
{
	if (!unk_0x23E9113C762466ED(iLocal_1311))
	{
		iLocal_1311 = unk_0x692A2891A2BA7352(iLocal_1325, Local_1286, fLocal_1218, 1, 1);
		unk_0x924CDE68BA2ED3BA(iLocal_1325);
		unk_0xC9D9C89B7B1040E5(iLocal_1311, 1);
		unk_0x4114B83B329702FF(iLocal_1311, 1);
		unk_0x7A741FC9E2D00F7C(iLocal_1311, 1);
	}
}

void func_375(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_363(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && func_377(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iParam0, 1, 1056964608, 0, 1, 0)) && !unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || !unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!func_52(&uLocal_367))
		{
			func_50(&uLocal_367);
			if (unk_0x23E9113C762466ED(unk_0x0C00E753D78DEA62()))
			{
				iVar0 = unk_0x0C00E753D78DEA62();
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					unk_0xFAC43F40071FC184(iVar0, 0f);
				}
			}
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
		}
		else if (func_46(&uLocal_367) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_378(iParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_378(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

void func_379()
{
	int iVar0;
	
	switch (iLocal_1192)
	{
		case 0:
			func_393(500);
			func_284(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				func_233("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0x0668B21A0C3A4821(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
			iLocal_1192++;
			break;
		
		case 1:
			func_392();
			if (!unk_0x23E9113C762466ED(iLocal_1318))
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
						if (unk_0x17206B315923243C(iVar0, -1, 0) == unk_0x17B5CC8A8615737D())
						{
							iLocal_1318 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
							if (unk_0x23E9113C762466ED(iLocal_1318) && !unk_0xA929B2923D14E2F8(iLocal_1318, 0))
							{
								func_271(iLocal_1318);
							}
						}
					}
				}
			}
			if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				if (!func_389())
				{
					if (!unk_0xA3794949321E107C(uLocal_1118))
					{
						uLocal_1118 = func_388(Local_1301, 1);
						unk_0xAAF15482D9DB27D9(uLocal_1118, "ASS_VA_DESTBLIP");
						func_387(&uLocal_1118, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1132)
						{
							func_233("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1132 = 1;
						}
						else if (func_386("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0xD12BCC85C2F8B1DE();
						}
					}
				}
				else if (unk_0x3D01C3117AA19C90(uLocal_1129) && func_385())
				{
					func_384();
					func_238();
					iLocal_1030 = 8;
				}
			}
			else if (!func_389())
			{
				func_383(uLocal_1118, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_380();
			break;
	}
}

void func_380()
{
	if (!iLocal_1131)
	{
		if (func_256(Local_1301, 1) <= 100f)
		{
			func_382();
			uLocal_1129 = unk_0x0167B3B91458531B(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1131 = 1;
		}
	}
	else if (func_256(Local_1301, 1) > 120f)
	{
		if (unk_0x5EBBA0877DBAC8A8(uLocal_1129))
		{
			unk_0xF032432C4371EF58(uLocal_1129);
			func_246();
			iLocal_1131 = 0;
		}
	}
	else if (!unk_0x5EBBA0877DBAC8A8(uLocal_1129))
	{
		if (!func_381())
		{
			iLocal_1131 = 0;
		}
	}
}

int func_381()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x5AF6E4F22F4B49C3(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), joaat("taxi")))
		{
			if (unk_0x17206B315923243C(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), -1, 0) != unk_0x17B5CC8A8615737D())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_382()
{
	unk_0xE1324F59713746FA(iLocal_1326);
	unk_0xE1324F59713746FA(iLocal_1327);
}

void func_383(var uParam0, char* sParam1)
{
	if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
	{
		if (unk_0xA3794949321E107C(uParam0))
		{
			unk_0x020DF7300725ECAB(&uParam0);
			unk_0xD12BCC85C2F8B1DE();
			func_233(sParam1, 7500, 1);
		}
	}
}

void func_384()
{
	if (unk_0xA3794949321E107C(uLocal_1118))
	{
		unk_0x020DF7300725ECAB(&uLocal_1118);
	}
}

int func_385()
{
	int iVar0;
	
	func_382();
	if (unk_0x9F746898F7881612(iLocal_1326) && unk_0x9F746898F7881612(iLocal_1327))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_386(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5A99EA84320AB387(sParam0);
	if (iParam1 == 1)
	{
		unk_0x34D84D73B5DF8E80(iParam2);
	}
	return unk_0x2B886121A03F928A();
}

void func_387(var uParam0, struct<3> Param1, float fParam4)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		Global_100736 = *uParam0;
		Global_100741 = { Param1 };
		Global_100745 = fParam4;
	}
}

var func_388(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_184(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
	return uVar0;
}

int func_389()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_1044, Local_1301, 1);
	if (fVar0 < 200f)
	{
		func_391();
	}
	if (func_390())
	{
		if (unk_0x1C34CE8087E3897C(iLocal_1044, Local_1301, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) == 0)
	{
		if ((fVar0 < 2f || unk_0x1C34CE8087E3897C(iLocal_1044, Local_1301, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_390() && iVar1)
				{
					return 1;
				}
				else if (!unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_390()
{
	int iVar0;
	
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		return 0;
	}
	if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()) || unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
	{
		iLocal_1314 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		iVar0 = unk_0x0324EEB10F81965F(iLocal_1314);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1150 = true;
			return 1;
		}
	}
	return 0;
}

void func_391()
{
	var uVar0;
	
	switch (iLocal_1204)
	{
		case 0:
			unk_0xE1324F59713746FA(joaat("a_m_m_bevhills_01"));
			unk_0xE1324F59713746FA(joaat("a_f_m_bevhills_01"));
			unk_0xE1324F59713746FA(joaat("a_f_m_bevhills_02"));
			unk_0xE1324F59713746FA(joaat("a_m_y_hipster_01"));
			unk_0xE1324F59713746FA(joaat("taxi"));
			unk_0xD2EFABA17D4F41B0("OJAS_HotelTaxi01");
			unk_0xA0E7D0E8FE126EE8("oddjobs@assassinate@hotel@");
			if ((((((unk_0x9F746898F7881612(joaat("a_m_m_bevhills_01")) && unk_0x9F746898F7881612(joaat("a_f_m_bevhills_01"))) && unk_0x9F746898F7881612(joaat("a_f_m_bevhills_02"))) && unk_0x9F746898F7881612(joaat("taxi"))) && unk_0x9F746898F7881612(joaat("a_m_y_hipster_01"))) && unk_0xF4F8AE8DD0F08C1E("oddjobs@assassinate@hotel@")) && unk_0x246AF348B8F0270F("OJAS_HotelTaxi01"))
			{
				iLocal_1204++;
			}
			break;
		
		case 1:
			Local_1690[0] = unk_0x2AD5F4170F4ACBEB(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1690[1] = unk_0x2AD5F4170F4ACBEB(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			unk_0xCC61640A821F277C(Local_1690[0], 1);
			unk_0xCC61640A821F277C(Local_1690[1], 1);
			unk_0x86DD54980FE55567(&uVar0);
			unk_0x4718A774D9248520(0, Local_1690[1], -1, 0, 2);
			unk_0x0806B1CDAAB99FB4(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			unk_0x007AE2AA9E15FA7B(uVar0);
			if (!unk_0xA929B2923D14E2F8(Local_1690[0], 0))
			{
				unk_0x00E85C3B3BD34B10(Local_1690[0], uVar0);
			}
			unk_0x08377FB2AE4C6899(&uVar0);
			unk_0x86DD54980FE55567(&uVar0);
			unk_0x4718A774D9248520(0, Local_1690[0], -1, 0, 2);
			unk_0x0806B1CDAAB99FB4(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			unk_0x007AE2AA9E15FA7B(uVar0);
			if (!unk_0xA929B2923D14E2F8(Local_1690[1], 0))
			{
				unk_0x00E85C3B3BD34B10(Local_1690[1], uVar0);
			}
			unk_0x08377FB2AE4C6899(&uVar0);
			Local_1690.f_4 = unk_0x692A2891A2BA7352(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1);
			unk_0x482AE8C0EAF5AE07(Local_1690.f_4, 1084227584);
			Local_1690.f_3 = unk_0x3FBC0964EB7878AF(Local_1690.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			unk_0xCC61640A821F277C(Local_1690.f_3, 1);
			unk_0x4718A774D9248520(Local_1690.f_3, Local_1690[0], -1, 0, 2);
			Local_1690.f_8[0] = unk_0x2AD5F4170F4ACBEB(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1690.f_8[1] = unk_0x2AD5F4170F4ACBEB(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			unk_0xCC61640A821F277C(Local_1690.f_8[0], 1);
			unk_0xCC61640A821F277C(Local_1690.f_8[1], 1);
			unk_0xEB1EFACA68933402(Local_1690.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xEB1EFACA68933402(Local_1690.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1690.f_5[0] = unk_0x2AD5F4170F4ACBEB(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1690.f_5[1] = unk_0x2AD5F4170F4ACBEB(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			unk_0xCC61640A821F277C(Local_1690.f_5[0], 1);
			unk_0xCC61640A821F277C(Local_1690.f_5[1], 1);
			unk_0xEB1EFACA68933402(Local_1690.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xEB1EFACA68933402(Local_1690.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1690.f_11 = 1;
			unk_0x924CDE68BA2ED3BA(joaat("a_m_m_bevhills_01"));
			unk_0x924CDE68BA2ED3BA(joaat("a_f_m_bevhills_01"));
			unk_0x924CDE68BA2ED3BA(joaat("a_f_m_bevhills_02"));
			unk_0x924CDE68BA2ED3BA(joaat("a_m_y_hipster_01"));
			unk_0x924CDE68BA2ED3BA(joaat("taxi"));
			iLocal_1204++;
			break;
		
		case 2:
			break;
	}
}

void func_392()
{
	struct<3> Var0;
	
	if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
	{
		iLocal_1185 = 1;
		return;
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	if (iLocal_1185)
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			fLocal_1244 = unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_1301);
			iLocal_1185 = 0;
		}
	}
	else if (fLocal_1244 == 0f)
	{
		fLocal_1244 = unk_0x2A488C176D52CCA5(-1510.291f, -946.9932f, 8.278f, Local_1301);
	}
	if (unk_0x2A488C176D52CCA5(Var0, Local_1301) > (fLocal_1244 + 400f))
	{
		func_31(7);
	}
	else if (unk_0x2A488C176D52CCA5(Var0, Local_1301) > (fLocal_1244 + 200f))
	{
		if (!iLocal_1181)
		{
			func_233("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1181 = 1;
		}
	}
}

void func_393(int iParam0)
{
	if (!unk_0x30F06AB0772AFB80())
	{
		unk_0xC7845898207D067F(iParam0);
		while (!unk_0x30F06AB0772AFB80())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_394()
{
	var uVar0;
	float fVar1;
	
	if (unk_0x23E9113C762466ED(iLocal_1057))
	{
		func_399();
		if (!unk_0xCA41A00932714525(iLocal_1057))
		{
			fVar1 = func_23(iLocal_1057, 1);
			unk_0xFB616ABA635A95B3(iLocal_1057, 0);
			unk_0xEABCB9D3B3CDC77E(iLocal_1057, 0);
			unk_0x6F65279C9BC14EDB(iLocal_1057, 0);
			unk_0xBC2A4F3CEAB33199(iLocal_1057, 16);
			unk_0x6018E338F7ABCE75(iLocal_1057, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_52(&uLocal_1356))
				{
					if (!func_22())
					{
						if (func_396(&uLocal_1356, 10f))
						{
							func_29(&uLocal_1363, 3, iLocal_1057, "LESTER", 0, 1);
							func_6(&uLocal_1363, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0xF6563E19EDE84B8C(iLocal_1057) || !unk_0x1DCFA79E268F3EE5(iLocal_1057))
				{
					func_395();
				}
			}
			switch (iLocal_1190)
			{
				case 0:
					if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
					{
						if ((unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()) || (unk_0x23E9113C762466ED(iLocal_1057) && unk_0xC017443DBE6DA4D6(iLocal_1057, unk_0x17B5CC8A8615737D(), 1))) || unk_0xC017443DBE6DA4D6(iLocal_1689, unk_0x17B5CC8A8615737D(), 1))
						{
							if (unk_0xC017443DBE6DA4D6(iLocal_1689, unk_0x17B5CC8A8615737D(), 1))
							{
							}
							unk_0x64A85DB6D037D644(iLocal_1057, "move_lester_CaneUp", 1048576000);
							unk_0xEB1EFACA68933402(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1190 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x5132972D2BBC5A62(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0x8E978F99E8F731CB(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							unk_0x86DD54980FE55567(&uVar0);
							unk_0x084522380FECC554(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0x084522380FECC554(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0x401B18D8E7BEEC86(0, unk_0x638527C9799F2AE4(iLocal_1057), 0);
							unk_0x007AE2AA9E15FA7B(uVar0);
							unk_0x00E85C3B3BD34B10(iLocal_1057, uVar0);
							unk_0x08377FB2AE4C6899(&uVar0);
							unk_0x44B1CF13D39D96CE(iLocal_1057, joaat("MotionState_Walk"), 0, 0, 0);
							iLocal_1190 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_395()
{
	if (unk_0x23E9113C762466ED(iLocal_1057))
	{
		unk_0x478AE709A466CB7E(&iLocal_1057);
	}
}

int func_396(var uParam0, float fParam1)
{
	if (func_398(uParam0, fParam1))
	{
		func_397(uParam0);
		return 1;
	}
	return 0;
}

void func_397(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_398(var uParam0, float fParam1)
{
	if (func_52(uParam0))
	{
		if (func_46(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_399()
{
	if (unk_0x23E9113C762466ED(iLocal_1057))
	{
		if (unk_0xC017443DBE6DA4D6(iLocal_1057, unk_0x17B5CC8A8615737D(), 1))
		{
			func_31(9);
		}
	}
}

void func_400()
{
	unk_0x5BE53482EFD49141("ASS1_STOP");
	if (!unk_0x48B8265059381CD0(Global_91491.f_20, 13))
	{
		func_475();
	}
	func_401(0, -1, 1);
	unk_0xBA7CD73403732191(0);
	unk_0x503F20CB07C55470(0, 1065353216);
	iLocal_1030 = 18;
	func_393(500);
}

void func_401(int iParam0, int iParam1, int iParam2)
{
	if (func_482() && func_403())
	{
		while (Global_91486 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD278B72A700DC2DC(0);
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x76956C8D11F030FD(unk_0x17B5CC8A8615737D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x23E9113C762466ED(iParam0))
				{
					if (unk_0x45CD66F0A131E554(iParam0, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam0, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iParam0, iParam1);
							unk_0x503F20CB07C55470(0f, 1065353216);
							unk_0xBA7CD73403732191(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			}
		}
		unk_0xACBDD7C9D459A6D9();
		func_402(0);
	}
}

void func_402(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 13);
	}
}

bool func_403()
{
	return unk_0x48B8265059381CD0(Global_91491.f_20, 13);
}

void func_404()
{
	while (iLocal_1204 < 2)
	{
		func_391();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_374();
	func_347(0);
	if (!unk_0x48B8265059381CD0(Global_91491.f_20, 13))
	{
		func_475();
	}
	iLocal_1159 = 0;
	iLocal_1183 = 0;
	unk_0x0668B21A0C3A4821(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
	unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
	unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
	unk_0x5BE53482EFD49141("ASS1_RESTART1");
	while (!func_385())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_401(0, -1, 1);
	unk_0xBA7CD73403732191(0);
	unk_0x503F20CB07C55470(0, 1065353216);
	iLocal_1030 = 9;
	func_393(500);
}

void func_405()
{
	func_401(0, -1, 1);
	unk_0xBA7CD73403732191(0);
	unk_0x503F20CB07C55470(0, 1065353216);
	func_393(500);
	iLocal_1030 = 7;
}

void func_406()
{
	uLocal_1315[0] = unk_0x692A2891A2BA7352(iLocal_1328, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1);
	uLocal_1315[1] = unk_0x692A2891A2BA7352(iLocal_1328, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1);
}

void func_407()
{
	uLocal_1329 = unk_0x077CBD2E7E281022(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1330 = unk_0x077CBD2E7E281022(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_408()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0x9F746898F7881612(iLocal_1325) && unk_0x9F746898F7881612(iLocal_1328)) && unk_0x63781672EC63FB83(102, "ASSOJva")) && unk_0x63781672EC63FB83(107, "ASSOJva")) && unk_0x246AF348B8F0270F("OJASva_101")) && unk_0x246AF348B8F0270F("OJASva_101a")) && unk_0x246AF348B8F0270F("OJASva_104")) && unk_0xF4F8AE8DD0F08C1E("ODDJOBS@ASSASSINATE@GUARD")) && unk_0xF4F8AE8DD0F08C1E("oddjobs@assassinate@hotel@")) && unk_0x657558590DD37F85(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_409()
{
	unk_0xE1324F59713746FA(iLocal_1325);
	unk_0xE1324F59713746FA(iLocal_1328);
	unk_0xA0E7D0E8FE126EE8("ODDJOBS@ASSASSINATE@GUARD");
	unk_0xA0E7D0E8FE126EE8("oddjobs@assassinate@hotel@");
	unk_0xA73AE78D2491E6E1("ASS_VA", 3);
	unk_0xF5B59A4EB5622187(102, "ASSOJva");
	unk_0xF5B59A4EB5622187(107, "ASSOJva");
	unk_0xD2EFABA17D4F41B0("OJASva_101");
	unk_0xD2EFABA17D4F41B0("OJASva_101a");
	unk_0xD2EFABA17D4F41B0("OJASva_104");
}

void func_410(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB82FD68B5DE68F01(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		unk_0xE6FC8C18754D8C2D(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		unk_0xB82FD68B5DE68F01(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		unk_0xE7281B4166C6A4CD(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_411()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.658f, -222.0533f, 41.446f };
	func_29(&uLocal_1363, 1, iLocal_1044, "FRANKLIN", 0, 1);
	unk_0x000E46314C3A507F(0.2f);
	unk_0x1EF7A8224AE81790("Guards", &iLocal_1331);
	unk_0xDE574EA7A7A2CAF8(1, joaat("COP"), iLocal_1331);
	unk_0xDE574EA7A7A2CAF8(1, iLocal_1331, joaat("COP"));
	unk_0xDE574EA7A7A2CAF8(5, iLocal_1331, joaat("player"));
	unk_0xDE574EA7A7A2CAF8(5, joaat("player"), iLocal_1331);
	unk_0x1B60289D0F2A2E3C(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	unk_0xB57996B091C5D677(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_1127 = unk_0xD1D19967E553E144(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_1128 = unk_0xD1D19967E553E144(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_412()
{
	StringCopy(&Local_964, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_964.f_6), {Global_55837}, 6);
	StringCopy(&(Local_964.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_964.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_964.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_964.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_964.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_964.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_964.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_964.f_54), "ASS_VA_COMP", 24);
}

void func_413()
{
	Local_1283 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1232 = 260.3612f;
	Local_1286 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1218 = 96.8755f;
	Local_1289 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1219 = 201.0763f;
	fLocal_1233 = 40f;
	Local_360.f_2 = 40f;
	Local_1247[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	Local_1247[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	Local_1247[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1234[0] = 157.3177f;
	fLocal_1234[1] = 58.3594f;
	fLocal_1234[2] = 65.6443f;
	Local_1267[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	Local_1267[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1267[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	Local_1267[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	Local_1267[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1220[0] = 160.0748f;
	fLocal_1220[1] = 58.3365f;
	fLocal_1220[2] = 58.0214f;
	fLocal_1220[3] = 97.6664f;
	fLocal_1220[4] = 225.8689f;
	iLocal_1191 = 0;
	while (iLocal_1191 <= 4)
	{
		uLocal_1226[iLocal_1191] = unk_0x6B1497B2FDBC8466(0f, 2f);
		iLocal_1191++;
	}
	fLocal_373 = 7000f;
	fLocal_374 = 2000f;
	iLocal_1043 = 0;
	iLocal_1179 = 0;
	bLocal_1180 = false;
	iLocal_1165 = 0;
	bLocal_1188 = false;
	iLocal_1187 = 0;
}

void func_414()
{
	switch (iLocal_1192)
	{
		case 0:
			unk_0xF7CF05FEB40E538B("ASS_INT_2_ALT1", 8);
			unk_0xE1324F59713746FA(joaat("ig_lestercrest"));
			unk_0xE1324F59713746FA(joaat("prop_cs_walking_stick"));
			unk_0xA0E7D0E8FE126EE8("oddjobs@assassinate@hotel@leadin");
			unk_0xA0E7D0E8FE126EE8("oddjobs@assassinate@hotel@leaning@");
			unk_0xFD2E59A7CCE66AB3("move_lester_CaneUp");
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			if ((((unk_0x9F746898F7881612(joaat("ig_lestercrest")) && unk_0x9F746898F7881612(joaat("prop_cs_walking_stick"))) && unk_0xF4F8AE8DD0F08C1E("oddjobs@assassinate@hotel@leadin")) && unk_0xF4F8AE8DD0F08C1E("oddjobs@assassinate@hotel@leaning@")) && unk_0x69EB2CB272E0AD5D("move_lester_CaneUp"))
			{
				iLocal_1192++;
			}
			break;
		
		case 1:
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				func_372(56, 0, 1);
				func_375(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				unk_0x1B60289D0F2A2E3C(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Local_1668, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), fLocal_1671);
				unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
				unk_0xEB1EFACA68933402(unk_0x17B5CC8A8615737D(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0x0F1BF24ED3B7ED40(uLocal_1672))
				{
					uLocal_1672 = unk_0x077CBD2E7E281022(26379945, Local_1674, Local_1677, 42.2032f, 1, 2);
					unk_0x2F0C4DC7A4D75C2E(uLocal_1672, "HAND_SHAKE", 0.3f);
				}
				if (!unk_0x0F1BF24ED3B7ED40(uLocal_1673))
				{
					uLocal_1673 = unk_0x077CBD2E7E281022(26379945, Local_1680, Local_1683, 42.2032f, 0, 2);
					unk_0x6530B35F40F7E78B(uLocal_1673, uLocal_1672, 5000, 1, 1);
					unk_0x2F0C4DC7A4D75C2E(uLocal_1672, "HAND_SHAKE", 0.3f);
				}
				unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
				if (func_40(0))
				{
					unk_0xC7845898207D067F(800);
				}
				iLocal_1192++;
			}
			break;
		
		case 2:
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&uLocal_1686))
					{
						func_49(&uLocal_1686);
					}
				}
				if (func_52(&uLocal_1686))
				{
					if (func_46(&uLocal_1686) > 6f)
					{
						iLocal_1192++;
					}
				}
			}
			break;
		
		case 3:
			if (func_415())
			{
				iLocal_1192++;
			}
			break;
		
		case 4:
			func_353(1, 1, 1, 0);
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0xD9C496FEAA81FF4A(unk_0x17B5CC8A8615737D(), "Franklin", 0, 0, 0);
			}
			unk_0xD9C496FEAA81FF4A(iLocal_1057, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0xD9C496FEAA81FF4A(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0x51C344BE3DCB5CB5(0);
			unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			iLocal_1192++;
			break;
		
		case 5:
			if (unk_0x1B76B77EDF24A933())
			{
				unk_0xA5E21BA8D7CE03D8(0);
				unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				iLocal_1192++;
			}
			break;
		
		case 6:
			if (unk_0xAB01297DD4A8577F())
			{
				unk_0x72B6EAB729050F5B(0);
			}
			if (!unk_0x23E9113C762466ED(iLocal_1057))
			{
				if (unk_0xBE4F136952F476D5("Lester", 0))
				{
					if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375("Lester", 0)))
					{
						iLocal_1057 = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375("Lester", 0));
					}
				}
			}
			if (!unk_0x23E9113C762466ED(iLocal_1058))
			{
				if (unk_0xBE4F136952F476D5("WalkingStick_Lester", 0))
				{
					if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375("WalkingStick_Lester", 0)))
					{
						iLocal_1058 = unk_0x6DFA780BD6E87375("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0xBA7CD73403732191(0);
			unk_0x503F20CB07C55470(0, 1065353216);
			if (unk_0x649012AFAC9B7CD0("Franklin", 0))
			{
			}
			if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375("Lester", 0)))
			{
				if (unk_0x649012AFAC9B7CD0("Lester", 0))
				{
					if (unk_0x23E9113C762466ED(iLocal_1057) && !unk_0xCA41A00932714525(iLocal_1057))
					{
						unk_0x5DC8C2F2F8A363C2(iLocal_1057, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						unk_0x0608D50823C6AA6D(iLocal_1057, -11f);
						unk_0xEB1EFACA68933402(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0xDEAF24B058321A05(iLocal_1057, 0, 0);
					}
				}
			}
			if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375("Lester", 0)))
			{
				if (unk_0x649012AFAC9B7CD0("WalkingStick_Lester", 0))
				{
					if (unk_0x23E9113C762466ED(iLocal_1057) && !unk_0xCA41A00932714525(iLocal_1057))
					{
						unk_0x593C85206F061E3E(iLocal_1058, iLocal_1057, unk_0x0FC45085FB4E85B8(iLocal_1057, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (unk_0xB116D5E6F24B8406() && !unk_0x1B76B77EDF24A933())
			{
				func_353(0, 1, 1, 0);
				if (!unk_0xCA41A00932714525(iLocal_1057))
				{
					unk_0x4C44C1A3160350E2(iLocal_1057, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x78F48B47DB1C3316(iLocal_1057, 1);
				}
				unk_0xBA7CD73403732191(0);
				unk_0x503F20CB07C55470(0, 1065353216);
				if (unk_0x25BD4C26D84038CD())
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0xC7845898207D067F(500);
				}
				func_351(1, 1, 1);
				iLocal_1192++;
			}
			break;
		
		case 7:
			func_50(&uLocal_1356);
			func_238();
			iLocal_1030 = 4;
			break;
	}
}

bool func_415()
{
	bool bVar0;
	
	bVar0 = unk_0x77888DFE5B94E7E5();
	if (!Global_69701)
	{
		if (!bVar0)
		{
			Global_69701 = 1;
		}
	}
	return bVar0;
}

void func_416()
{
	if (!unk_0x23E9113C762466ED(iLocal_1689))
	{
		iLocal_1689 = unk_0x29280EF6724677F5(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_417()
{
	int iVar0;
	
	if (iLocal_1030 > 7)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				iVar0 = unk_0xA9C8EAA15373F456();
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (unk_0x45CD66F0A131E554(iVar0, 0))
					{
						if ((iVar0 != iLocal_1319[0] && iVar0 != iLocal_1319[1]) && iVar0 != iLocal_1319[2])
						{
							if (iLocal_1215 >= 2)
							{
								iLocal_1215 = -1;
							}
							iLocal_1319[iLocal_1215 + 1] = iVar0;
							unk_0xF0F77C99098F999B(iLocal_1319[iLocal_1215 + 1], 1, 0);
							unk_0xB4E2D258BC1E3E4A(iLocal_1319[iLocal_1215 + 1], 0);
							iLocal_1215++;
						}
					}
				}
			}
		}
	}
}

void func_418()
{
	int iVar0;
	
	if (iLocal_1177)
	{
		iVar0 = func_30(1116471296, 1);
		if (!unk_0xCA41A00932714525(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1363, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_419()
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1690.f_11)
	{
		if (!bLocal_1168)
		{
			if (iLocal_1030 < 10)
			{
				if (func_425())
				{
					iVar0 = func_30(1116471296, 1);
					if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(iVar0, 0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
							Var1 = { Var1 };
							func_29(&uLocal_1363, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1363, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_424();
					bLocal_1168 = true;
				}
				if (iLocal_1133)
				{
					func_424();
					bLocal_1168 = true;
				}
				else
				{
					func_423();
					func_420();
				}
			}
		}
	}
}

void func_420()
{
	if (bLocal_1139)
	{
		if (IntToFloat(iLocal_1212) < (IntToFloat(iLocal_1209) - 5f))
		{
			func_422(Local_1690.f_8[0], 1);
			func_422(Local_1690.f_8[1], 1);
			func_422(Local_1690.f_5[0], 1);
			func_422(Local_1690.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1690.f_8[0], 0) < 1f || func_23(Local_1690.f_8[1], 0) < 1f) || iLocal_1137)
			{
				func_421(Local_1690.f_8[0], 1);
				func_421(Local_1690.f_8[1], 1);
			}
			if (!iLocal_1137)
			{
				func_421(Local_1690.f_5[0], 0);
				func_421(Local_1690.f_5[1], 0);
			}
			else
			{
				func_421(Local_1690.f_5[0], 1);
				func_421(Local_1690.f_5[1], 1);
			}
		}
	}
}

void func_421(int iParam0, int iParam1)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0x1F8F07D86DA1A701(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_422(iParam0, 1);
			}
		}
	}
}

void func_422(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if ((bParam1 && unk_0x1F8F07D86DA1A701(iParam0, 242628503) != 1) || !bParam1)
		{
			unk_0x86DD54980FE55567(&uVar0);
			unk_0x26AB82CDFC655AC9(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
			unk_0x007AE2AA9E15FA7B(uVar0);
			unk_0x00E85C3B3BD34B10(iParam0, uVar0);
			unk_0x08377FB2AE4C6899(&uVar0);
		}
	}
}

void func_423()
{
	int iVar0;
	
	switch (iLocal_1205)
	{
		case 0:
			if (((iLocal_1153 || iLocal_1137) || func_23(Local_1690[0], 0) < 1f) || func_23(Local_1690[1], 0) < 1f)
			{
				if (!unk_0xA929B2923D14E2F8(Local_1690[0], 0) && !unk_0xA929B2923D14E2F8(Local_1690[1], 0))
				{
					unk_0x4718A774D9248520(Local_1690[0], Local_1690[1], -1, 0, 2);
					unk_0x4718A774D9248520(Local_1690[1], Local_1690[0], -1, 0, 2);
				}
				if (((unk_0x23E9113C762466ED(Local_1690[1]) && unk_0x23E9113C762466ED(Local_1690.f_4)) && !unk_0xCA41A00932714525(Local_1690[1])) && unk_0x45CD66F0A131E554(Local_1690.f_4, 0))
				{
					unk_0x15848523A8959DBC(Local_1690[1]);
					unk_0x3AD5401AC8DD9226(Local_1690[1], Local_1690.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&uLocal_1347))
				{
					func_49(&uLocal_1347);
				}
				iLocal_1205++;
			}
			break;
		
		case 1:
			if (!iLocal_1173)
			{
				if (func_52(&uLocal_1347))
				{
					if (func_46(&uLocal_1347) > 3f)
					{
						if (((unk_0x23E9113C762466ED(Local_1690[0]) && unk_0x23E9113C762466ED(Local_1690.f_4)) && !unk_0xCA41A00932714525(Local_1690[0])) && unk_0x45CD66F0A131E554(Local_1690.f_4, 0))
						{
							if (unk_0x1F8F07D86DA1A701(Local_1690[0], -1794415470) != 1)
							{
								unk_0x15848523A8959DBC(Local_1690[0]);
								unk_0x3AD5401AC8DD9226(Local_1690[0], Local_1690.f_4, 20000, 1, 1f, 1, 0);
								iLocal_1173 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&uLocal_1347);
				}
			}
			if (!unk_0xCA41A00932714525(Local_1690[0]) && !unk_0xCA41A00932714525(Local_1690[1]))
			{
				if (unk_0x2315BB1606BC3DC3(Local_1690[0], Local_1690.f_4, 0) && unk_0x2315BB1606BC3DC3(Local_1690[1], Local_1690.f_4, 0))
				{
					if (!unk_0xA929B2923D14E2F8(Local_1690.f_3, 0) && !unk_0xA929B2923D14E2F8(Local_1690.f_4, 0))
					{
						unk_0xEF9294ED57E4AC3D(Local_1690.f_3);
						func_50(&uLocal_1347);
					}
					iLocal_1205++;
				}
			}
			break;
		
		case 2:
			if (func_52(&uLocal_1347))
			{
				if (func_46(&uLocal_1347) > 3f)
				{
					if (!unk_0xCA41A00932714525(Local_1690.f_3) && unk_0x45CD66F0A131E554(Local_1690.f_4, 0))
					{
						unk_0xAD1391A0485EA6BA(Local_1690.f_3, Local_1690.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1205++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xA929B2923D14E2F8(Local_1690.f_3, 0) && !unk_0xA929B2923D14E2F8(Local_1690.f_4, 0))
			{
				if (!unk_0xA269031A4ECAE4FA(Local_1690.f_4) || iLocal_1176)
				{
					unk_0x9178B6CFE95D27C6(Local_1690.f_3, Local_1690.f_4, 10f, 786603);
					iLocal_1205++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1176)
			{
				if (!unk_0xCA41A00932714525(uLocal_1053[0]))
				{
					iVar0 = uLocal_1053[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (!unk_0xCA41A00932714525(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1363, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&uLocal_1347);
				iLocal_1205++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_424()
{
	if ((unk_0x23E9113C762466ED(Local_1690.f_3) && !unk_0xA929B2923D14E2F8(Local_1690.f_3, 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690.f_3, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
	}
	if ((unk_0x23E9113C762466ED(Local_1690[0]) && !unk_0xA929B2923D14E2F8(Local_1690[0], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690[0], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
		unk_0xB195EE9DB37DA7F2(Local_1690[0], 2, 0);
	}
	if ((unk_0x23E9113C762466ED(Local_1690[1]) && !unk_0xA929B2923D14E2F8(Local_1690[1], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690[1], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
		unk_0xB195EE9DB37DA7F2(Local_1690[1], 2, 0);
	}
	if ((unk_0x23E9113C762466ED(Local_1690.f_8[0]) && !unk_0xA929B2923D14E2F8(Local_1690.f_8[0], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690.f_8[0], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
	}
	if ((unk_0x23E9113C762466ED(Local_1690.f_8[1]) && !unk_0xA929B2923D14E2F8(Local_1690.f_8[1], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690.f_8[1], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
	}
	if ((unk_0x23E9113C762466ED(Local_1690.f_5[0]) && !unk_0xA929B2923D14E2F8(Local_1690.f_5[0], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690.f_5[0], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
	}
	if ((unk_0x23E9113C762466ED(Local_1690.f_5[1]) && !unk_0xA929B2923D14E2F8(Local_1690.f_5[1], 0)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xCA58071CE9CCE891(Local_1690.f_5[1], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
	}
}

int func_425()
{
	if (!unk_0xA929B2923D14E2F8(Local_1690.f_3, 0))
	{
		if (unk_0x4FF557C7B233F003(Local_1690.f_3))
		{
			if (unk_0xFFE01300722A85E9(Local_1690.f_3) == unk_0x17B5CC8A8615737D())
			{
				return 1;
			}
		}
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xA929B2923D14E2F8(Local_1690.f_4, 0))
	{
		if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_1690.f_4, 0))
		{
			return 1;
		}
	}
	if (func_105(Local_1690[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1690[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1690.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1690.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1690.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1690.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_104(Local_1690.f_4))
	{
		return 1;
	}
	if (unk_0x3C04DDC5730997E5(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_426()
{
	func_483();
}

int func_427()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91491 == 7 || Global_91491 == 8)
	{
		return 1;
	}
	return 0;
}

void func_428(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_482())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 2);
		unk_0xD278B72A700DC2DC(1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
		}
		Global_91487 = { Param0 };
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 14);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 24);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 24);
		}
		func_402(1);
	}
}

int func_429(struct<3> Param0, float fParam3)
{
	return func_430(&(Global_96040.f_2311), Param0, fParam3, 0);
}

int func_430(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_471(uParam0))
	{
		if (func_44(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x3D559A6AF62756C4(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_470(uParam0))
		{
			unk_0x1B60289D0F2A2E3C(Param1, 5f, 1, 0, 0, 0);
			func_469(Param1, 5f, 0);
			iVar0 = unk_0x692A2891A2BA7352(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x23E9113C762466ED(iVar0))
			{
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x394AE1BE8F25AC5B(iVar0, Param1, 0, 0, 1);
				}
				func_461(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xA55B002FED5A9858(uParam0->f_12.f_66) || unk_0x94AB8F7D4254DDDE(uParam0->f_12.f_66))
				{
					if (!unk_0x9BD6D9E34A208484(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_460(uParam0->f_11, 1);
						}
						else if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_460(uParam0->f_11, 2);
						}
					}
					unk_0xB7A086F89FD711C4(iVar0, 0);
					unk_0x0F2AE8B51289309C(iVar0, 0);
					unk_0x2B9B4DCEF80D1566(iVar0, 1);
					func_459(iVar0, uParam0->f_11);
				}
				else if ((!func_456(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x6A7B0D91FD88D9EE(unk_0x6AF6B39BFDB53CB5(), "startup_positioning"))
				{
					iVar8 = func_455(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_450(iVar8);
					}
				}
				if (((Global_91491 != 13 && Global_91491 != 10) && Global_91491 != 11) && Global_91491 != 12)
				{
					if (unk_0x765F5B806B517045(&(Global_91491.f_3)) == Global_69519)
					{
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66)
						{
							func_447(24, 0);
							func_450(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_431(iVar0, uParam0->f_11);
				}
				unk_0x924CDE68BA2ED3BA(uParam0->f_12.f_66);
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_431(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_432(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_280(iParam0, &(Global_101700.f_31389.f_5510));
}

int func_432(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_290(iParam0, 0, 0)) || func_290(iParam0, 1, 0)) || func_290(iParam0, 2, 0)) || func_276(iParam0) != 145) || func_446(iParam0)) || func_445(iParam0)) || func_444(iParam0)) || func_443(iParam0)) || !func_433(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_445(iParam0))
		{
		}
		if (func_445(iParam0))
		{
		}
		if (func_290(iParam0, 0, 0))
		{
		}
		if (func_290(iParam0, 1, 0))
		{
		}
		if (func_290(iParam0, 2, 0))
		{
		}
		if (func_276(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_433(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_434(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_434(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_442())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_441() && !func_440()) && !func_439()) && !func_438()) && !func_442())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_439())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_437(iParam0))
		{
			return 0;
		}
	}
	if (!func_435(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_435(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_436())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_436()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_438()
{
	return 0;
}

int func_439()
{
	return 1;
}

int func_440()
{
	return 1;
}

int func_441()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_442()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	uVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_434(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_445(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_447(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_449(iParam0, 0))
		{
			func_448(iParam0, 1, 0);
			func_448(iParam0, 2, 0);
			func_448(iParam0, 3, 0);
			func_448(iParam0, 4, 0);
			func_448(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else
	{
		func_448(iParam0, 0, 0);
	}
}

void func_448(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_31389[iParam0]), iParam1);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_31389[iParam0]), iParam1);
	}
}

bool func_449(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_101700.f_31389[iParam0], iParam1);
}

void func_450(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_454(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x45CD66F0A131E554(Global_68531.f_139[iParam0], 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Global_68531.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xF0F77C99098F999B(Global_68531.f_139[iParam0], 1, 1);
				unk_0x813865264334331D(&(Global_68531.f_139[iParam0]));
			}
		}
		Global_68531[iParam0] = 1;
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_449(iParam0, 0)) && Global_69440.f_66 == 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3) && (!func_452(0, Global_68531.f_555[0 /*21*/].f_12) || !func_452(1, Global_68531.f_555[0 /*21*/].f_12)))
			{
				func_451(&(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]), &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_447(iParam0, 0);
		}
	}
}

void func_451(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_452(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_453(&(Global_101700.f_31389.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_434(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_453(var uParam0)
{
	return *uParam0;
}

int func_454(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_278(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_278(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_278(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_278(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_278(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_278(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_278(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_278(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_278(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_442())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_442())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_44(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 19))
	{
		if (!func_44(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x48B8265059381CD0(uParam0->f_9, 20))
	{
		if (!func_44(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]) && !unk_0xA929B2923D14E2F8(Global_68531.f_484[iVar0], 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[iVar0], 0))
		{
			unk_0x3C5D9FD265196560(uParam0, &iVar1, &iVar2);
			unk_0x3C5D9FD265196560(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x0324EEB10F81965F(iParam0) == unk_0x0324EEB10F81965F(Global_68531.f_484[iVar0]) && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_456(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x0324EEB10F81965F(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_458(iParam0, Global_68531.f_139[38], 0))
			{
				func_450(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_458(iParam0, Global_68531.f_139[43], 1))
			{
				func_450(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_458(iParam0, uVar1[iVar6], 1) && func_457(unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_44(Param1, 0f, 0f, 0f, 0)) || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x813865264334331D(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[14]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[14], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[14]) == joaat("luxor2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[14]))
				{
					func_450(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[20]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[20], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[20]) == joaat("swift2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[20]))
				{
					func_450(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_457(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_458(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x23E9113C762466ED(uParam1) && !unk_0xA929B2923D14E2F8(iParam1, 0)) && unk_0x45CD66F0A131E554(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x3C5D9FD265196560(uParam0, &iVar0, &iVar1);
			unk_0x3C5D9FD265196560(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			Global_89155[iVar0] = uParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = unk_0x0324EEB10F81965F(uParam0);
			if (unk_0xC2AFD5CFEDC8F22A(Global_89175[iVar0]))
			{
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x0324EEB10F81965F(Global_89155[iVar0]) == func_278(iParam0, iParam1))
				{
					if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Global_89155[iVar0], 0))
					{
						unk_0xF0F77C99098F999B(Global_89155[iVar0], 0, 1);
						unk_0x813865264334331D(&(Global_89155[iVar0]));
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_461(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(uParam0, 0))
	{
		if (unk_0x765F5B806B517045(&(uParam1->f_1)) != 0)
		{
			unk_0xBFA6D869BA395202(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x65787AE258BCF6F8())
		{
			unk_0xE0B7A718D08DF2B6(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_281(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_281(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_281(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_281(iVar1 + 1));
			}
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 13))
		{
			unk_0x9DD4A7AF83B5A817(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xCE1BE7835278AA2B(iParam0);
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 12))
		{
			unk_0x2C6350FBF2D740F9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA53583755F423DE9(iParam0);
		}
		unk_0x357EE036FE09513D(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB9A1BA07F229F6AC(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x48B8265059381CD0(uParam1->f_77, 15) || func_468(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_467())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xF487CED93F263DA0(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xA3C6B7F3E39994ED(iParam0, 0);
		}
		else
		{
			unk_0xA3C6B7F3E39994ED(iParam0, 0);
			unk_0xA3C6B7F3E39994ED(iParam0, uParam1->f_65);
		}
		unk_0x5DED87DD8464517B(iParam0, !unk_0x48B8265059381CD0(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD602D152E57C823D(iParam0, uParam1->f_70);
		}
		unk_0x4EC6390E64BE867C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x0C93CB3C1E004C79(iParam0, 2, unk_0x48B8265059381CD0(uParam1->f_77, 28));
		unk_0x0C93CB3C1E004C79(iParam0, 3, unk_0x48B8265059381CD0(uParam1->f_77, 29));
		unk_0x0C93CB3C1E004C79(iParam0, 0, unk_0x48B8265059381CD0(uParam1->f_77, 30));
		unk_0x0C93CB3C1E004C79(iParam0, 1, unk_0x48B8265059381CD0(uParam1->f_77, 31));
		unk_0xBE993A95A7771E1E(iParam0, unk_0x48B8265059381CD0(uParam1->f_77, 10));
		if (unk_0xD374022FAFC7605F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x866129976ECB1FB9(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(iParam0)))
			{
				if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_466(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_466(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xE4D316C82D08E63D(iParam0, 1);
			}
			else
			{
				unk_0x63677FA149BCF42B(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_462(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xC5082382D5482C0C(uParam1->f_66) && !unk_0xA55B002FED5A9858(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, func_281(iVar2 + 1)))
				{
					if (!unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
					{
						unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
				{
					unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x0324EEB10F81965F(iParam0) == joaat("sheava") || unk_0x0324EEB10F81965F(iParam0) == joaat("omnis")) || unk_0x0324EEB10F81965F(iParam0) == joaat("le7b"))
		{
			if (unk_0x68BE46B0EA4FCFAF(iParam0, 0) == -1)
			{
				unk_0x70888C5F297D3D80(iParam0, 1, 0);
			}
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (!unk_0x48B8265059381CD0(uParam1->f_77, 23))
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, 22))
				{
					unk_0x2F18827C60FB4AD8(iParam0, 2);
				}
				else
				{
					unk_0x2F18827C60FB4AD8(iParam0, 3);
				}
			}
			else
			{
				unk_0x2F18827C60FB4AD8(iParam0, 4);
			}
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 27))
		{
			unk_0x6717F72244C0D24C(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6717F72244C0D24C(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_462(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x5991FAEA924B5EE0(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xA6EBC11A2C89D4A1(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68BE46B0EA4FCFAF(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x8762285499CFD42B(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xE8BE9EFA248A9414(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xE8BE9EFA248A9414(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xE8BE9EFA248A9414(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_465(unk_0x0324EEB10F81965F(*uParam0), 1) && unk_0x68BE46B0EA4FCFAF(*uParam0, 24) != func_464(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xE8BE9EFA248A9414(*uParam0, 24, func_464(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_463(*uParam0))
	{
		unk_0xF8EDF3B7E8D2CD26(*uParam0, 1);
		unk_0x2B9B4DCEF80D1566(*uParam0, 1);
	}
	return 1;
}

int func_463(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x23E9113C762466ED(uParam0) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0xFA4A2220118417AE(iParam0) > 0)
	{
		unk_0x5991FAEA924B5EE0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x68BE46B0EA4FCFAF(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x945C7AD683103333(iParam0, iVar1, unk_0x68BE46B0EA4FCFAF(iParam0, iVar1)), 16);
				iVar2 = unk_0x765F5B806B517045(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x765F5B806B517045("MNU_CAGE") || iVar2 == unk_0x765F5B806B517045("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x23E9113C762466ED(uParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		switch (unk_0x0324EEB10F81965F(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xF218D5E7A1FA1079(iParam0, 38);
		iVar1 = unk_0xF218D5E7A1FA1079(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_465(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_12339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12342)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_16780)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_16782)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_16786)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_16783)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_16790)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_16788)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_16793)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_466(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFA4A2220118417AE(uParam0) > 0)
	{
		unk_0x5991FAEA924B5EE0(iParam0, 0);
		iVar0 = unk_0x68BE46B0EA4FCFAF(iParam0, 24);
		iVar1 = unk_0x1D2F98CF2A472A00(iParam0, 24);
		unk_0xE8356B7E1B731437(iParam0, uParam1);
		if (unk_0x0324EEB10F81965F(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x8762285499CFD42B(iParam0, 24);
		}
		else
		{
			unk_0xE8BE9EFA248A9414(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_467()
{
	return unk_0x6948821CC8D52AC2(joaat("mpindependence"));
}

int func_468(int iParam0)
{
	var uVar0;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x34D7B5822CF22910("MPBitset", 3))
			{
				if (unk_0x44748DA5CF34DA5E(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "MPBitset");
				}
				return unk_0x48B8265059381CD0(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_469(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_454(&(Global_68531.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x3DC4639D5F23DEA2(Param0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_450(iVar0);
			}
		}
		iVar0++;
	}
}

int func_470(var uParam0)
{
	if (func_471(uParam0))
	{
		if (unk_0x9F746898F7881612(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_471(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_434(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_457(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_472()
{
	return func_470(&(Global_96040.f_2311));
}

void func_473()
{
	func_474(&(Global_96040.f_2311));
}

void func_474(var uParam0)
{
	if (func_471(uParam0))
	{
		unk_0xE1324F59713746FA(uParam0->f_12.f_66);
	}
}

void func_475()
{
	if (unk_0x5EBBA0877DBAC8A8(uLocal_1129))
	{
		unk_0xF032432C4371EF58(uLocal_1129);
	}
}

int func_476()
{
	if (!Global_91491 == 10 && !Global_91491 == 9)
	{
		return 0;
	}
	return Global_91491.f_2;
}

struct<39> func_477(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_478(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_478(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_478(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_478(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_478(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_479()
{
	bool bVar0;
	
	bVar0 = func_111(Global_101700.f_18922.f_1, 4096);
	Global_101700.f_18922.f_1 = 0;
	if (bVar0)
	{
		func_490(&(Global_101700.f_18922.f_1), 4096);
	}
}

void func_480()
{
}

bool func_481()
{
	return func_471(&(Global_96040.f_2311));
}

int func_482()
{
	if (Global_91491 == 10 || Global_91491 == 9)
	{
		return 1;
	}
	return 0;
}

void func_483()
{
	if (func_52(&uLocal_1335))
	{
		Global_101700.f_18922.f_5 = func_46(&uLocal_1335);
	}
	if (!iLocal_1175)
	{
		unk_0x5BE53482EFD49141("ASS1_LOST");
	}
	unk_0xD293EE6E60B2813E("SCRIPT\ASSASSINATION_MULTI");
	func_247();
	func_230();
	func_235();
	func_236(1);
	func_384();
	func_487();
	func_410(0);
	func_3();
	if (unk_0x23E9113C762466ED(Global_88321.f_28[0]))
	{
		unk_0xF0F77C99098F999B(Global_88321.f_28[0], 1, 1);
		unk_0x7572E8CAC3330ACE(&(Global_88321.f_28[0]));
	}
	unk_0x571422CE42B47889(uLocal_1127, 0);
	unk_0x571422CE42B47889(uLocal_1128, 0);
	func_475();
	func_79(&uLocal_1528, 0, 0);
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		func_485(unk_0x17B5CC8A8615737D(), 1);
		unk_0xE2D8919DE58194D4(unk_0x17B5CC8A8615737D(), 0, -1, 0);
	}
	unk_0x000E46314C3A507F(1f);
	unk_0xB61819CCF7A3F445();
	unk_0x16A327AF9E84ABA6(iLocal_1326, 0);
	unk_0x16A327AF9E84ABA6(iLocal_1327, 0);
	func_484();
	unk_0x921053BAF754303D();
}

void func_484()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (func_256(Local_1247[iVar0 /*3*/], 1) < 5f)
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_486(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91528 > 0)
	{
		Global_96040.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_93635.f_21[iParam1] = iVar0;
	}
}

int func_486(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_91528 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_487()
{
	unk_0xF8E2640CE709A221(102, "ASSOJva");
	unk_0xF8E2640CE709A221(107, "ASSOJva");
	unk_0x01ADBE1EAD155D08("OJASva_101");
	unk_0x01ADBE1EAD155D08("OJASva_101a");
	unk_0x01ADBE1EAD155D08("OJASva_104");
}

void func_488()
{
	int iVar0;
	
	if (unk_0x32B1F051FF487881("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_40(0))
	{
		if (!func_489())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_489()
{
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

void func_490(var uParam0, int iParam1)
{
	func_491(uParam0, iParam1);
}

void func_491(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

