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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
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
	char cLocal_79[16] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	var uLocal_99 = 30;
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
	var uLocal_250 = 10;
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
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 10;
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
	var uLocal_372 = 20;
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
	var uLocal_473 = 20;
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
	var uLocal_574 = 30;
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
	var uLocal_755 = 5;
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
	var uLocal_786 = 7;
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
	var uLocal_836 = 5;
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
	var uLocal_862 = 3;
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
	var uLocal_878 = 16;
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
	var uLocal_978 = 10;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
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
	var uLocal_1029 = 5;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 5;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	struct<8> Local_1084[2];
	var uLocal_1101 = 0;
	var uLocal_1102 = 3;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 1092616192;
	var uLocal_1109 = 1101004800;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 3;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 16;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = -1;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 1000;
	var uLocal_1301 = 1000;
	var uLocal_1302 = 0;
	int iLocal_1303 = 0;
	var uLocal_1304 = 0;
	int iLocal_1305 = 0;
	struct<3> Local_1306 = { 0, 0, 0 } ;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	int iLocal_1316 = 0;
	var uLocal_1317 = 0;
	struct<2> Local_1318 = { 0, 0 } ;
	int iLocal_1320 = 0;
	var uLocal_1321 = 0;
	struct<2> Local_1322[3];
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	float fLocal_1333 = 0f;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	char cLocal_1339[24] = "";
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	int iLocal_1345 = 0;
	int iLocal_1346 = 0;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	bool bLocal_1352 = 0;
#endregion

void __EntryFunction__()
{
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_83 = joaat("s_m_m_armoured_01");
	iLocal_84 = joaat("boxville3");
	iLocal_85 = joaat("prop_idol_case_02");
	iLocal_86 = joaat("prop_yell_plastic_target");
	Local_87 = { 0f, 0.175f, 0f };
	Local_90 = { 0f, -3.6f, 0f };
	iLocal_93 = 0;
	fLocal_1333 = 0f;
	iLocal_1350 = -1;
	if (unk_0xD4BE58A7E3E102AC(3))
	{
		func_307(5);
	}
	unk_0x1A41D12A38E6D79F(1);
	func_286();
	while (true)
	{
		unk_0x643E26919A174002("M_JewelStoreJobPrep2A", 0);
		if (bLocal_98)
		{
			func_284();
		}
		func_282(&uLocal_99);
		func_207();
		func_205();
		if (!bLocal_96)
		{
			func_201();
			func_200(&Local_1084);
			func_1();
		}
		unk_0xAC5263AEA7D6AA8A(0.8f);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_93)
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	unk_0x81995F6F93D8C987("JHP2A_STOP");
	unk_0x1C9DBC28A851F0A6();
	unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x9C9E32388A7886A2();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61473)
	{
		Global_61473 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_76823.f_1 == 1) && func_5(Global_76823))
		{
		}
		else
		{
			Global_61471 = 1;
		}
	}
	if (Global_111560.f_9080 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_89451[iVar0 /*5*/];
		uVar2 = Global_76846.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111560.f_9080)
			{
			}
			return;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_89451[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_89451[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xA1E7A40E1F56E511(&(Global_89451[iVar0 /*5*/].f_1), 4);
		unk_0xA1E7A40E1F56E511(&Global_76825, 1);
		Global_76841 = uVar2;
		Global_76842 = unk_0x9B35D07DCD0F0B43();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_89451[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	
	unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
	unk_0x0A43D5D11052D038(joaat("boxville3"), 0);
	unk_0xB6C190A9FAFAEC2F(joaat("s_m_m_armoured_01"), 0);
	if (func_21())
	{
		func_13(0);
	}
	iLocal_1335 = 0;
	Global_73894 = 0;
	if (bParam0)
	{
		unk_0xB7F4DA52DE3AAF24(1f);
		unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
		Global_73894 = 0;
	}
	if (unk_0xD4B321D9096B01FC(iLocal_1316))
	{
		if (bParam0)
		{
			unk_0xBD22862A2C5FD6DF(&iLocal_1316);
		}
		else
		{
			unk_0xF25956700ADFD77F(&iLocal_1316);
		}
	}
	if (unk_0xD4B321D9096B01FC(Local_1306.f_0))
	{
		if (bParam0)
		{
			unk_0x4F058F27442031CC(&Local_1306);
		}
		else
		{
			unk_0x0FFB05DA97E810B5(&Local_1306);
		}
	}
	if (unk_0xD4B321D9096B01FC(Local_1318.f_0))
	{
		if (bParam0 && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			unk_0xBD22862A2C5FD6DF(&Local_1318);
		}
		else
		{
			unk_0xF25956700ADFD77F(&Local_1318);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1322.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_1322[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0x377C9F2989832369(&(Local_1322[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xCA7317DE7E0F89E9(Local_1322[iVar0 /*2*/]))
				{
					unk_0x363E2170E626A00A(Local_1322[iVar0 /*2*/], 1, 1);
				}
				unk_0x86A9549BD3D71664(&(Local_1322[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0xD4B321D9096B01FC(iLocal_1329))
	{
		if (bParam0)
		{
			unk_0x377C9F2989832369(&iLocal_1329);
		}
		else
		{
			if (unk_0xCA7317DE7E0F89E9(iLocal_1329))
			{
				unk_0x363E2170E626A00A(iLocal_1329, 1, 1);
			}
			unk_0x86A9549BD3D71664(&iLocal_1329);
		}
	}
	if (iLocal_1330 != 0)
	{
		unk_0x9E64FD43AF331B00(iLocal_1330, 0);
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
		{
			unk_0x4F1AEE91ADAE01D9(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1291, 0, 0);
	func_10();
	if (unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
	{
		unk_0x4F1AEE91ADAE01D9(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xA1E7A40E1F56E511(&Global_30981, iParam0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_30981, iParam0);
	}
}

void func_10()
{
	Global_94554 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0xAB681892AAC7844A(iParam2);
		unk_0xF530F03252D7AEE0("FocusIn");
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x538F8D7D228037B6(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x79FCE4565761C974(sVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x79FCE4565761C974(uParam0->f_3))
	{
		if (func_12(uParam0->f_3))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
	if (!unk_0x79FCE4565761C974(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
}

bool func_12(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_20();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0xA1E7A40E1F56E511(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_19(0))
		{
			func_14(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_14(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_17())
		{
			func_16(1, 1);
		}
		else
		{
			func_16(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_15())
	{
		Global_19486.f_1 = 3;
	}
}

int func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_17()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_18()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_20()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_21()
{
	if (Global_19486.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_94 = 0;
		iLocal_95 = 0;
		iLocal_93 = iParam0;
	}
}

int func_23()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	var uVar13;
	
	Var0 = { 692.8256f, -1012.544f, 21.722f };
	Var3 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_95)
	{
		if (func_199(Local_1318.f_0))
		{
			if (unk_0xA184209820DF81B4(Local_1318.f_0) != 0)
			{
				Local_1318.f_1 = unk_0xA184209820DF81B4(Local_1318.f_0);
			}
			else
			{
				Local_1318.f_1 = func_198(Local_1318.f_0, 0, 0);
			}
			func_197("JHP2A_STEAL", 7500, 1);
			func_196("JHP2A_HLP2", 15000);
		}
		else if (unk_0xA184209820DF81B4(Local_1318.f_0) != 0)
		{
			unk_0xDD4C465128988283(1);
			iVar7 = unk_0xA184209820DF81B4(Local_1318.f_0);
			unk_0xAA2276003B2ADF1B(&iVar7);
			unk_0xDD4C465128988283(0);
		}
		unk_0x81995F6F93D8C987("JHP2A_START");
		func_138(0f, 0f, 0f, 0f, 1, func_191());
		unk_0xE9A303771BF0C29A(5f, 5f, 4);
		iLocal_1345 = 0;
		iLocal_95 = 1;
		bLocal_1352 = true;
		iLocal_94 = 1;
	}
	if (iLocal_95)
	{
		func_137();
		switch (iLocal_94)
		{
			case 1:
				if ((((((iLocal_1303 == 0 && unk_0xD4B321D9096B01FC(Local_1318.f_0)) && unk_0xD960230552BC4165(Local_1318.f_0, 0)) && unk_0xD4B321D9096B01FC(Local_1306.f_0)) && !unk_0x2BF5E63466422C38(Local_1306.f_0)) && unk_0x95ED3BD0F52D542A(Local_1306.f_0, Local_1318.f_0, 0)) && func_134(&(Local_1084[0 /*8*/])))
				{
					func_106(&uLocal_1291, Local_1318.f_0, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1291, 0, 0);
				}
				if (iLocal_1303 == 3 || iLocal_1303 == 2)
				{
					unk_0xE9A303771BF0C29A(5f, 5f, 4);
					func_103(&uLocal_1101, 1, 0);
					if (unk_0x0945988C02AF3025() && func_12("JHP2A_HLP2"))
					{
						unk_0x0D23E3918F7AF11B(1);
					}
					if (!iLocal_1345)
					{
						func_197("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_94 = 2;
				}
				else if ((unk_0xD4B321D9096B01FC(iLocal_1320) && unk_0xD960230552BC4165(iLocal_1320, 0)) && unk_0x36495ECD675662F3(iLocal_1320, Local_1318.f_0))
				{
					if (unk_0x39A01A052D9B5FF0(Local_1318.f_1))
					{
						unk_0xE9A303771BF0C29A(5f, 5f, 4);
						unk_0xDD4C465128988283(1);
						unk_0xAA2276003B2ADF1B(&(Local_1318.f_1));
						unk_0xDD4C465128988283(0);
						func_102(705, 0);
					}
					func_101(&uLocal_1101, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1320, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0x42A24CB7B8A08E11(Local_1318.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						unk_0x784753B14715F27F(iLocal_1320, 5f, -1, 0);
						iLocal_94 = 101;
					}
				}
				else if (iLocal_1303 == 1)
				{
					func_103(&uLocal_1101, 1, 0);
					if (!unk_0x39A01A052D9B5FF0(Local_1322[0 /*2*/].f_1))
					{
						unk_0xE9A303771BF0C29A(5f, 5f, 4);
						Local_1322[0 /*2*/].f_1 = func_100(Local_1322[0 /*2*/]);
						func_197("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1345 = 1;
						unk_0x13BE685F855BA48C(Local_1318.f_0, 0);
					}
				}
				else if (iLocal_1303 == 0)
				{
					if (unk_0x39A01A052D9B5FF0(Local_1318.f_1))
					{
						unk_0xE9A303771BF0C29A(5f, 5f, 4);
						unk_0xDD4C465128988283(1);
						unk_0xAA2276003B2ADF1B(&(Local_1318.f_1));
						unk_0xDD4C465128988283(0);
						func_102(705, 0);
					}
					if (func_98(&uLocal_1101, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1318.f_0, "JHP2A_RTNVAN", "", "", unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 0), 0, 1, -1))
					{
						iLocal_94 = 101;
					}
					if (unk_0x39A01A052D9B5FF0(uLocal_1101) && unk_0x8DF9292B02F8CB75(uLocal_1101))
					{
						unk_0x925BD1075D119B45(uLocal_1101, 0);
					}
				}
				break;
			
			case 101:
				if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 0))
				{
					iVar8 = Local_1318.f_0;
				}
				else if (unk_0xD4B321D9096B01FC(iLocal_1320) && unk_0x36495ECD675662F3(iLocal_1320, Local_1318.f_0))
				{
					iVar8 = iLocal_1320;
				}
				if (func_96(iVar8, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0xE9A303771BF0C29A(5f, 5f, 4);
						iLocal_94 = 1000;
					}
					else
					{
						unk_0xE9A303771BF0C29A(5f, 5f, 4);
						unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
						iLocal_94++;
					}
				}
				break;
			
			case 102:
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					unk_0x1C9DBC28A851F0A6();
					unk_0x13BE685F855BA48C(Local_1318.f_0, 0);
					unk_0xA07556D283A83CA1(Local_1318.f_0, 1);
					if (unk_0xD4B321D9096B01FC(iLocal_1320))
					{
						unk_0x784753B14715F27F(iLocal_1320, 5f, 1, 0);
					}
					func_95(0, -1);
					if (unk_0xD4B321D9096B01FC(Local_1322[0 /*2*/]))
					{
						unk_0x377C9F2989832369(&(Local_1322[0 /*2*/]));
					}
					if (unk_0xD4B321D9096B01FC(Local_1322[1 /*2*/]))
					{
						unk_0x377C9F2989832369(&(Local_1322[1 /*2*/]));
					}
					if (unk_0xD4B321D9096B01FC(Local_1322[2 /*2*/]))
					{
						unk_0x377C9F2989832369(&(Local_1322[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
				{
					iVar6 = 0;
					while (iVar6 < Local_1322.f_0)
					{
						if (unk_0xD4B321D9096B01FC(Local_1322[iVar6 /*2*/]) && !unk_0xCA7317DE7E0F89E9(Local_1322[iVar6 /*2*/]))
						{
							if (unk_0x39A01A052D9B5FF0(Local_1318.f_1))
							{
								unk_0xDD4C465128988283(1);
								unk_0xAA2276003B2ADF1B(&(Local_1318.f_1));
								unk_0xDD4C465128988283(0);
							}
							if (!unk_0x39A01A052D9B5FF0(Local_1322[iVar6 /*2*/].f_1))
							{
								Local_1322[iVar6 /*2*/].f_1 = func_100(Local_1322[iVar6 /*2*/]);
							}
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < Local_1322.f_0)
					{
						if (unk_0xD4B321D9096B01FC(Local_1322[iVar6 /*2*/]) && !unk_0xCA7317DE7E0F89E9(Local_1322[iVar6 /*2*/]))
						{
							if (!unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
							{
								bVar9 = func_94(Local_1322[iVar6 /*2*/]);
								if ((bVar9 && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(Local_1318.f_0, 0f, -3f, -0.5f), unk_0xC12F91346EA13947(Local_1318.f_0, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar9 && unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), unk_0xACE5E491FC1B0D37(Local_1322[iVar6 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1)))
								{
									unk_0xC167C31F20B1FD61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 1, 0, 0);
									unk_0x377C9F2989832369(&(Local_1322[iVar6 /*2*/]));
									unk_0x1C9DBC28A851F0A6();
									unk_0x9964F5BBD9415AB7(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
								}
							}
						}
						iVar6++;
					}
				}
				else
				{
					func_102(705, 0);
					iVar6 = 0;
					while (iVar6 < Local_1322.f_0)
					{
						if (unk_0x39A01A052D9B5FF0(Local_1322[iVar6 /*2*/].f_1))
						{
							unk_0xAA2276003B2ADF1B(&(Local_1322[iVar6 /*2*/].f_1));
						}
						iVar6++;
					}
					func_48(&uLocal_1101, Var3, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar10, 1);
					if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0))
					{
						iVar12 = 1;
					}
					if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0))
					{
						bVar11 = true;
					}
					if (bVar11 || ((iVar12 && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1)) && bLocal_1352))
					{
						unk_0x572062A62138FBA2(0, 37, 1);
						unk_0x572062A62138FBA2(0, 44, 1);
						if (!func_21())
						{
							func_13(1);
						}
						if (!unk_0x4D181FFF42EF3100(unk_0x0FA8183DAD2B3203()))
						{
							if (!unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0) && !func_19(0))
							{
								if (iVar10 != joaat("weapon_briefcase"))
								{
									unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 1);
								}
							}
						}
					}
					if (bVar11)
					{
						if (iVar10 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_47("JHP2A_HLP1");
							}
						}
						if (unk_0x26BB91778477F482(0, 51) && iVar10 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x0D23E3918F7AF11B(1);
							}
							uVar13 = unk_0xFEBB62252A692A38(unk_0x0FA8183DAD2B3203(), 1);
							unk_0x2CF873D4DD55E9B7(uVar13);
							unk_0xE9A303771BF0C29A(3f, 5f, 4);
							unk_0x5F5C6A264C2CA8B1(-1, "Drop_Case", iVar13, "JWL_PREP_2A_SOUNDS", 0, 0);
							unk_0x86A9549BD3D71664(&iVar13);
							unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), 1);
							unk_0x4F1AEE91ADAE01D9(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"));
							func_95(0, -1);
							func_46(706);
							func_103(&uLocal_1101, 1, 0);
							if (func_7(87))
							{
								if (func_21())
								{
									func_13(0);
								}
								iLocal_94 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_21())
						{
							func_13(0);
						}
						if (unk_0x0945988C02AF3025())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x0D23E3918F7AF11B(1);
							}
						}
					}
					bLocal_1352 = unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1);
				}
				break;
			
			case 1000:
				unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 1);
				unk_0x13BE685F855BA48C(Local_1318.f_0, 0);
				unk_0xA07556D283A83CA1(Local_1318.f_0, 1);
				func_45(1);
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1126, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0xE9A303771BF0C29A(5f, 5f, 4);
						iLocal_94++;
					}
				}
				break;
			
			case 1001:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_94++;
				}
				break;
			
			case 1002:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return 1;
				}
				break;
			
			case 2000:
				unk_0xE9A303771BF0C29A(5f, 5f, 4);
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 1);
				Global_73894 = 1;
				func_45(1);
				func_44(1, 0);
				iLocal_94++;
				break;
			
			case 2001:
				func_44(1, 0);
				if (func_42())
				{
					if (func_26(&uLocal_1126, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_94++;
					}
				}
				break;
			
			case 2002:
				func_44(1, 0);
				if (func_25())
				{
					iLocal_94++;
				}
				break;
			
			case 2003:
				func_44(1, 0);
				if (!func_25())
				{
					func_24();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_24()
{
	int iVar0;
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x3427075D3608A3BB(unk_0x0FA8183DAD2B3203(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 157, 1);
		unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96068[iVar0]))
		{
			if (!unk_0xF4B969E0807E76C7(Global_96068[iVar0], 0))
			{
				unk_0x3427075D3608A3BB(Global_96068[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x04F5A8AA60EC662B(Global_96068[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_41396 != 0 && Global_41396 != 3) && Global_41396 != 2)
	{
		unk_0x60F310C72311BCA8(5);
		unk_0xB7F4DA52DE3AAF24(1f);
	}
}

int func_25()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_26(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_41(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_27(sParam3, iParam4, bParam8);
}

int func_27(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_40();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_39(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_38();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_36();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
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
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_34();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_33();
		func_28();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_40();
	}
	return 0;
}

void func_28()
{
	if (!func_29())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_29()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_32())
	{
		return 0;
	}
	if (func_30(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_30(int iParam0)
{
	return func_31(iParam0, 20);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_32()
{
	return -1;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_34()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_36()
{
	if (func_37(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_191();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

bool func_37(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_40()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_42()
{
	if (func_43())
	{
		return 0;
	}
	if (unk_0x0E7925961F4058CF())
	{
		if (unk_0xA99E47125B44409B())
		{
			return 0;
		}
	}
	return 1;
}

int func_43()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_44(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x572062A62138FBA2(0, 21, 1);
	}
	unk_0x572062A62138FBA2(0, 25, 1);
	unk_0x572062A62138FBA2(0, 24, 1);
	unk_0x572062A62138FBA2(0, 257, 1);
	unk_0x572062A62138FBA2(0, 141, 1);
	unk_0x572062A62138FBA2(0, 140, 1);
	unk_0x572062A62138FBA2(0, 22, 1);
	unk_0x572062A62138FBA2(0, 44, 1);
	unk_0x572062A62138FBA2(0, 23, 1);
	unk_0x572062A62138FBA2(0, 47, 1);
	unk_0x572062A62138FBA2(0, 36, 1);
	if (bParam0)
	{
		unk_0x572062A62138FBA2(0, 37, 1);
	}
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (bParam1)
		{
			unk_0x4465F4659EE7FAE4(unk_0x0FA8183DAD2B3203(), 2f);
		}
		else
		{
			unk_0x4465F4659EE7FAE4(unk_0x0FA8183DAD2B3203(), 1f);
		}
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 102, 1);
	}
	if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
	{
		unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
	}
}

void func_45(bool bParam0)
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x3427075D3608A3BB(unk_0x0FA8183DAD2B3203(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 157, 0);
		unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 1);
		unk_0x1C2AC11A8D8E19DD(unk_0x0FA8183DAD2B3203(), 0, 0);
		if (bParam0)
		{
			unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), 0);
		}
		unk_0xFBE658450F3CCCC4(unk_0x0FA8183DAD2B3203(), 0);
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
	}
	unk_0x60F310C72311BCA8(0);
	unk_0xB7F4DA52DE3AAF24(0f);
}

void func_46(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_61472 = 0;
	if (!Global_61696[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73566)
	{
		if (Global_73567[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73567[iVar1 /*9*/].f_1 = 1;
			Global_73567[iVar1 /*9*/].f_2 = 0f;
			if (Global_73567[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_47(char* sParam0)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 1, 1, -1);
}

int func_48(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	return func_49(uParam0, Param1, Param4, func_93(), func_93(), iParam7, 3, 0, 0, 0, 0, sParam8, func_92(), func_92(), func_92(), func_92(), func_92(), 0, bParam9, func_92(), 0, 0, bParam10, iParam11, func_92(), func_92(), func_92(), bParam12, 1065353216);
}

int func_49(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_91(uParam0);
	func_90(uParam0);
	func_89();
	if (func_72(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_71(sParam20);
		func_71(sParam21);
		func_71(sParam22);
		func_71(sParam23);
		if (unk_0xBF28CCACDDFF5346())
		{
			bVar1 = false;
			if (unk_0xD960230552BC4165(iParam18, 0))
			{
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam18, 0))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
					{
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
					}
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 23))
					{
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 23);
					}
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_69(uParam0, iParam29))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
					{
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
					}
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_71(sParam24);
				func_71(sParam27);
				func_71("MORE_SEATS");
				if (bParam26 && unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
				{
					if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
					{
						unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
						func_71(sParam19);
					}
					if (unk_0x39A01A052D9B5FF0(*uParam0))
					{
						unk_0xAA2276003B2ADF1B(uParam0);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 0);
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 0);
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 1);
					}
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x39A01A052D9B5FF0(uParam0->f_5))
					{
						if (unk_0x39A01A052D9B5FF0(*uParam0))
						{
							unk_0xAA2276003B2ADF1B(uParam0);
						}
						uParam0->f_5 = func_61(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xD1773DD05FE2AB54(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					else if (!func_59(Var3, unk_0xE3063EF8E0D6C8AD(uParam0->f_5), 0.1f, 0))
					{
						unk_0x58531110F2DD153B(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					if (!func_66(uParam0, 2))
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 2))
						{
							func_64(uParam0, sParam19, 0);
							unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
									if (!unk_0x95ED3BD0F52D542A(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x95ED3BD0F52D542A(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar2], func_58()) || !func_56(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_53(uParam0))
							{
								func_71(sParam19);
								func_71(sParam24);
								func_71(sParam20);
								func_71(sParam21);
								func_71(sParam22);
								func_71(sParam23);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(sParam27);
								func_103(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xD4B321D9096B01FC(iParam18))
			{
				if ((bParam26 && unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) && (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 22)))
				{
					func_71(sParam24);
					func_71(sParam27);
					if (unk_0x39A01A052D9B5FF0(uParam0->f_5) || unk_0x39A01A052D9B5FF0(*uParam0))
					{
						unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
						unk_0xAA2276003B2ADF1B(uParam0);
						func_71(sParam19);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 0);
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 0);
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 1);
					}
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xD960230552BC4165(iParam18, 0))
					{
						if (!unk_0x39A01A052D9B5FF0(*uParam0))
						{
							if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
							{
								unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
								func_71(sParam19);
							}
							*uParam0 = func_50(iParam18, 0, 0);
							unk_0xB2FBFC8F00374981(*uParam0, 2);
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
							{
								func_60(*uParam0, uParam0);
							}
						}
						if (!func_66(uParam0, 2))
						{
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 3))
							{
								func_64(uParam0, sParam24, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
								unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
							}
							else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
							{
								if (!unk_0x79FCE4565761C974(sParam27))
								{
									if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
									{
										func_64(uParam0, sParam27, 0);
										unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
								{
									func_64(uParam0, sParam24, 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
								}
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 23))
								{
									if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
									{
										func_62(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
				{
					unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
					func_71(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_66(uParam0, 2))
						{
							if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
							{
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0xBAC643F143880136(0, iVar8);
									if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar9]))
									{
										func_62(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(uParam0, "MORE_SEATS", 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 3))
							{
								func_64(uParam0, sParam24, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
								unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
							}
							else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
							{
								if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
								{
									func_64(uParam0, sParam27, 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(uParam0, 2))
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 3))
						{
							func_64(uParam0, sParam24, 0);
							unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
							unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
						}
						else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
						{
							if (!unk_0x79FCE4565761C974(sParam27))
							{
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
								{
									func_64(uParam0, sParam27, 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
							{
								func_64(uParam0, sParam24, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
		{
			unk_0x3B76114EC84D5812(&(uParam0->f_13), 0);
		}
		func_71(sParam19);
		func_71(sParam24);
		func_71(sParam27);
		func_71(sParam24);
		func_71("LOSE_WANTED");
		if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
		{
			unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
		}
		if (unk_0x39A01A052D9B5FF0(*uParam0))
		{
			unk_0xAA2276003B2ADF1B(uParam0);
		}
	}
	unk_0x3B76114EC84D5812(&(uParam0->f_13), 11);
	unk_0x3B76114EC84D5812(&(uParam0->f_13), 12);
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	return func_51(iParam0, !bParam1, bParam2);
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_52(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_52(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_52(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_53(var uParam0)
{
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 12))
	{
		if (func_55(unk_0x0FA8183DAD2B3203()))
		{
			if (func_54(1, 0, 1) || unk_0xA2BC31158C8CEFD2(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_54(1, 0, 1) || unk_0xA2BC31158C8CEFD2(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDE53EA8358302CB4())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (bParam0)
		{
			if (unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0x300C62F79A4441EB(iVar0, -1, 0) != unk_0x0FA8183DAD2B3203())
				{
					return 0;
				}
			}
		}
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0x7BB084963FF20373(iVar0) < 0.95f || unk_0x7BB084963FF20373(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!unk_0xC22C143313E77BB2(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	float fVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		fVar0 = unk_0xB8D4A2BAA78AB950(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()) && iParam1)
		{
			if (func_57(unk_0x0FA8183DAD2B3203(), iParam0))
			{
				unk_0xB439D67E6A36344A(func_58(), 50f);
				return 1;
			}
		}
		else if (unk_0x266F39A2B4FE04D0(iParam0, func_58()))
		{
			unk_0xB439D67E6A36344A(func_58(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xA2DB82364F08360E(iParam0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, 0);
			if (unk_0xD960230552BC4165(iVar0, 0))
			{
				if (!unk_0x2BF5E63466422C38(iParam1))
				{
					if (unk_0x7E6F0519746C2295(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

var func_58()
{
	return unk_0x85E4D364E5F296FC(unk_0x7A8732CFB5113E77());
}

int func_59(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(var uParam0, var uParam1)
{
	if (unk_0x39A01A052D9B5FF0(uParam0))
	{
		if (unk_0x39A01A052D9B5FF0(uParam1->f_6))
		{
			unk_0x925BD1075D119B45(uParam1->f_6, 0);
		}
		unk_0x990EDEB49BA0458D(0);
		unk_0x5B3499F998371238();
		uParam1->f_6 = uParam0;
		unk_0x925BD1075D119B45(uParam0, 1);
	}
}

var func_61(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_52(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

void func_62(int iParam0, char* sParam1, int iParam2)
{
	unk_0x39F932B751C1253B(iParam0, sParam1, func_63(iParam2), 1);
}

int func_63(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_64(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x79FCE4565761C974(sParam1))
		{
			if (!unk_0x2553916E420E8EF0(sParam1, ""))
			{
				func_197(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9B35D07DCD0F0B43();
}

int func_65(var uParam0)
{
	if (!unk_0x2BF5E63466422C38(uParam0->f_16))
	{
		if (unk_0x01891E23361FD324(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x0E7925961F4058CF())
	{
		if (unk_0xA99E47125B44409B())
		{
			return 1;
		}
		if (func_68(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x0E7925961F4058CF())
	{
		if (func_43() && !func_67())
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9B35D07DCD0F0B43();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (func_70(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xD4B321D9096B01FC(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x78B310CB286001B8(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xB7655C0927ADAB13(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xB7655C0927ADAB13(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_71(char* sParam0)
{
	if (!unk_0x79FCE4565761C974(sParam0))
	{
		unk_0x38C6C3B6F4074898(sParam0);
	}
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
		{
			if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 29) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 28))
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					unk_0xA7E1CFAAFBBD71F8(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 29) && unk_0xA2BC31158C8CEFD2(uParam0->f_13, 28))
		{
			if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
			{
				unk_0xA7E1CFAAFBBD71F8(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x3B76114EC84D5812(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xD4B321D9096B01FC(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0x78FEEDC74FCCF78F(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 50f, 0, iVar25);
			if (unk_0xD960230552BC4165(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xD960230552BC4165(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
				{
					if (!unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0) || !bParam17)
					{
						if (func_70(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
								{
									unk_0x4465F4659EE7FAE4(uParam0->f_17[iVar0], 1f);
									if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
									{
										unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
									}
									if (unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470) == 7 && !func_88(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0]) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0]))
										{
											unk_0xCC94EE23853F38E4(uParam0->f_17[iVar0], 1);
											unk_0x31A7662B885C7549(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0x3B76114EC84D5812(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					if (!unk_0xEC9DA7D08BCA2C06(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xC6612209077465DD(uParam0->f_17[iVar0]);
					}
					if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_58());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 26))
	{
		if ((!func_85(uParam0) && unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203())) && !unk_0xD4B321D9096B01FC(iParam10))
		{
			iVar13 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(iVar13, 0))
			{
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_66(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0xBAC643F143880136(0, iVar26);
						if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar27]))
						{
							func_62(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x3B76114EC84D5812(&(uParam0->f_13), 13);
			func_71("MORE_SEATS");
		}
		if (!unk_0xD4B321D9096B01FC(iParam10))
		{
			if ((!unk_0x2BF5E63466422C38(uParam0->f_17[0]) || !unk_0x2BF5E63466422C38(uParam0->f_17[1])) || !unk_0x2BF5E63466422C38(uParam0->f_17[2]))
			{
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 31))
				{
					if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()) && !func_66(uParam0, 2))
					{
						iVar13 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
						if (func_84(iVar13, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
				{
					unk_0x3B76114EC84D5812(&(uParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xD960230552BC4165(iParam10, 0))
		{
			if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iParam10))
			{
				if (unk_0x26BB91778477F482(0, 75))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 21))
			{
				unk_0x3B76114EC84D5812(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
					{
						unk_0x11BA22EEA4D73366(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x11BA22EEA4D73366(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
					{
						iVar13 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
						if (unk_0xD960230552BC4165(iVar13, 0))
						{
							if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
							{
								if (!func_85(uParam0) && unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
								{
									if (!func_83(uParam0->f_17[iVar0]))
									{
										unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xF4B969E0807E76C7(iVar13, 0))
						{
							if (unk_0x7E6F0519746C2295(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xE294A1321110B3E9(iVar13) && !unk_0x0514219B96C5A22A(iVar13))
								{
									Var28 = { unk_0xACE5E491FC1B0D37(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
					{
						if (unk_0xA2DB82364F08360E(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x4D57D3E5ECE15A41(uParam0->f_17[iVar0], 0);
							if (!unk_0xF4B969E0807E76C7(iVar13, 0))
							{
								if (unk_0xD960230552BC4165(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iVar13))
										{
											if (unk_0xB8D4A2BAA78AB950(iVar13) > 5f)
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
									{
										iVar31 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
									}
									if (unk_0xD960230552BC4165(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xB8D4A2BAA78AB950(iVar13) > 5f)
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
					{
						iVar32 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
						if (unk_0xD4B321D9096B01FC(iVar32))
						{
							if (func_70(iVar32, uParam0, 0))
							{
								if (func_82(iVar0, uParam0) || !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 27))
								{
									unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], iVar0);
									func_81(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_82(iVar0, uParam0))
							{
								if (unk_0x7F375072508F738F(iVar32) == joaat("sentinel2"))
								{
									unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()) && !func_79(uParam0->f_17[iVar0], iParam10)) && !func_78(uParam0->f_17[iVar0], iParam10))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
							{
								if (((!unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0]) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0])) && !unk_0x1C930EA46962E6D0(uParam0->f_17[iVar0])) && !unk_0xEC9DA7D08BCA2C06(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xC6612209077465DD(uParam0->f_17[iVar0]);
									}
									unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_58());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x9B35D07DCD0F0B43();
								uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
								unk_0xB2FBFC8F00374981(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_60(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
					{
						if (((func_56(uParam0->f_17[iVar0], 1) || func_79(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xD960230552BC4165(iParam10, 0) && !unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam10, 0)))
						{
							if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
							{
								unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
								func_71(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_60(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xD960230552BC4165(iParam10, 0))
					{
						if (!unk_0x7E6F0519746C2295(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x9B69E0F5342BA1A8(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 11)) && !((bParam17 && unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) && !unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam10, 0)))
							{
								if (unk_0xA2DB82364F08360E(uParam0->f_17[iVar0]))
								{
									if (!unk_0x95ED3BD0F52D542A(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_56(uParam0->f_17[iVar0], 1))
										{
											if (func_55(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x2DCF88AC859255F3(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
									{
										if ((((!unk_0x1C930EA46962E6D0(uParam0->f_17[iVar0]) && !unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0])) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0])) && !unk_0xEC9DA7D08BCA2C06(uParam0->f_17[iVar0])) && !unk_0xCFBE5B663F1567A7(iParam10))
										{
											unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_88(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x1C930EA46962E6D0(uParam0->f_17[iVar0]) && !unk_0x1C930EA46962E6D0(unk_0x0FA8183DAD2B3203())) && !func_77(uParam0->f_17[iVar0], 2f)) && !unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0])) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0])) && !unk_0xCFBE5B663F1567A7(iParam10))
										{
											unk_0xCC94EE23853F38E4(uParam0->f_17[iVar0], 1);
											if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 10))
											{
												unk_0x4465F4659EE7FAE4(uParam0->f_17[iVar0], 1f);
											}
											unk_0x31A7662B885C7549(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xE2806AF865804258(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
										unk_0xB2FBFC8F00374981(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
							{
								if (func_86(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0]) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xC6612209077465DD(uParam0->f_17[iVar0]);
										}
										unk_0xCC94EE23853F38E4(uParam0->f_17[iVar0], 0);
										unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_58());
									}
								}
							}
						}
						else if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iParam10))
						{
							if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()))
							{
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 21))
								{
									unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_58());
								}
							}
							else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 21))
							{
								unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()) && !unk_0xCFBE5B663F1567A7(iParam10))
						{
							unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
				{
					unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
					func_71(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_66(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
						{
							if (func_83(uParam0->f_17[iVar0]) || unk_0x9B69E0F5342BA1A8(uParam0->f_17[iVar0], unk_0x0FA8183DAD2B3203(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
					{
						if (!unk_0x9B69E0F5342BA1A8(uParam0->f_17[iVar0], unk_0x0FA8183DAD2B3203(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_83(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x9B35D07DCD0F0B43();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 5))
							{
								func_64(uParam0, sParam7, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_76(iVar0, uParam0))
									{
										if (!unk_0x79FCE4565761C974(uVar19[iVar0]))
										{
											if (!unk_0x2553916E420E8EF0(uVar19[iVar0], ""))
											{
												func_74(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_73(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_76(iVar0, uParam0))
										{
											func_64(uParam0, uVar15[iVar0], 0);
											func_73(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x3B76114EC84D5812(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
				{
					unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
					func_71(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_71("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x79FCE4565761C974(sParam1))
		{
			if (!unk_0x2553916E420E8EF0(sParam1, ""))
			{
				func_75(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9B35D07DCD0F0B43();
}

void func_75(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xE1A3A3468E806677(sParam0);
	unk_0x0AC9F8E1AFCEC860(uParam1);
	unk_0x743C4524DF783B2F(iParam2, 1);
}

int func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 14);
		
		case 1:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 15);
		
		case 2:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_77(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(iParam0, 0))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, 0);
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0xB8D4A2BAA78AB950(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (!unk_0x266F39A2B4FE04D0(iParam0, func_58()))
		{
			iVar0 = unk_0x31D8B4E11CC6050C(iParam0);
			if (unk_0xD960230552BC4165(iParam1, 0))
			{
				if (unk_0x9B69E0F5342BA1A8(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0xD960230552BC4165(iParam1, 0))
			{
				if (unk_0x7E6F0519746C2295(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 19);
			break;
	}
}

void func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 19);
			break;
	}
}

int func_82(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 17);
		
		case 1:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 18);
		
		case 2:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
		if (unk_0xD960230552BC4165(iVar0, 0))
		{
			if (!unk_0x2BF5E63466422C38(iParam0))
			{
				iVar1 = unk_0xA4BF70099C074BA0(iParam0);
				if (unk_0xD960230552BC4165(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x9B69E0F5342BA1A8(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_84(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		if (unk_0x7F375072508F738F(iParam0) == joaat("bus") || unk_0x7F375072508F738F(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x2BF5E63466422C38(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x300C62F79A4441EB(iParam0, 0, 0);
			if (!unk_0x2BF5E63466422C38(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x300C62F79A4441EB(iParam0, 1, 0);
			if (!unk_0x2BF5E63466422C38(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x300C62F79A4441EB(iParam0, 2, 0);
			if (!unk_0x2BF5E63466422C38(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(var uParam0)
{
	int iVar0;
	
	if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (func_70(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam1))
	{
		if (unk_0xA2DB82364F08360E(iParam1))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam1, 0);
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0xD960230552BC4165(iVar0, 0))
				{
					if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iVar0))
					{
						if (func_85(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
				if (unk_0xD4B321D9096B01FC(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (unk_0xD960230552BC4165(iVar0, 0))
						{
							if (func_87(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	float fVar0;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		fVar0 = unk_0xB8D4A2BAA78AB950(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xD960230552BC4165(iParam1, 0))
		{
			iVar0 = unk_0xA4BF70099C074BA0(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_89()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		iVar0 = unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203());
		if (unk_0xD960230552BC4165(iVar0, 0))
		{
			iVar1 = unk_0x300C62F79A4441EB(iVar0, 0, 0);
			if (!unk_0x2BF5E63466422C38(iVar1))
			{
				if (iVar1 != unk_0x0FA8183DAD2B3203())
				{
					if (unk_0x00123AB82C5FAC28(iVar1))
					{
						if (!unk_0x8752F912B1823E3A(iVar1, unk_0x0FA8183DAD2B3203()))
						{
							unk_0x6E2920E14F5F962C(iVar1, unk_0x0FA8183DAD2B3203(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 25))
	{
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 32, 0);
					unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 305, 1);
					unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 268, 1);
					unk_0xE2806AF865804258(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 25);
	}
}

void func_91(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_17[iVar0]))
		{
			if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
			{
				if (unk_0xA2DB82364F08360E(uParam0->f_17[iVar0]))
				{
					unk_0x773434A2783CA924(uParam0->f_17[iVar0], 0);
					unk_0xD2939754183602A1(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
			{
				unk_0x773434A2783CA924(unk_0x0FA8183DAD2B3203(), 0);
				unk_0xD2939754183602A1(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
	}
}

int func_92()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_93()
{
	struct<3> Var0;
	
	return Var0;
}

int func_94(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
	{
		return 0;
	}
	Var0 = { unk_0x805A405302844545(unk_0xACE5E491FC1B0D37(iParam0, 1), unk_0xC12F91346EA13947(Local_1318.f_0, Local_87), unk_0xC12F91346EA13947(Local_1318.f_0, Local_90), 0) };
	if (unk_0xB7A628320EFF8E47(Var0, unk_0xC12F91346EA13947(Local_1318.f_0, Local_87)) <= unk_0xB7A628320EFF8E47(unk_0xC12F91346EA13947(Local_1318.f_0, Local_90), unk_0xC12F91346EA13947(Local_1318.f_0, Local_87)))
	{
		return 1;
	}
	return 0;
}

void func_95(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_61479)
	{
	}
	Global_61479 = 0;
	if (bParam0)
	{
		Global_61480 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_61696[Global_73567[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73567[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_73567[iVar0 /*9*/] > 0)
			{
				if (Global_73567[iVar0 /*9*/] == iParam1)
				{
					Global_73567[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_96(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x572062A62138FBA2(0, 71, 1);
	unk_0x572062A62138FBA2(0, 72, 1);
	unk_0x572062A62138FBA2(0, 76, 1);
	unk_0x572062A62138FBA2(0, 73, 1);
	unk_0x572062A62138FBA2(0, 59, 1);
	unk_0x572062A62138FBA2(0, 60, 1);
	if (bParam5)
	{
		unk_0x572062A62138FBA2(0, 75, 1);
	}
	unk_0x572062A62138FBA2(0, 80, 1);
	if (!bParam6)
	{
		unk_0x572062A62138FBA2(0, 69, 1);
		unk_0x572062A62138FBA2(0, 70, 1);
		unk_0x572062A62138FBA2(0, 68, 1);
	}
	unk_0x572062A62138FBA2(0, 74, 1);
	unk_0x572062A62138FBA2(0, 86, 1);
	unk_0x572062A62138FBA2(0, 81, 1);
	unk_0x572062A62138FBA2(0, 82, 1);
	unk_0x572062A62138FBA2(0, 138, 1);
	unk_0x572062A62138FBA2(0, 136, 1);
	unk_0x572062A62138FBA2(0, 114, 1);
	unk_0x572062A62138FBA2(0, 107, 1);
	unk_0x572062A62138FBA2(0, 110, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 87, 1);
	unk_0x572062A62138FBA2(0, 88, 1);
	unk_0x572062A62138FBA2(0, 113, 1);
	unk_0x572062A62138FBA2(0, 115, 1);
	unk_0x572062A62138FBA2(0, 116, 1);
	unk_0x572062A62138FBA2(0, 117, 1);
	unk_0x572062A62138FBA2(0, 118, 1);
	unk_0x572062A62138FBA2(0, 119, 1);
	unk_0x572062A62138FBA2(0, 131, 1);
	unk_0x572062A62138FBA2(0, 132, 1);
	unk_0x572062A62138FBA2(0, 123, 1);
	unk_0x572062A62138FBA2(0, 126, 1);
	unk_0x572062A62138FBA2(0, 129, 1);
	unk_0x572062A62138FBA2(0, 130, 1);
	unk_0x572062A62138FBA2(0, 133, 1);
	unk_0x572062A62138FBA2(0, 134, 1);
	unk_0xCD00E3BA36117D4B();
	func_97(iParam0);
	if ((unk_0x9B35D07DCD0F0B43() - Global_29) > 500)
	{
		unk_0x784753B14715F27F(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9B35D07DCD0F0B43();
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x01CBD71E072E9F33(unk_0xB8D4A2BAA78AB950(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_97(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x270391FCE2D64F64(iParam0))
		{
			if (unk_0x9131E47288B6D66E(iParam0))
			{
				unk_0xDF5180225AFEE790(iParam0, 0);
			}
		}
	}
}

bool func_98(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_49(uParam0, Param1, func_99(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_92(), func_92(), func_92(), func_92(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_92(), func_92(), func_92(), 1, iParam10);
}

Vector3 func_99()
{
	return 0f, 0f, 2f;
}

int func_100(int iParam0)
{
	return func_51(iParam0, 1, 0);
}

int func_101(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_49(uParam0, Param1, Param4, func_93(), func_93(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_92(), func_92(), func_92(), func_92(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_102(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_61481 = iParam0;
	if (!Global_61479)
	{
		Global_61479 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_73567[iVar0 /*9*/] == iParam0)
			{
				Global_73567[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_103(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_105(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
		{
			unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
		}
		func_104(iVar0, uParam0);
		func_81(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x3B76114EC84D5812(&(uParam0->f_13), iVar0);
			unk_0x3B76114EC84D5812(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		unk_0xAA2276003B2ADF1B(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
		{
			unk_0x773434A2783CA924(uParam0->f_17[iVar0], 1);
			unk_0xD2939754183602A1(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 32, 1);
				unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_58()) && uParam0->f_17[iVar0] != unk_0x0FA8183DAD2B3203())
				{
					unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 29))
			{
				unk_0xA7E1CFAAFBBD71F8(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		unk_0x773434A2783CA924(unk_0x0FA8183DAD2B3203(), 1);
		unk_0xD2939754183602A1(unk_0x0FA8183DAD2B3203(), 1);
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (bParam2)
		{
			unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

void func_104(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 16);
			break;
	}
}

void func_105(var uParam0)
{
	if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_107(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_107(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_108(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_108(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_109(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_109(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE5409F09171D0BEE())
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x79FCE4565761C974(iVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_12(iVar0))
	{
		func_133();
	}
	if (func_132(iParam1) && unk_0x0975E9E48EA2CC7B(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4625051E51BA911B(iParam1))
		{
			unk_0x82A2F38195C2E953(unk_0x3D464779B732760F(iParam1));
			unk_0x443D0DA3964A4371(unk_0x3D464779B732760F(iParam1), 1);
			if (unk_0x9DEA7CC8D17DB89A(unk_0x3D464779B732760F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x905FBA24E7FA8D23(iParam1))
		{
			unk_0x374DFF939ADCCC9A(unk_0xD05B0DA3866791D0(iParam1));
			if (unk_0x2C7F1A82D57EBB18(unk_0xD05B0DA3866791D0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam1))
		{
			unk_0xA0CB3588697ABD83(unk_0xF0EFBC96AEA7ABA1(iParam1));
			if (unk_0xB12EB2EC44BBAC6B(unk_0xF0EFBC96AEA7ABA1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE5409F09171D0BEE())
		{
			if (func_127(uParam0, bParam7, bParam9, 0))
			{
				func_123(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_113(iVar0))
				{
					if ((unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0)) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if ((iVar1 && !unk_0x0945988C02AF3025()) && uParam8)
						{
							if (!func_12(iVar0))
							{
								func_196(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
								{
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_113(iVar0))
			{
				if (unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0))
				{
					if (((unk_0x62E95D2FED28E41C(iParam1) && iVar1) && !unk_0x0945988C02AF3025()) && uParam8)
					{
						if (!func_12(iVar0))
						{
							func_196(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
							{
								func_112(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x79FCE4565761C974(sParam5))
			{
				if (func_12(sParam5))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
			{
				if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_127(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_111(uParam0))
				{
					func_110(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_110(var uParam0)
{
	if (func_132(unk_0x0FA8183DAD2B3203()))
	{
		unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0x538F8D7D228037B6(1);
		unk_0xAB681892AAC7844A(0);
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		unk_0xF530F03252D7AEE0("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_111(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9B35D07DCD0F0B43()
		{
			return 1;
		}
	}
	return 0;
}

int func_112(bool bParam0)
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_113(char* sParam0)
{
	if (!func_114(1, 1, 0))
	{
		if ((!unk_0x9591DE0F00127F2A(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_112(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x16587C6F71675106())
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
			{
				return 0;
			}
			if (unk_0x9522187D5FDEA6E4())
			{
				return 0;
			}
		}
	}
	if ((func_121() || func_120(Global_4456448.f_190930)) || func_119())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			iVar1 = func_118(unk_0x0FA8183DAD2B3203(), 0);
			if (((unk_0x2068C310844A89D8(iVar0, iVar1) || (unk_0x7F375072508F738F(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x7F375072508F738F(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x7F375072508F738F(iVar0) == joaat("riot2") && iVar1 == 0) && func_117(iVar0, 10)) && unk_0xF05B9E4C6631EA28(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_115(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == unk_0x7C7787D2D7139A85()) && func_116(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		if (unk_0x6AA7F87D45193D03(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x94FA12918F306658(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
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

var func_119()
{
	return Global_2448961.f_17;
}

bool func_120(int iParam0)
{
	return iParam0 == 51;
}

var func_121()
{
	return Global_2448961.f_16;
}

bool func_122()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

void func_123(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		func_11(uParam0, 0, 0);
	}
	if (func_126(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x4625051E51BA911B(iParam1))
		{
			iVar0 = unk_0x3D464779B732760F(iParam1);
			if (!unk_0x5294582CE404D3F4(iVar0, 0))
			{
				if (unk_0x7FA2061748BA645E(iVar0))
				{
					if (!func_124())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0F81A86FA23D44FA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x538F8D7D228037B6(0);
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
	unk_0xFFFB9D39E6C8D02D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iParam1, -1, iVar3, iVar4);
	unk_0x3E5A3FD805488EB9("FocusIn", 0, 0);
	unk_0x7D17F1A2E0EEDBB9("HINT_CAM_SCENE");
	unk_0x9964F5BBD9415AB7(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_124()
{
	return func_125(unk_0x7C7787D2D7139A85());
}

int func_125(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_126(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_127(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_111(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (!func_131(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_130(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (!func_131(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_130(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_130(bParam1, bParam2, bParam3) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_131(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_111(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_114(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_133();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_131(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_114(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0x905FBA24E7FA8D23(iParam0))
		{
			if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4625051E51BA911B(iParam0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	unk_0xA1E7A40E1F56E511(&Global_7357, 4);
}

int func_134(var uParam0)
{
	if (func_136(uParam0) && !func_135(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	int iVar0;
	
	if (iLocal_1303 == 0 || iLocal_1303 == 1)
	{
		if (((unk_0xF4B969E0807E76C7(Local_1318.f_0, 0) || (unk_0xD4B321D9096B01FC(Local_1322[0 /*2*/]) && !unk_0xCA7317DE7E0F89E9(Local_1322[0 /*2*/]))) || (unk_0xD4B321D9096B01FC(Local_1322[1 /*2*/]) && !unk_0xCA7317DE7E0F89E9(Local_1322[1 /*2*/]))) || (unk_0xD4B321D9096B01FC(Local_1322[2 /*2*/]) && !unk_0xCA7317DE7E0F89E9(Local_1322[2 /*2*/])))
		{
			iLocal_1303 = 2;
		}
	}
	if (iLocal_1303 == 2)
	{
		if ((((!unk_0xD4B321D9096B01FC(Local_1318.f_0) || !unk_0xD960230552BC4165(Local_1318.f_0, 0)) || (unk_0xD4B321D9096B01FC(Local_1322[0 /*2*/]) && !func_94(Local_1322[0 /*2*/]))) || (unk_0xD4B321D9096B01FC(Local_1322[1 /*2*/]) && !func_94(Local_1322[1 /*2*/]))) || (unk_0xD4B321D9096B01FC(Local_1322[2 /*2*/]) && !func_94(Local_1322[2 /*2*/])))
		{
			iLocal_1303 = 3;
		}
	}
	if (iLocal_1303 == 0)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0x7F375072508F738F(iVar0) == joaat("towtruck") || unk_0x7F375072508F738F(iVar0) == joaat("towtruck2"))
			{
				if (unk_0xD960230552BC4165(iVar0, 0))
				{
					if (unk_0x36495ECD675662F3(iVar0, Local_1318.f_0))
					{
						iLocal_1320 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1303 == 0)
	{
		if (!unk_0xD960230552BC4165(Local_1318.f_0, 0))
		{
			iLocal_1303 = 1;
		}
	}
	if (iLocal_1303 == 1 && unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_138(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD4B321D9096B01FC(Global_102125.f_4))
	{
		if (unk_0xD960230552BC4165(Global_102125.f_4, 0))
		{
			if (func_190(24) != Global_102125.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_187(unk_0xACE5E491FC1B0D37(Global_102125.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_139(Global_102125.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_139(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD4B321D9096B01FC(Global_75396.f_484[25]) && unk_0xD960230552BC4165(Global_75396.f_484[25], 0))
			{
				if (Global_75396.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x01412376937BFF5B(iParam0) || unk_0x7F375072508F738F(iParam0) == joaat("bus")) || unk_0x7F375072508F738F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_186(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_181(iParam0, &Var0);
		if (func_126(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
			uParam4 = unk_0xD2809C7F7FD79247(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) != joaat("vehicle_gen_controller"))
			{
				Global_76384 = unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351());
			}
		}
		func_174(iParam5, &Var0, Param1, uParam4, func_180(iParam0));
		func_140(iParam5, iParam0, 0);
	}
}

void func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_170(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 12) && !unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75396.f_555[0 /*21*/].f_4 != unk_0x7F375072508F738F(iParam1))
		{
			return;
		}
	}
	if (Global_76303 != -1 && Global_76303 != iParam0)
	{
		return;
	}
	if (unk_0xD4B321D9096B01FC(iParam1))
	{
		if (unk_0xD960230552BC4165(iParam1, 0))
		{
			if (!unk_0x00123AB82C5FAC28(iParam1))
			{
				unk_0xE5C667CF3B4642D2(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_111560.f_32744.f_4801 = func_159();
			}
			if (iParam1 != Global_75396.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_190(iParam0);
					if ((unk_0xD4B321D9096B01FC(iVar0) && unk_0xD960230552BC4165(iVar0, 0)) && iParam1 != iVar0)
					{
						func_141(iVar0, 145);
					}
				}
				Global_76302 = iParam1;
				Global_76303 = iParam0;
				Global_76304 = iParam2;
			}
		}
	}
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_142(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x300C62F79A4441EB(iParam0, -1, 0);
		if (!unk_0xD4B321D9096B01FC(iVar0))
		{
			iVar0 = unk_0x30766BC434AF2797(iParam0, -1);
		}
		if (unk_0xD4B321D9096B01FC(iVar0) && !unk_0x2BF5E63466422C38(iVar0))
		{
			if (unk_0x7F375072508F738F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x7F375072508F738F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x7F375072508F738F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111560.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x7F375072508F738F(iParam0) == Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9591DE0F00127F2A(&(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111560.f_32744.f_5592[iVar1] = iVar2;
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
		if (unk_0x7F375072508F738F(iParam0) == Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9591DE0F00127F2A(&(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111560.f_32744.f_5590 = iParam1;
	Global_76301 = iParam0;
	Global_111560.f_32744.f_5588 = 1;
	func_181(iParam0, &(Global_111560.f_32744.f_5510));
}

int func_142(int iParam0)
{
	if ((((((((((!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0)) || func_157(iParam0, 0, 0)) || func_157(iParam0, 1, 0)) || func_157(iParam0, 2, 0)) || func_180(iParam0) != 145) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || !func_143(unk_0x7F375072508F738F(iParam0)))
	{
		if (func_155(iParam0))
		{
		}
		if (func_155(iParam0))
		{
		}
		if (func_157(iParam0, 0, 0))
		{
		}
		if (func_157(iParam0, 1, 0))
		{
		}
		if (func_157(iParam0, 2, 0))
		{
		}
		if (func_180(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_143(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_144(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5EA23EAAAD4E34BF(iParam0) || unk_0x31337ABC07783F10(iParam0)) || unk_0xDC118E11A4081E9A(iParam0)) || unk_0x89771D1B3DD40E7A(iParam0))
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

int func_144(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7576BED9351136C1(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x393E9918BC37548A()) || (iParam0 == joaat("buffalo3") && !unk_0x393E9918BC37548A())) || (iParam0 == joaat("gauntlet2") && !unk_0x393E9918BC37548A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x393E9918BC37548A()))
	{
		if (!func_152())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x77B48D1493D695CC())
		{
			if (unk_0x100A6954526E9D29(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC095980A527DC92E(Var1.f_0))
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
		if ((((!func_151() && !func_150()) && !func_149()) && !func_148()) && !func_152())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x77BA37DB22C66465() || unk_0xE434AB6E3DE89861()) || unk_0x39FDED461BF385C3())
		{
		}
		else if (!func_149())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_147(iParam0))
		{
			return 0;
		}
	}
	if (!func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_145(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_146())
	{
		return 1;
	}
	unk_0xF6DFB55D0FF92B17(&iVar0, &uVar1);
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
	if (!unk_0x83F1366905AB3447(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_146()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x71EC776E812C6A0A();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_148()
{
	return 0;
}

int func_149()
{
	return 1;
}

int func_150()
{
	return 1;
}

int func_151()
{
	if (unk_0x9742C47C6EA02281(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	var uVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		if (unk_0x6E49FBC03EADD517())
		{
			if (unk_0x9A23AF8E6095D4CF())
			{
				unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xA1E7A40E1F56E511(&uVar0, 2);
				unk_0xA1E7A40E1F56E511(&uVar0, 4);
				unk_0xA1E7A40E1F56E511(&uVar0, 6);
				unk_0xA1E7A40E1F56E511(&Global_25, 2);
				unk_0xA1E7A40E1F56E511(&Global_25, 4);
				unk_0xA1E7A40E1F56E511(&Global_25, 6);
				unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB61D5BE0528E9538())
				{
					uVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&uVar0, 0);
					unk_0x553DEB79071ABB59(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (unk_0xB61D5BE0528E9538())
	{
		if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x7F375072508F738F(iParam0);
	sVar1 = unk_0x8D762F81855E767B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x2553916E420E8EF0(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_144(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD4B321D9096B01FC(Global_96060[iVar0]))
		{
			if (Global_96060[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_155(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]) && unk_0xD960230552BC4165(Global_96030[iVar0], 0))
			{
				if (Global_96030[iVar0] == iParam0 && unk_0x7F375072508F738F(Global_96030[iVar0]) == unk_0x7F375072508F738F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(Global_75396.f_484[24]))
	{
		if (iParam0 == Global_75396.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD4B321D9096B01FC(Global_75396.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75396.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_158(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA2BC31158C8CEFD2(Global_111560.f_7224[iVar9], 0))
		{
			if (unk_0x89C1B63B3CB1739A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_159()
{
	var uVar0;
	
	func_169(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_168(&uVar0, unk_0x8F7802EF0E800F47());
	func_167(&uVar0, unk_0xA63165E74E9A042B());
	func_162(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_161(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_160(&uVar0, unk_0x10CB21C87A35156F());
	return uVar0;
}

void func_160(var uParam0, int iParam1)
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

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_166(*uParam0);
	iVar1 = func_164(*uParam0);
	if (iParam1 < 1 || iParam1 > func_163(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_163(int iParam0, int iParam1)
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

var func_164(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_165(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_165(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_166(var uParam0)
{
	return uParam0 & 15;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_169(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_170(var uParam0, int iParam1)
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
			uParam0->f_4 = func_171(0, 1);
			uParam0->f_12 = 0;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_171(0, 1);
			uParam0->f_12 = 0;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_171(1, 1);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_171(1, 2);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 19);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_171(1, 1);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_171(1, 2);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 19);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_171(2, 1);
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 11);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 11);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 9);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 9);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
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
			if (func_152())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 1);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_152())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 1);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111560.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_126(Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111560.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111560.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 19))
	{
		if (!func_126(Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 20))
	{
		if (!func_126(Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_173(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_172(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_172(int iParam0, var uParam1, int iParam2)
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
			if (Global_111560.f_9080.f_99.f_58[128] && !Global_111560.f_9080.f_99.f_58[131])
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
					if (Global_111560.f_9080.f_99.f_58[119])
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
			else if (Global_111560.f_9080.f_99.f_58[118])
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

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

void func_174(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_170(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 10))
		{
			func_179(iParam0);
			func_178(uParam1, &(Global_111560.f_32744.f_69[Global_75396.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 11))
			{
				Global_111560.f_32744.f_1864[Global_75396.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_111560.f_32744.f_1934[Global_75396.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_111560.f_32744.f_1864[Global_75396.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111560.f_32744.f_1934[Global_75396.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111560.f_32744.f_1958[Global_75396.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_175(iParam0, 1);
		}
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_177(iParam0, 0))
		{
			func_176(iParam0, 1, 0);
			func_176(iParam0, 2, 0);
			func_176(iParam0, 3, 0);
			func_176(iParam0, 4, 0);
			func_176(iParam0, 0, 1);
			Global_75396[iParam0] = 1;
		}
	}
	else
	{
		func_176(iParam0, 0, 0);
	}
}

void func_176(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_32744[iParam0]), iParam1);
	}
}

bool func_177(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_111560.f_32744[iParam0], iParam1);
}

void func_178(var uParam0, var uParam1)
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

void func_179(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD4B321D9096B01FC(Global_75396.f_139[iParam0]))
		{
			unk_0xE5C667CF3B4642D2(Global_75396.f_139[iParam0], 1, 1);
			unk_0xF25956700ADFD77F(&(Global_75396.f_139[iParam0]));
			Global_75396.f_139[iParam0] = 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 13))
		{
			func_175(iParam0, 0);
		}
	}
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 145;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_181(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		func_185(uParam1);
		uParam1->f_66 = unk_0x7F375072508F738F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x8D762F81855E767B(iParam0), 16);
		*uParam1 = unk_0x15573EDB7C261B90(iParam0);
		unk_0xA0D7A86C25861B15(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x419E9D2174D7719D(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD71E7132121C0D3E(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xE3ED8ECBFAC24D1B(iParam0);
		uParam1->f_67 = unk_0xFAFC58D85092C270(iParam0);
		uParam1->f_69 = unk_0x20ACED1EFBCD772F(iParam0);
		uParam1->f_70 = unk_0x53B8ABE899D7A6D5(iParam0);
		unk_0xBF4B7EDAACFA006E(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3D70A45CE998115E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xABAE008A600C0215(iParam0, 2))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 28);
		}
		if (unk_0xABAE008A600C0215(iParam0, 3))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 29);
		}
		if (unk_0xABAE008A600C0215(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 30);
		}
		if (unk_0xABAE008A600C0215(iParam0, 1))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_184(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7A0A412D276E522A(iParam0, 0))
		{
			uParam1->f_68 = unk_0x331921060784BA6D(iParam0);
		}
		if (unk_0x31337ABC07783F10(uParam1->f_66))
		{
			if (unk_0x0B70023E8CF129D6(iParam0))
			{
				switch (unk_0x80560A645560481F(iParam0))
				{
					case 3:
					case 0:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDD2D40FFFA144057(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 9);
		}
		if (unk_0x0064CADA7C0E1595(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 10);
		}
		if (unk_0x2C905D7AE4F3E3EA(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 13);
			unk_0xD6427EDEA38DA83A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x86932E0F4CD07767(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 12);
		}
		func_183(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x21A121AEFFBC84B4(iParam0, iVar0 + 1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_182(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7B2058C6797B2C04(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 11);
		}
		if (unk_0x145DAE1A4D0EA05D(iParam0, "IgnoredByQuickSave") && unk_0x607A7A0DD7EB666D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 27);
		}
	}
}

int func_182(int iParam0)
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

int func_183(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD960230552BC4165(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x6AA7F87D45193D03(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				switch (unk_0xD1A3841ED22A9A4F(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF05B9E4C6631EA28(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_185(var uParam0)
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

void func_186(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_179(iParam0);
	func_175(iParam0, 0);
}

int func_187(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_188(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_188(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93737[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93737[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_189(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xD34AF93E9BCF12F0(Param0, Global_93737[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_189(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_111560.f_7224[iParam0], 0);
}

int func_190(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75396.f_139[iParam0];
}

int func_191()
{
	func_192();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_192()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_194(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_193(unk_0x0FA8183DAD2B3203());
			if (func_173(iVar0) && (!func_37(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_173(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

int func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_194(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_194(int iParam0)
{
	if (func_173(iParam0))
	{
		return func_195(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_195(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_196(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_197(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xE1A3A3468E806677(sParam0);
	unk_0x743C4524DF783B2F(iParam1, 1);
}

int func_198(int iParam0, bool bParam1, bool bParam2)
{
	return func_51(iParam0, !bParam1, bParam2);
}

int func_199(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		switch (unk_0x43A9DE3F19CB8A43(iParam0))
		{
			case 1:
				if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0xF4B969E0807E76C7(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_200(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x9B35D07DCD0F0B43() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_201()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!iLocal_1351)
		{
			func_204(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), -1);
			func_203(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), -1);
			iLocal_1351 = 1;
		}
	}
	else if (iLocal_1351)
	{
		func_203(0, -1);
		func_204(0, -1);
		iLocal_1351 = 0;
	}
	if (!iLocal_1349)
	{
		if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
		{
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1))
			{
				unk_0x2136EFCE710EB280("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1349 = 1;
			}
			else if (unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
			{
				unk_0x2136EFCE710EB280("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1349 = 1;
			}
		}
	}
	if (iLocal_93 == 0)
	{
		switch (iLocal_1303)
		{
			case 0:
				if ((unk_0xD4B321D9096B01FC(Local_1306.f_0) && !unk_0x2BF5E63466422C38(Local_1306.f_0)) && func_134(&(Local_1084[0 /*8*/])))
				{
					if (Local_1084[0 /*8*/].f_1 == 1)
					{
						if (func_202(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1) > 500f)
						{
							func_307(1);
						}
					}
					else if (Local_1084[0 /*8*/].f_1 == 4)
					{
						if (func_202(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1) > 250f)
						{
							func_307(1);
						}
					}
					else if (func_202(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1) > 250f)
					{
						func_307(2);
					}
				}
				else if (func_202(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1) > 250f)
				{
					func_307(2);
				}
				break;
			
			case 1:
				if (func_202(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1) > 250f)
				{
					func_307(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0xD4B321D9096B01FC(Local_1322[0 /*2*/]) && func_202(unk_0x0FA8183DAD2B3203(), Local_1322[0 /*2*/], 1) > 250f) && unk_0xD4B321D9096B01FC(Local_1322[1 /*2*/])) && func_202(unk_0x0FA8183DAD2B3203(), Local_1322[1 /*2*/], 1) > 250f) && unk_0xD4B321D9096B01FC(Local_1322[2 /*2*/])) && func_202(unk_0x0FA8183DAD2B3203(), Local_1322[2 /*2*/], 1) > 250f)
					{
						func_307(3);
					}
				}
				break;
			}
	}
	if (unk_0xD4B321D9096B01FC(Local_1318.f_0))
	{
		if ((unk_0xE294A1321110B3E9(Local_1318.f_0) && !unk_0xD960230552BC4165(Local_1318.f_0, 0)) && !unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
		{
			func_307(4);
		}
	}
}

float func_202(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

void func_203(int iParam0, int iParam1)
{
	Global_61482 = iParam0;
	Global_61483 = iParam1;
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_61484 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (iParam1 == -1 || Global_73567[iVar0 /*9*/] == iParam1)
		{
			if (Global_73567[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73567[iVar0 /*9*/].f_6 = iParam0;
				Global_73567[iVar0 /*9*/].f_7 = 1;
				Global_73567[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_205()
{
	if (unk_0xD4B321D9096B01FC(Local_1306.f_0))
	{
		if (!unk_0x5294582CE404D3F4(Local_1306.f_0, 0))
		{
			func_206(Local_1306.f_0, &(Local_1306.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
	}
	if (unk_0xD4B321D9096B01FC(Local_1318.f_0))
	{
		if (((!func_199(Local_1318.f_0) && unk_0xF4B969E0807E76C7(Local_1318.f_0, 0)) && iLocal_1346) && func_202(Local_1318.f_0, unk_0x0FA8183DAD2B3203(), 1) > 200f)
		{
			unk_0xF25956700ADFD77F(&Local_1318);
		}
	}
}

int func_206(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x7A8732CFB5113E77();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2BF5E63466422C38(uParam0))
	{
		if (!unk_0xD16F58ECC1C52CA2(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xE780F376C4EE1889(iParam0, 1);
			}
			else
			{
				unk_0x07AAE308C469D4B9(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x432AB2F1478809C8(iParam0, iParam2);
			unk_0x78AA771D23BD33D0(iParam0, fParam6);
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				unk_0x6089156CDC87FE4B(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xB37778208305A9B0(iParam0, iParam9);
		}
		unk_0x6E5905FC20A8345C(iParam0, iParam4);
		unk_0x5D4D921D98B0E72C(iParam0, iParam5);
		*uParam1 = unk_0x561AE37FE7777958(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x088577CF98F96D05(*uParam1, iParam8);
				}
				if (!unk_0x9591DE0F00127F2A(iParam7))
				{
					unk_0xD84B23397AD07105("STRING");
					if (bParam10)
					{
						unk_0xA89C789CC9FEF523(iParam7);
					}
					else
					{
						unk_0x0AC9F8E1AFCEC860(iParam7);
					}
					unk_0xC2DE1B83E9D17024(*uParam1);
				}
				unk_0x6089156CDC87FE4B(*uParam1, 7);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(uParam1->f_6, 2))
		{
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5294582CE404D3F4(iParam0, 0))
		{
			uParam1->f_1 = unk_0xD63A0ACEC4E5647D(iParam0);
			if (!unk_0xA2BC31158C8CEFD2(uParam1->f_6, 3))
			{
				if (unk_0x39A01A052D9B5FF0(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x088577CF98F96D05(uParam1->f_1, iParam8);
					}
					if (!unk_0x9591DE0F00127F2A(iParam7))
					{
						unk_0xD84B23397AD07105("STRING");
						if (bParam10)
						{
							unk_0xA89C789CC9FEF523(iParam7);
						}
						else
						{
							unk_0x0AC9F8E1AFCEC860(iParam7);
						}
						unk_0xC2DE1B83E9D17024(uParam1->f_1);
					}
					unk_0x6089156CDC87FE4B(uParam1->f_1, 7);
					unk_0xA1E7A40E1F56E511(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x39A01A052D9B5FF0(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x3B76114EC84D5812(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x39A01A052D9B5FF0(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x3B76114EC84D5812(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_207()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_96 == 1)
	{
		if (!unk_0x260395BA7F0C83CB())
		{
			if (!unk_0xA710300CD13D2877())
			{
				unk_0x5800A2599806C837(1000);
			}
		}
		else
		{
			if (unk_0x9C472738425216B8())
			{
				unk_0xBFE927EB9D89F26B(0);
				unk_0xBC60E9BBAF0E13DD();
			}
			iLocal_93 = iLocal_97;
			unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
			unk_0x1C9DBC28A851F0A6();
			unk_0x0D23E3918F7AF11B(1);
			func_8(1);
			if (unk_0x9C472738425216B8())
			{
				unk_0xBC60E9BBAF0E13DD();
			}
			if (!func_281())
			{
				func_280(iLocal_93, &Var0, &uVar3);
				unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Var0, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), uVar3);
				unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), 1);
				func_278(&uLocal_99, Var0, 50f, 0);
			}
			func_277(&uLocal_99);
			switch (iLocal_93)
			{
				case 0:
					func_276(&uLocal_99, iLocal_83);
					func_276(&uLocal_99, iLocal_84);
					func_276(&uLocal_99, iLocal_85);
					func_275(&uLocal_99, &Global_95561);
					break;
				
				case 1:
					func_276(&uLocal_99, joaat("burrito2"));
					break;
			}
			while (!func_274(&uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_205();
			}
			switch (iLocal_93)
			{
				case 0:
					while (!func_267(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x2553916E420E8EF0(&Global_95561, "jhp2a_main"))
					{
						while (!func_211(&iLocal_1316, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x7FB505C34A14BAAA(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						while (!func_211(&iLocal_1316, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x7FB505C34A14BAAA(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0, 0);
						}
					}
					unk_0xA429E610637A53F5(iLocal_1316, 0);
					unk_0xE40520F16D25E48C(iLocal_1316, 1, false);
					unk_0xE40520F16D25E48C(iLocal_1316, 2, true);
					unk_0x1ECAE5FB4DE78CF8(iLocal_1316, 1084227584);
					unk_0xB90231068DCFFBA1(iLocal_1316, 1, 1, 0);
					if (func_281())
					{
						func_208(iLocal_1316, -1, 1);
					}
					else
					{
						unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), 0);
						unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), iLocal_1316, -1);
					}
					unk_0xB489E71A45CDC02F(0f);
					unk_0xA291E27354439AE9(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1318.f_0 = unk_0x847817A65E16621A(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
						unk_0x13BE685F855BA48C(Local_1318.f_0, 0);
						unk_0x1ECAE5FB4DE78CF8(Local_1318.f_0, 1084227584);
					}
					if (func_281())
					{
						func_208(0, -1, 1);
					}
					else
					{
						unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), 0);
					}
					unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 359.5735f);
					unk_0xB489E71A45CDC02F(0f);
					unk_0xA291E27354439AE9(0f, 1065353216);
					break;
			}
			if (unk_0x260395BA7F0C83CB() || !unk_0xC862E94A8ABC89B8())
			{
				unk_0xCF33E56642B34516(1000);
			}
			bLocal_96 = false;
		}
	}
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	if (func_210() && func_281())
	{
		while (Global_98664 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x269298D09D57BFCF(0);
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				unk_0x2D93ABBD68F7B1FF(unk_0x0FA8183DAD2B3203());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xD4B321D9096B01FC(iParam0))
				{
					if (unk_0xD960230552BC4165(iParam0, 0))
					{
						if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam0, 0))
						{
							unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), iParam0, iParam1);
							unk_0xA291E27354439AE9(0f, 1065353216);
							unk_0xB489E71A45CDC02F(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
			}
		}
		unk_0x743D1F9F153AE1CB();
		func_209(0);
	}
}

void func_209(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_98669.f_20), 13);
	}
}

int func_210()
{
	if (Global_98669 == 10 || Global_98669 == 9)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_210())
	{
		if (func_266())
		{
			func_178(&(Global_105109.f_2890.f_12), &Var0);
		}
	}
	else if (func_264())
	{
		func_178(&(Global_102125.f_2890.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_263(0, &Var0))
		{
			if (unk_0x2741F9670A602A19(Var0.f_66) || unk_0xF39FF829579D1A21(Var0.f_66))
			{
				unk_0x6BB2B1818CAE531E(Var0.f_66);
				if (unk_0x6DF9C43E3CC645BC(Var0.f_66))
				{
					*iParam0 = unk_0x847817A65E16621A(Var0.f_66, Param1, fParam4, 1, 1, 0);
					func_252(*iParam0, &Var0, 0, 1);
					unk_0xE0AC40EF164A2569(Var0.f_66);
					unk_0x1ECAE5FB4DE78CF8(*iParam0, 1084227584);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam5 = true;
		}
	}
	if (bParam5)
	{
		if (!unk_0xD4B321D9096B01FC(*iParam0))
		{
			if (func_212(iParam0, 0, Param1, fParam4, 1, 0))
			{
				unk_0x0A43D5D11052D038(func_171(0, 0), 1);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_212(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_173(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_172(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0xD4B321D9096B01FC(*iParam0))
		{
			if (unk_0x7F375072508F738F(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_111560.f_2358.f_539.f_4316) && Global_111560.f_9080.f_99.f_58[131])
		{
			Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x6BB2B1818CAE531E(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x6DF9C43E3CC645BC(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x847817A65E16621A(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x1ECAE5FB4DE78CF8(*iParam0, 1084227584);
				unk_0x0B440CF5F7F3A631(*iParam0, 0);
				unk_0xE753801D8B1C2468(*iParam0, 0);
				unk_0x4BA8ED9D4B9825B8(*iParam0, 1);
				unk_0x0BBBAC4546BFE280(*iParam0, 1250, 0);
				unk_0xD0B22FF01C85E189(*iParam0, 1250f);
				unk_0xB889BBE872BE4055(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x9E0EE3FF7D8C67E8(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xE262D2AD599AFAF7(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xFA8246C40ECE4497(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xE40520F16D25E48C(*iParam0, iVar103 + 1, !Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x068E9B32DEC6602D(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_251(&uVar1, &uVar0))
				{
					unk_0x34F7B46842A3104F(*iParam0, &uVar1);
					unk_0x74861AF798EAAC89(*iParam0, uVar0);
				}
				else
				{
					unk_0x34F7B46842A3104F(*iParam0, &(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xE6159996DB8F1349())
					{
						unk_0x74861AF798EAAC89(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xF9EAAF2F0EB37627(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x3E26E6ECFA8CB038(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x17B723D2A9585EAD(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x52B7190E5C68B9AF(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x049AF56411641BE7(*iParam0, 2, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x049AF56411641BE7(*iParam0, 3, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x049AF56411641BE7(*iParam0, 0, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x049AF56411641BE7(*iParam0, 1, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x77C4C65BD9BC1A17(*iParam0) > 1 && Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x981DE5464D141CA2(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(*iParam0)))
					{
						if (unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(*iParam0)))
						{
							if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xF6B70CD4DB1AD09D(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xF6B70CD4DB1AD09D(*iParam0, Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_247(iParam0, &(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x07C05F206EDAB7C8(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x7F375072508F738F(*iParam0) == joaat("bodhi2"))
					{
						func_245(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xE0AC40EF164A2569(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_244(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x6BB2B1818CAE531E(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x6DF9C43E3CC645BC(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x847817A65E16621A(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x1ECAE5FB4DE78CF8(*iParam0, 1084227584);
				unk_0x0B440CF5F7F3A631(*iParam0, 0);
				unk_0xE753801D8B1C2468(*iParam0, 0);
				unk_0x4BA8ED9D4B9825B8(*iParam0, 1);
				unk_0x0BBBAC4546BFE280(*iParam0, 1250, 0);
				unk_0xD0B22FF01C85E189(*iParam0, 1250f);
				unk_0xB889BBE872BE4055(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x9E0EE3FF7D8C67E8(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xE262D2AD599AFAF7(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xFA8246C40ECE4497(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xE40520F16D25E48C(*iParam0, iVar104 + 1, !Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x068E9B32DEC6602D(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_251(&uVar1, &uVar0))
				{
					unk_0x34F7B46842A3104F(*iParam0, &uVar1);
					unk_0x74861AF798EAAC89(*iParam0, uVar0);
				}
				else
				{
					unk_0x34F7B46842A3104F(*iParam0, &(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xE6159996DB8F1349())
					{
						unk_0x74861AF798EAAC89(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xF9EAAF2F0EB37627(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x3E26E6ECFA8CB038(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x17B723D2A9585EAD(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x52B7190E5C68B9AF(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x049AF56411641BE7(*iParam0, 2, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x049AF56411641BE7(*iParam0, 3, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x049AF56411641BE7(*iParam0, 0, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x049AF56411641BE7(*iParam0, 1, unk_0xA2BC31158C8CEFD2(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x77C4C65BD9BC1A17(*iParam0) > 1 && Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x981DE5464D141CA2(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(*iParam0)))
					{
						if (unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(*iParam0)))
						{
							if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xF6B70CD4DB1AD09D(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xF6B70CD4DB1AD09D(*iParam0, Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_247(iParam0, &(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x07C05F206EDAB7C8(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x7F375072508F738F(*iParam0) == joaat("bodhi2"))
					{
						func_245(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xE0AC40EF164A2569(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_244(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x6BB2B1818CAE531E(Var5.f_0);
			if (unk_0x6DF9C43E3CC645BC(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x847817A65E16621A(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0x1ECAE5FB4DE78CF8(*iParam0, 1084227584);
				unk_0x0B440CF5F7F3A631(*iParam0, 0);
				unk_0xE753801D8B1C2468(*iParam0, 0);
				unk_0x4BA8ED9D4B9825B8(*iParam0, 1);
				StringCopy(&cVar106, unk_0x8D762F81855E767B(*iParam0), 16);
				unk_0x0BBBAC4546BFE280(*iParam0, 1250, 0);
				unk_0xD0B22FF01C85E189(*iParam0, 1250f);
				unk_0xB889BBE872BE4055(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x9E0EE3FF7D8C67E8(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xE262D2AD599AFAF7(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xFA8246C40ECE4497(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xE40520F16D25E48C(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x068E9B32DEC6602D(*iParam0, Var5.f_24);
				}
				if (func_251(&uVar1, &uVar0))
				{
					unk_0x34F7B46842A3104F(*iParam0, &uVar1);
					unk_0x74861AF798EAAC89(*iParam0, uVar0);
				}
				else
				{
					unk_0x34F7B46842A3104F(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xE6159996DB8F1349())
					{
						unk_0x74861AF798EAAC89(*iParam0, Var5.f_26);
					}
				}
				unk_0xF9EAAF2F0EB37627(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x3E26E6ECFA8CB038(*iParam0, Var5.f_88);
				unk_0x17B723D2A9585EAD(*iParam0, Var5.f_87);
				unk_0x52B7190E5C68B9AF(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x049AF56411641BE7(*iParam0, 2, unk_0xA2BC31158C8CEFD2(Var5.f_92, 28));
				unk_0x049AF56411641BE7(*iParam0, 3, unk_0xA2BC31158C8CEFD2(Var5.f_92, 29));
				unk_0x049AF56411641BE7(*iParam0, 0, unk_0xA2BC31158C8CEFD2(Var5.f_92, 30));
				unk_0x049AF56411641BE7(*iParam0, 1, unk_0xA2BC31158C8CEFD2(Var5.f_92, 31));
				if (unk_0x77C4C65BD9BC1A17(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x981DE5464D141CA2(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(*iParam0)))
					{
						if (unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xF6B70CD4DB1AD09D(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xF6B70CD4DB1AD09D(*iParam0, Var5.f_90);
						}
					}
				}
				func_247(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x07C05F206EDAB7C8(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x7F375072508F738F(*iParam0) == joaat("bagger") && !Global_111560.f_9080.f_99.f_58[118])
					{
						unk_0x34F7B46842A3104F(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x7F375072508F738F(*iParam0) == joaat("bodhi2"))
					{
						func_245(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_111560.f_2358.f_539.f_4316) && Global_111560.f_9080.f_99.f_58[131]) && unk_0x7F375072508F738F(*iParam0) == joaat("tailgater"))
				{
					unk_0xED4CA44675A55548(*iParam0, 6, 1, false);
					unk_0xED4CA44675A55548(*iParam0, 14, 7, false);
					unk_0xED4CA44675A55548(*iParam0, 11, 2, false);
					unk_0xED4CA44675A55548(*iParam0, 2, 3, false);
					unk_0xED4CA44675A55548(*iParam0, 7, 5, false);
					unk_0xED4CA44675A55548(*iParam0, 0, 0, false);
					unk_0xED4CA44675A55548(*iParam0, 3, 3, false);
					unk_0xED4CA44675A55548(*iParam0, 13, 1, false);
					unk_0xED4CA44675A55548(*iParam0, 4, 3, false);
					unk_0xED4CA44675A55548(*iParam0, 12, 2, false);
					unk_0x19DA756F0F6C6D42(*iParam0, 22, true);
					unk_0xF6B70CD4DB1AD09D(*iParam0, 2);
					unk_0xED4CA44675A55548(*iParam0, 23, 11, false);
					unk_0x17B723D2A9585EAD(*iParam0, 2);
					Global_111560.f_2358.f_539.f_4316 = 1;
					func_213(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0xE0AC40EF164A2569(Var5.f_0);
				}
				if (bVar105)
				{
					func_244(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_173(iParam0) && unk_0xD4B321D9096B01FC(*iParam1)) && unk_0xD960230552BC4165(*iParam1, 0))
	{
		if (iParam2 > Global_111560.f_2358.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_141(*iParam1, iParam0);
		}
		if (unk_0x6AA7F87D45193D03(*iParam1) != 0)
		{
			unk_0x97BEF8C19B950CA3(*iParam1, 0);
		}
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x7F375072508F738F(*iParam1);
		if (unk_0x40E0CEFFE06E7BDA(*iParam1, &iVar1))
		{
			Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x7F375072508F738F(iVar1);
		}
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xA73C062BC5C1D4BD(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x35D31BEBAFD53DE6(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x21A121AEFFBC84B4(*iParam1, 1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x21A121AEFFBC84B4(*iParam1, 2);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x21A121AEFFBC84B4(*iParam1, 3);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x21A121AEFFBC84B4(*iParam1, 4);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x21A121AEFFBC84B4(*iParam1, 5);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x21A121AEFFBC84B4(*iParam1, 6);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x21A121AEFFBC84B4(*iParam1, 7);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x21A121AEFFBC84B4(*iParam1, 8);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x21A121AEFFBC84B4(*iParam1, 9);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x21A121AEFFBC84B4(*iParam1, 10);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x21A121AEFFBC84B4(*iParam1, 11);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x21A121AEFFBC84B4(*iParam1, 12);
		if (unk_0x7A0A412D276E522A(*iParam1, 0))
		{
			iVar2 = unk_0x331921060784BA6D(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x3C40E7561F9217C8();
		StringCopy(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x8D762F81855E767B(*iParam1), 16);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x15573EDB7C261B90(*iParam1);
		unk_0xA0D7A86C25861B15(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x419E9D2174D7719D(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xD71E7132121C0D3E(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xDD2D40FFFA144057(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xE3ED8ECBFAC24D1B(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0xFAFC58D85092C270(*iParam1);
		Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x20ACED1EFBCD772F(*iParam1);
		unk_0x3D70A45CE998115E(*iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xABAE008A600C0215(*iParam1, 2))
		{
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xABAE008A600C0215(*iParam1, 3))
		{
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xABAE008A600C0215(*iParam1, 0))
		{
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xABAE008A600C0215(*iParam1, 1))
		{
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_111560.f_2358.f_539.f_4317[iParam0] = 10;
		if (unk_0xFE78FB1ABAF99F41(*iParam1) >= 0 && func_217(*iParam1, 0, &uVar0))
		{
			func_183(iParam1, &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_111560.f_20113[iParam0 /*43*/].f_40 = 1;
				Global_111560.f_20113[iParam0 /*43*/] = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_111560.f_20113[iParam0 /*43*/].f_3 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_111560.f_20113[iParam0 /*43*/].f_4 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_111560.f_20113[iParam0 /*43*/].f_5 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_111560.f_20113[iParam0 /*43*/].f_6 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_111560.f_20113[iParam0 /*43*/].f_10 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_111560.f_20113[iParam0 /*43*/].f_16 = !Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_111560.f_20113[iParam0 /*43*/].f_19 = { Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_111560.f_20113[iParam0 /*43*/].f_23 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_111560.f_20113[iParam0 /*43*/].f_7 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_111560.f_20113[iParam0 /*43*/].f_8 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_111560.f_20113[iParam0 /*43*/].f_9 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_111560.f_20113[iParam0 /*43*/].f_11 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_111560.f_20113[iParam0 /*43*/].f_12 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_111560.f_20113[iParam0 /*43*/].f_13 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_111560.f_20113[iParam0 /*43*/].f_14 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_111560.f_20113[iParam0 /*43*/].f_15 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_111560.f_20113[iParam0 /*43*/].f_18 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_111560.f_20113[iParam0 /*43*/].f_17 = Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_111560.f_20113[iParam0 /*43*/].f_24 = unk_0x94FA12918F306658(*iParam1, 11) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_25 = unk_0x94FA12918F306658(*iParam1, 12) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_26 = unk_0x94FA12918F306658(*iParam1, 4) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_27 = unk_0x94FA12918F306658(*iParam1, 23) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_28 = unk_0x94FA12918F306658(*iParam1, 14) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_29 = unk_0x94FA12918F306658(*iParam1, 16) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_30 = unk_0x94FA12918F306658(*iParam1, 15) + 1;
				Global_111560.f_20113[iParam0 /*43*/].f_32 = unk_0x36F0772D65C7E80E(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[0] = unk_0x9598FB2FC573F713(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[1] = unk_0xFB6F220F6088A543(*iParam1, 14, 0);
				Global_111560.f_20113[iParam0 /*43*/].f_33[2] = unk_0xFB6F220F6088A543(*iParam1, 14, 1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[3] = unk_0xFB6F220F6088A543(*iParam1, 14, 2);
				Global_111560.f_20113[iParam0 /*43*/].f_33[4] = unk_0xFB6F220F6088A543(*iParam1, 14, 3);
				Global_111560.f_20113[iParam0 /*43*/].f_39 = unk_0xBF74324E79EBF0B9(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_31 = func_216(*iParam1);
				Global_111560.f_20113[iParam0 /*43*/].f_33[0] = unk_0xD73ABC08C0BB352F(*iParam1);
				unk_0x6110D1473EA0987A(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_214(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_111560.f_20113[iParam0 /*43*/].f_1));
				unk_0x1EDFAF2470F3D099(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_214(Global_111560.f_2358.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_111560.f_20113[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_215(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_215(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0)) && unk_0xFE78FB1ABAF99F41(iParam0) >= 0)
	{
		if (unk_0xBF74324E79EBF0B9(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xBF74324E79EBF0B9(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xBF74324E79EBF0B9(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xBF74324E79EBF0B9(iParam0) == 0)
		{
			if (unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_217(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x7576BED9351136C1(unk_0x7F375072508F738F(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x7F375072508F738F(iParam0);
	if ((!func_242(iVar0, bParam1, uParam2) && !func_241(unk_0x7C7787D2D7139A85())) && !func_225(iParam0))
	{
		return 0;
	}
	if (func_241(unk_0x7C7787D2D7139A85()))
	{
		if (func_224(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_223(unk_0x7C7787D2D7139A85()) && (unk_0xDC118E11A4081E9A(iVar0) || unk_0x31337ABC07783F10(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x01412376937BFF5B(iParam0) && !func_221(iParam0)) && !bVar1) && !(func_220(unk_0x7F375072508F738F(iParam0)) && func_218(unk_0x7C7787D2D7139A85())))
	{
		switch (unk_0x7F375072508F738F(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x393E9918BC37548A())
	{
		if ((func_154(iParam0) && unk_0x7F375072508F738F(iParam0) != joaat("sentinel2")) && unk_0x7F375072508F738F(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_218(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

int func_220(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (unk_0x7F375072508F738F(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_222(unk_0x7C7787D2D7139A85()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (func_240(unk_0x7C7787D2D7139A85()) || func_239(unk_0x7C7787D2D7139A85()))
	{
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if ((!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0)) || unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		return 0;
	}
	if (func_229(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x145DAE1A4D0EA05D(iParam0, "Player_Vehicle"))
	{
		if (unk_0x7CE457B32235D9D1(iParam0, "Player_Vehicle") == unk_0x3A8CB41A7687F84C(unk_0x7C7787D2D7139A85()))
		{
			if (func_227(iParam0))
			{
				return 1;
			}
			switch (unk_0x7F375072508F738F(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
				case joaat("caracara"):
				case joaat("paragon2"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_227(int iParam0)
{
	if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	if (func_228(unk_0x7F375072508F738F(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
	}
	return 0;
}

int func_229(int iParam0, bool bParam1)
{
	switch (unk_0x7F375072508F738F(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_231(unk_0x7F375072508F738F(iParam0), 0))
			{
				if (Global_2531497.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_230(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437549.f_627[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_231(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_238(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_237();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14207)
			{
				return func_236();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14208)
			{
				return func_236();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14206)
			{
				return func_236();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14209)
			{
				return func_236();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14211)
			{
				return func_236();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_235();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18657)
			{
				return func_234();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18659)
			{
				return func_234();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18663)
			{
				return func_234();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18660)
			{
				return func_234();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18667)
			{
				return func_234();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18665)
			{
				return func_234();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18670)
			{
				return func_234();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20613)
			{
				return func_233();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20614)
			{
				return func_233();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_232();
			break;
		
		case joaat("glendale"):
			return func_232();
			break;
		
		case joaat("impaler"):
			return func_232();
			break;
		
		case joaat("issi3"):
			return func_232();
			break;
		
		case joaat("gargoyle"):
			return func_232();
			break;
		
		case joaat("dominator"):
			return func_232();
			break;
		
		case joaat("dominator2"):
			return func_232();
			break;
		
		case joaat("imperator"):
			return func_232();
			break;
		
		case joaat("imperator2"):
			return func_232();
			break;
		
		case joaat("imperator3"):
			return func_232();
			break;
		
		case joaat("deathbike"):
			return func_232();
			break;
		
		case joaat("deathbike2"):
			return func_232();
			break;
		
		case joaat("deathbike3"):
			return func_232();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_232();
			break;
	}
	return 0;
}

bool func_232()
{
	return unk_0x9742C47C6EA02281(joaat("mpchristmas2018"));
}

bool func_233()
{
	return unk_0x9742C47C6EA02281(joaat("mpgunrunning"));
}

bool func_234()
{
	return unk_0x9742C47C6EA02281(joaat("mpimportexport"));
}

bool func_235()
{
	return unk_0x9742C47C6EA02281(joaat("mpjanuary2016"));
}

bool func_236()
{
	return unk_0x9742C47C6EA02281(joaat("mplowrider2"));
}

bool func_237()
{
	return unk_0x9742C47C6EA02281(joaat("mplowrider"));
}

int func_238(int iParam0, int iParam1)
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
			if (!Global_262145.f_14207)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14208)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14206)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14209)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14211)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14210)
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
			if (Global_262145.f_18657)
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
			if (Global_262145.f_18659)
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
			if (Global_262145.f_18663)
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
			if (Global_262145.f_18660)
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
			if (Global_262145.f_18667)
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
			if (Global_262145.f_18665)
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
			if (Global_262145.f_18670)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20613)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20614)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_32())
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_32())
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_219(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_242(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_223(unk_0x7C7787D2D7139A85()) && (unk_0xDC118E11A4081E9A(iParam0) || unk_0x31337ABC07783F10(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!unk_0x2741F9670A602A19(iParam0) && !unk_0xF39FF829579D1A21(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x393E9918BC37548A())
	{
		if (func_243(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x393E9918BC37548A())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD4B321D9096B01FC(Global_96030[iVar0]))
		{
			Global_96030[iVar0] = uParam0;
			Global_96040[iVar0] = iParam1;
			Global_96050[iVar0] = unk_0x7F375072508F738F(uParam0);
			if (unk_0x2741F9670A602A19(Global_96050[iVar0]))
			{
				Global_96078[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96078[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_245(var uParam0)
{
	if (!func_246(*uParam0))
	{
		unk_0xE40520F16D25E48C(*uParam0, 5, !Global_111560.f_9080.f_99.f_58[119]);
	}
}

bool func_246(int iParam0)
{
	return unk_0x21A121AEFFBC84B4(uParam0, 5);
}

int func_247(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD960230552BC4165(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x6AA7F87D45193D03(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x97BEF8C19B950CA3(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x19DA756F0F6C6D42(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x19DA756F0F6C6D42(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xA0CB1E2419514BEC(*uParam0, 255);
				}
				else
				{
					unk_0xA0CB1E2419514BEC(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x19DA756F0F6C6D42(*uParam0, iVar1, false);
			}
		}
		else if (unk_0xF05B9E4C6631EA28(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xEDE84DC32D61DCFD(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xED4CA44675A55548(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xED4CA44675A55548(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xED4CA44675A55548(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_238(unk_0x7F375072508F738F(*uParam0), 1) && unk_0xF05B9E4C6631EA28(*uParam0, 24) != func_250(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xED4CA44675A55548(*uParam0, 24, func_250(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_249(uParam0);
	if (func_248(*uParam0))
	{
		unk_0x704613B55607A27B(*uParam0, 1);
		unk_0x4BA8ED9D4B9825B8(*uParam0, 1);
	}
	return 1;
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD4B321D9096B01FC(uParam0) && unk_0xD960230552BC4165(iParam0, 0)) && unk_0x6AA7F87D45193D03(iParam0) > 0)
	{
		unk_0x97BEF8C19B950CA3(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF05B9E4C6631EA28(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x3298CE0968CEC857(iParam0, iVar1, unk_0xF05B9E4C6631EA28(iParam0, iVar1)), 16);
				iVar2 = unk_0xA8C462EF7D9DC564(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xA8C462EF7D9DC564("MNU_CAGE") || iVar2 == unk_0xA8C462EF7D9DC564("SABRE_CAG"))
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

void func_249(var uParam0)
{
	switch (unk_0x7F375072508F738F(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xF05B9E4C6631EA28(*uParam0, 4) == 0)
			{
				unk_0xED4CA44675A55548(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xEDE84DC32D61DCFD(*uParam0, 13);
			}
			break;
	}
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD4B321D9096B01FC(uParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		switch (unk_0x7F375072508F738F(iParam0))
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
		iVar0 = unk_0x94FA12918F306658(iParam0, 38);
		iVar1 = unk_0x94FA12918F306658(iParam0, 24);
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

int func_251(var uParam0, var uParam1)
{
	if (unk_0x393E9918BC37548A())
	{
	}
	else if (Global_111560.f_20113.f_261)
	{
		*uParam0 = { Global_111560.f_20113.f_267 };
		*uParam1 = Global_111560.f_20113.f_271;
		return 1;
	}
	return 0;
}

void func_252(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD960230552BC4165(uParam0, 0))
	{
		if (!func_256(iParam0))
		{
			if (unk_0xA8C462EF7D9DC564(&(uParam1->f_1)) != 0)
			{
				unk_0x34F7B46842A3104F(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xE6159996DB8F1349())
			{
				unk_0x74861AF798EAAC89(iParam0, *uParam1);
			}
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
			if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, func_182(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_182(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, func_182(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_182(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x8B79524A412BE3C5(iParam0, 0);
			if (unk_0xF05B9E4C6631EA28(iParam0, 5) != -1)
			{
				unk_0x8B79524A412BE3C5(iParam0, 1);
			}
		}
		if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, 13))
		{
			unk_0xE6C8815EEB38ED11(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x8D1A98A2FE1C9D65(iParam0);
		}
		if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, 12))
		{
			unk_0x237824A1F6651922(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x600A9AF7166F6DB9(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0x9E0EE3FF7D8C67E8(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xE262D2AD599AFAF7(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xA2BC31158C8CEFD2(uParam1->f_77, 15) || func_255(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_254())
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
		unk_0xF9EAAF2F0EB37627(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_184(uParam1->f_66))
		{
			unk_0x17B723D2A9585EAD(iParam0, 0);
		}
		else
		{
			unk_0x17B723D2A9585EAD(iParam0, 0);
			unk_0x17B723D2A9585EAD(iParam0, uParam1->f_65);
		}
		unk_0x3E26E6ECFA8CB038(iParam0, !unk_0xA2BC31158C8CEFD2(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x54B5C3A13D3588F0(iParam0, uParam1->f_70);
		}
		unk_0x52B7190E5C68B9AF(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x049AF56411641BE7(iParam0, 2, unk_0xA2BC31158C8CEFD2(uParam1->f_77, 28));
		unk_0x049AF56411641BE7(iParam0, 3, unk_0xA2BC31158C8CEFD2(uParam1->f_77, 29));
		unk_0x049AF56411641BE7(iParam0, 0, unk_0xA2BC31158C8CEFD2(uParam1->f_77, 30));
		unk_0x049AF56411641BE7(iParam0, 1, unk_0xA2BC31158C8CEFD2(uParam1->f_77, 31));
		unk_0xEF5C4BC935BFF76E(iParam0, unk_0xA2BC31158C8CEFD2(uParam1->f_77, 10));
		if (unk_0x77C4C65BD9BC1A17(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x981DE5464D141CA2(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(iParam0)))
			{
				if (unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_253(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_253(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7A0A412D276E522A(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x7C7558B7F1A22F6D(iParam0, 1);
			}
			else
			{
				unk_0xC9FDC66A6AA741C8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_247(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xDC118E11A4081E9A(uParam1->f_66) && !unk_0x5EA23EAAAD4E34BF(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, func_182(iVar2 + 1)))
				{
					if (!unk_0x21A121AEFFBC84B4(iParam0, iVar2 + 1))
					{
						unk_0xE40520F16D25E48C(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x21A121AEFFBC84B4(iParam0, iVar2 + 1))
				{
					unk_0xE40520F16D25E48C(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x7F375072508F738F(iParam0) == joaat("sheava") || unk_0x7F375072508F738F(iParam0) == joaat("omnis")) || unk_0x7F375072508F738F(iParam0) == joaat("le7b"))
		{
			if (unk_0xF05B9E4C6631EA28(iParam0, 0) == -1)
			{
				unk_0xE40520F16D25E48C(iParam0, 1, false);
			}
		}
		if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			unk_0xE40520F16D25E48C(iParam0, 1, false);
			unk_0xE40520F16D25E48C(iParam0, 2, false);
			unk_0xE40520F16D25E48C(iParam0, 3, false);
			unk_0xE40520F16D25E48C(iParam0, 4, false);
			unk_0xE40520F16D25E48C(iParam0, 5, false);
			unk_0xE40520F16D25E48C(iParam0, 6, false);
			unk_0xE40520F16D25E48C(iParam0, 7, false);
			unk_0xE40520F16D25E48C(iParam0, 8, false);
		}
		if (((unk_0x31337ABC07783F10(uParam1->f_66) && unk_0x293B974EEA1C7C7C(iParam0)) && !unk_0x759DEE4D113EC07E(iParam0, joaat("avenger"))) && !((((Global_4456448.f_58154 == 6 || Global_4456448.f_58154 == 7) || Global_4456448.f_58154 == 18) || Global_4456448.f_58154 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xA2BC31158C8CEFD2(uParam1->f_77, 23))
			{
				if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, 22))
				{
					unk_0x00C0C8FB384FCCF2(iParam0, 2);
				}
				else
				{
					unk_0x00C0C8FB384FCCF2(iParam0, 3);
				}
			}
			else
			{
				unk_0x00C0C8FB384FCCF2(iParam0, 4);
			}
		}
		if (unk_0xA2BC31158C8CEFD2(uParam1->f_77, 27))
		{
			unk_0x7D209FC24D3550F6(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x7D209FC24D3550F6(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_253(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6AA7F87D45193D03(uParam0) > 0)
	{
		unk_0x97BEF8C19B950CA3(iParam0, 0);
		iVar0 = unk_0xF05B9E4C6631EA28(iParam0, 24);
		iVar1 = unk_0x627338D61F1048BA(iParam0, 24);
		unk_0xF6B70CD4DB1AD09D(iParam0, uParam1);
		if (unk_0x7F375072508F738F(iParam0) == joaat("tornado6") || unk_0x7F375072508F738F(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xEDE84DC32D61DCFD(iParam0, 24);
		}
		else
		{
			unk_0xED4CA44675A55548(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_254()
{
	return unk_0x9742C47C6EA02281(joaat("mpindependence"));
}

int func_255(int iParam0)
{
	var uVar0;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (unk_0xD960230552BC4165(iParam0, 0))
		{
			if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
			{
				if (unk_0x145DAE1A4D0EA05D(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x7CE457B32235D9D1(iParam0, "MPBitset");
				}
				return unk_0xA2BC31158C8CEFD2(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!func_262(unk_0x7C7787D2D7139A85(), -1))
		{
			uParam0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		}
	}
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	if (unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	if (func_258(unk_0x7C7787D2D7139A85()) == 3)
	{
		if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
		{
			if (func_257(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_257(int iParam0)
{
	if (unk_0xE9FEBBC43DAFBBAC("FMDeliverableID", 3))
	{
		if (unk_0x145DAE1A4D0EA05D(uParam0, "FMDeliverableID"))
		{
			return unk_0x7CE457B32235D9D1(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_258(int iParam0)
{
	if (func_261(iParam0) == 233)
	{
		return func_259(iParam0);
	}
	return -1;
}

int func_259(int iParam0)
{
	if (func_260(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_260(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	if (func_260(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_262(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_116(uParam0, 1, 1))
	{
		if (unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(uParam0), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iParam0), 0);
			if (unk_0xD960230552BC4165(uVar0, 0))
			{
				if (unk_0x0FA8183DAD2B3203() == unk_0x300C62F79A4441EB(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_263(int iParam0, var uParam1)
{
	struct<82> Var0;
	
	if (!func_173(iParam0))
	{
		return 0;
	}
	if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xA8C462EF7D9DC564(&(Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27)) == unk_0xA8C462EF7D9DC564(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xA8C462EF7D9DC564(&(Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27)) == unk_0xA8C462EF7D9DC564(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_172(iParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xA8C462EF7D9DC564(&(Var0.f_27)) == unk_0xA8C462EF7D9DC564(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_172(iParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xA8C462EF7D9DC564(&(Var0.f_27)) == unk_0xA8C462EF7D9DC564(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_264()
{
	return func_265(&(Global_102125.f_2890));
}

int func_265(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_144(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_266()
{
	return func_265(&(Global_105109.f_2890));
}

int func_267(bool bParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_275(&uLocal_99, &Global_95561);
	func_276(&uLocal_99, joaat("s_m_m_armoured_01"));
	func_276(&uLocal_99, iLocal_85);
	func_276(&uLocal_99, iLocal_86);
	if ((unk_0x6DF9C43E3CC645BC(joaat("s_m_m_armoured_01")) && unk_0x6DF9C43E3CC645BC(iLocal_85)) && unk_0x6DF9C43E3CC645BC(iLocal_86))
	{
		if (bParam0)
		{
			if (!unk_0xD4B321D9096B01FC(Local_1318.f_0))
			{
				if (unk_0xD4B321D9096B01FC(Global_95196[0]))
				{
					unk_0xE5C667CF3B4642D2(Global_95196[0], 1, 1);
					Local_1318.f_0 = Global_95196[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0xD4B321D9096B01FC(Local_1306.f_0))
			{
				if (unk_0xD4B321D9096B01FC(Global_95196.f_9[0]))
				{
					unk_0xE5C667CF3B4642D2(Global_95196.f_9[0], 1, 1);
					Local_1306.f_0 = Global_95196.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_276(&uLocal_99, iLocal_84);
			if (unk_0x6DF9C43E3CC645BC(iLocal_84) && unk_0xDFE2DFB40A988E19(&Global_95561))
			{
				if (unk_0x2553916E420E8EF0(&Global_95561, "jhp2a_main"))
				{
					unk_0xE43D456C30B53BB2(&Global_95561, 23, &Var1);
					unk_0x7FB505C34A14BAAA(Var1, 20f, 0, 0, 0, 0, 0, 0);
					Local_1318.f_0 = unk_0x847817A65E16621A(iLocal_84, Var1, 119.4988f, 1, 1, 0);
					Local_1306.f_0 = unk_0x81024A420EDCE2B5(Local_1318.f_0, 26, iLocal_83, -1, 1, 1);
					unk_0x1ECAE5FB4DE78CF8(Local_1318.f_0, 1084227584);
					unk_0x9B9D9C83AC80FFE4(Local_1306.f_0, Local_1318.f_0, &Global_95561, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0xE43D456C30B53BB2(&Global_95561, 29, &Var1);
					unk_0x7FB505C34A14BAAA(Var1, 20f, 0, 0, 0, 0, 0, 0);
					Local_1318.f_0 = unk_0x847817A65E16621A(iLocal_84, Var1, 134.0011f, 1, 1, 0);
					Local_1306.f_0 = unk_0x81024A420EDCE2B5(Local_1318.f_0, 26, iLocal_83, -1, 1, 1);
					unk_0x1ECAE5FB4DE78CF8(Local_1318.f_0, 1084227584);
					unk_0x9B9D9C83AC80FFE4(Local_1306.f_0, Local_1318.f_0, &Global_95561, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0xD4B321D9096B01FC(Local_1318.f_0))
		{
			func_273(Local_1318.f_0, 0);
			if (unk_0xD960230552BC4165(Local_1318.f_0, 0))
			{
				unk_0x4BA8ED9D4B9825B8(Local_1318.f_0, 1);
				unk_0xDA778D908FD69EEE(Local_1318.f_0, 1, 1);
				unk_0xDEF437F4F77F4711(Local_1318.f_0, 1);
				unk_0xA07556D283A83CA1(Local_1318.f_0, 1);
			}
		}
		if (unk_0xD4B321D9096B01FC(Local_1306.f_0))
		{
			if (!unk_0x2BF5E63466422C38(Local_1306.f_0))
			{
				unk_0xCC94EE23853F38E4(Local_1306.f_0, 1);
				unk_0xDB889DCC8B0139E6(Local_1306.f_0, iLocal_1305);
				unk_0x160AF5DE0B0878EE(Local_1306.f_0, 5);
				unk_0x6E712A176E3EEFA8(Local_1306.f_0, 0);
				unk_0xDEB0AA30ABFDCF48(Local_1306.f_0, 1, 0);
				unk_0xC167C31F20B1FD61(Local_1306.f_0, joaat("weapon_pistol"), 15, 0, 1);
				func_272(&uLocal_1126, 3, Local_1306.f_0, "JHP2A_Driver", 0, 1);
				func_271(&(Local_1084[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && unk_0xD4B321D9096B01FC(Local_1306.f_0))
		{
			func_270();
			func_271(&(Local_1084[1 /*8*/]), 0, 0, 1);
			func_268(&uLocal_99, joaat("boxville3"));
			func_268(&uLocal_99, joaat("s_m_m_armoured_01"));
			func_268(&uLocal_99, iLocal_85);
			func_268(&uLocal_99, iLocal_86);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_268(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0xE0AC40EF164A2569(iParam1);
					func_269(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_269(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_270()
{
	struct<3> Var0;
	
	if (unk_0xD4B321D9096B01FC(Local_1318.f_0))
	{
		if (!unk_0xF4B969E0807E76C7(Local_1318.f_0, 0) && !unk_0xD4B321D9096B01FC(iLocal_1329))
		{
			iLocal_1329 = unk_0x7187764DB5121FC9(iLocal_86, unk_0xACE5E491FC1B0D37(Local_1318.f_0, 1), 1, 1, 0);
			unk_0x04E8EF0987C19334(iLocal_1329, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0x4B8186A305034299(iLocal_1329, Local_1318.f_0, -1, -1, unk_0x28B05FCF3D725FED(Local_1318.f_0, unk_0x0DBA551C06A14723(Local_1318.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0x2BBEC4B37B923F4B(iLocal_1329, 0, 0);
		}
		if (!unk_0xD4B321D9096B01FC(Local_1322[0 /*2*/]))
		{
			if (unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
			{
				Var0 = { unk_0xC12F91346EA13947(Local_1318.f_0, unk_0x64A3FFD9D62755C5(-2.5f, 2.5f), -5f, 0f) };
				unk_0xDF956C4106F1E9C5(Var0, &(Var0.f_2), 0, 0);
				Local_1322[0 /*2*/] = unk_0x7187764DB5121FC9(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1322[0 /*2*/] = unk_0x7187764DB5121FC9(iLocal_85, unk_0xACE5E491FC1B0D37(Local_1318.f_0, 1), 1, 1, 0);
				unk_0x04E8EF0987C19334(Local_1322[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x01DF2D3988024DB4(Local_1322[0 /*2*/], Local_1318.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x9D3FE4786B8925D2(Local_1322[0 /*2*/], 1);
			}
		}
		if (!unk_0xD4B321D9096B01FC(Local_1322[1 /*2*/]))
		{
			if (unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
			{
				Var0 = { unk_0xC12F91346EA13947(Local_1318.f_0, unk_0x64A3FFD9D62755C5(-2.5f, 2.5f), -5f, 0f) };
				unk_0xDF956C4106F1E9C5(Var0, &(Var0.f_2), 0, 0);
				Local_1322[1 /*2*/] = unk_0x7187764DB5121FC9(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1322[1 /*2*/] = unk_0x7187764DB5121FC9(iLocal_85, unk_0xACE5E491FC1B0D37(Local_1318.f_0, 1), 1, 1, 0);
				unk_0x04E8EF0987C19334(Local_1322[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x01DF2D3988024DB4(Local_1322[1 /*2*/], Local_1318.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x9D3FE4786B8925D2(Local_1322[1 /*2*/], 1);
			}
		}
		if (!unk_0xD4B321D9096B01FC(Local_1322[2 /*2*/]))
		{
			if (unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
			{
				Var0 = { unk_0xC12F91346EA13947(Local_1318.f_0, unk_0x64A3FFD9D62755C5(-2.5f, 2.5f), -5f, 0f) };
				unk_0xDF956C4106F1E9C5(Var0, &(Var0.f_2), 0, 0);
				Local_1322[2 /*2*/] = unk_0x7187764DB5121FC9(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1322[2 /*2*/] = unk_0x7187764DB5121FC9(iLocal_85, unk_0xACE5E491FC1B0D37(Local_1318.f_0, 1), 1, 1, 0);
				unk_0x04E8EF0987C19334(Local_1322[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x01DF2D3988024DB4(Local_1322[2 /*2*/], Local_1318.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x9D3FE4786B8925D2(Local_1322[2 /*2*/], 1);
			}
		}
	}
}

int func_271(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_5 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_272(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

void func_273(var uParam0, int iParam1)
{
	Global_98669.f_22[iParam1] = uParam0;
}

int func_274(var uParam0)
{
	if (func_282(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9591DE0F00127F2A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x2553916E420E8EF0(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x3D070739F9AFB22D(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_276(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x6BB2B1818CAE531E(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x9B35D07DCD0F0B43();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_277(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_278(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_279(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_126(uParam0->f_868.f_4, Param1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x155C3BED27FDCC1D(Param1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_868.f_4 = { Param1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

int func_279(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_280(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_281()
{
	return unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 13);
}

int func_282(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x6DF9C43E3CC645BC((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0xE0AC40EF164A2569((uParam0[iVar1 /*5*/])->f_4);
						func_269(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0xB25A0D192C6A0A5B(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0x7D74D6A091150B86(uParam0->f_273[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xDFE2DFB40A988E19(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x3F8C4865FB100A5A(uParam0->f_374[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x08EA887200715AD9(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0x749CA887CB0AFEC9(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_269(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0xDA28050D0A4CAB3A(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x497FAD093E19504A(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_269(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x9304CCDF065E668A(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0xD3C642208574FC3F(uParam0->f_202[iVar1 /*7*/].f_4);
						func_269(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0xC697561B7CE4A050(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0xE9C4BD5E64C76842(uParam0->f_151[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0x059780A8877D0C70(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x574BB02EB2175F26(uParam0->f_737[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x2A29278E6E14C161(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xBB907B119D16E32C(uParam0->f_763[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0x9591DE0F00127F2A(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x397CE76BAE972149(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_269(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0x22EE4C81E33F116D(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x2A29278E6E14C161(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xC47E7B00F7AA539D(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0x22EE4C81E33F116D(uParam0->f_687[iVar1 /*7*/].f_5);
							func_269(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_269(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (unk_0x986772AAB0B9EC4B(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						unk_0x422A30E65371FBD1(uParam0->f_879[iVar1 /*5*/].f_4);
						func_269(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (unk_0xA1E452774CFB704D(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_269(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0xA3D567B14856EDE1(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xA95AA80044081B2A(iVar1, 1);
						func_269(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (unk_0x5B9201742B00334D())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					unk_0xD9E853CD947E590B();
					func_269(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (unk_0xC03D1F25AB737A2E())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					unk_0x4B396DDEC4F420E4();
					func_269(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0xC53766CB7176C7C8())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0x235F15F5EE0D236B())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), 0);
						func_283(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				unk_0x7D4946564F5947D1();
				func_269(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0xF409FD92D37CDEEE(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_269(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_283(var uParam0)
{
	if (unk_0xC53766CB7176C7C8())
	{
		unk_0x7D4946564F5947D1();
		func_269(&(uParam0->f_868));
	}
}

void func_284()
{
	if (bLocal_98 && (func_285() || unk_0x260395BA7F0C83CB()))
	{
		func_8(1);
		unk_0x9C9E32388A7886A2();
	}
}

int func_285()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98669 == 7 || Global_98669 == 8)
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	struct<3> Var0;
	var uVar3;
	
	func_293();
	unk_0x8CBD7ED64E4A522F("SECDRIVER", &iLocal_1305);
	unk_0x9B54A3CCAAB4F5FB(1, iLocal_1305, joaat("COP"));
	unk_0x9B54A3CCAAB4F5FB(1, iLocal_1305, -183807561);
	unk_0x9B54A3CCAAB4F5FB(1, joaat("COP"), iLocal_1305);
	if (func_6(0) || func_210())
	{
		iLocal_97 = 0;
		if (func_210())
		{
			if (Global_92876)
			{
				iLocal_97++;
			}
		}
		StringCopy(&Global_95561, "jhp2a_alt", 64);
		if (func_210())
		{
			func_280(iLocal_97, &Var0, &uVar3);
			func_292(Var0, uVar3, 1, 0);
		}
		bLocal_96 = true;
	}
	else
	{
		while (!func_267(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_291(&uLocal_99);
		}
	}
	func_290(&uLocal_99, "JHP2A", 0);
	unk_0xB7F4DA52DE3AAF24(0.1f);
	unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
	func_288(88);
	func_272(&uLocal_1126, 0, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
	func_272(&uLocal_1126, 3, 0, "Lester", 0, 1);
	unk_0x0A43D5D11052D038(joaat("boxville3"), 1);
	unk_0xB6C190A9FAFAEC2F(joaat("s_m_m_armoured_01"), 1);
	if (unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"), 0))
	{
		unk_0x4F1AEE91ADAE01D9(unk_0x0FA8183DAD2B3203(), joaat("weapon_briefcase"));
	}
	func_287();
	if (unk_0x9591DE0F00127F2A(&Global_95561))
	{
	}
	iLocal_1330 = unk_0x740FE9B7B3FE1CE5(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0xA3D567B14856EDE1(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_73894 = 1;
}

void func_287()
{
	Global_92877 = 1;
}

void func_288(int iParam0)
{
	Global_94554 = 0;
	switch (iParam0)
	{
		case 72:
			func_289(2);
			func_289(4);
			break;
		
		case 73:
			func_289(0);
			func_289(1);
			func_289(7);
			break;
		
		case 92:
			func_289(10);
			func_289(9);
			func_289(13);
			func_289(6);
			break;
		
		case 68:
			func_289(11);
			break;
		
		case 78:
			func_289(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_289(3);
			break;
		
		default:
			break;
	}
}

void func_289(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&Global_94554, iParam0);
}

int func_290(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x2553916E420E8EF0(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0x01109E9331DF4EDE(sParam1, iParam2);
		}
		else
		{
			unk_0x9F815D4FA0C47F97(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_291(var uParam0)
{
	func_282(uParam0);
}

void func_292(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_210())
	{
		unk_0x50E03C7D74E352C4(0);
		unk_0x3B76114EC84D5812(&(Global_98669.f_20), 2);
		unk_0x269298D09D57BFCF(1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 0);
		}
		Global_98665 = { Param0 };
		Global_98668 = uParam3;
		Global_98664 = 1;
		if (iParam4 == 1)
		{
			unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 14);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_98669.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 24);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_98669.f_20), 24);
		}
		func_209(1);
	}
}

void func_293()
{
	func_301(&(Local_1084[0 /*8*/]), 80715, "Van Driver Manager");
	func_301(&(Local_1084[1 /*8*/]), 79362, "Cargo Manager");
}

void func_294(var uParam0)
{
	if (!func_135(uParam0))
	{
		if (unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
		{
			func_299(Local_1322[0 /*2*/], 1);
			func_299(Local_1322[1 /*2*/], 1);
			func_299(Local_1322[2 /*2*/], 1);
			iLocal_1346 = 1;
			func_298(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_297(&uLocal_99, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0x059780A8877D0C70("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0, -1))
					{
						if ((unk_0x9B35D07DCD0F0B43() - iLocal_1336) > 150)
						{
							if (unk_0x3656B691E303FDE0(iLocal_1329, unk_0x0FA8183DAD2B3203(), 0))
							{
								if ((((unk_0x2230E1136DBEDE5D(iLocal_1329, joaat("weapon_molotov"), 0) || unk_0x2230E1136DBEDE5D(iLocal_1329, joaat("weapon_bzgas"), 0)) || unk_0x2230E1136DBEDE5D(iLocal_1329, joaat("weapon_knife"), 0)) || unk_0x2230E1136DBEDE5D(iLocal_1329, joaat("weapon_unarmed"), 0)) || unk_0x2230E1136DBEDE5D(iLocal_1329, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0x43F288FE2F5B37FB(iLocal_1329);
								}
								else
								{
									unk_0x7FF38BFB318C1A86(iLocal_1329);
									iLocal_1336 = unk_0x9B35D07DCD0F0B43();
									iLocal_1335++;
									if (iLocal_1335 >= 3)
									{
										unk_0x5F5C6A264C2CA8B1(-1, "Lock_Destroyed", iLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										unk_0x5F5C6A264C2CA8B1(-1, "Lock_Damage", iLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							unk_0x7FF38BFB318C1A86(iLocal_1329);
						}
					}
					if (((((iLocal_1335 >= 3 || unk_0xF4B969E0807E76C7(iLocal_1329, 0)) || unk_0x19F2785A757B5287(Local_1318.f_0, 2)) || unk_0x19F2785A757B5287(Local_1318.f_0, 3)) || unk_0x43C4AA3B2D6164A1(Local_1318.f_0, 2) > 0f) || unk_0x43C4AA3B2D6164A1(Local_1318.f_0, 3) > 0f)
					{
						if (unk_0xD4B321D9096B01FC(iLocal_1329))
						{
							unk_0x377C9F2989832369(&iLocal_1329);
						}
						if (!unk_0x19F2785A757B5287(Local_1318.f_0, 2))
						{
							unk_0x6A99D1F228E18F5B(Local_1318.f_0, 2, 0, 0);
						}
						if (!unk_0x19F2785A757B5287(Local_1318.f_0, 3))
						{
							unk_0x6A99D1F228E18F5B(Local_1318.f_0, 3, 0, 0);
						}
						iLocal_1347 = 0;
						iLocal_1348 = 0;
						func_299(Local_1322[0 /*2*/], 0);
						func_299(Local_1322[1 /*2*/], 0);
						func_299(Local_1322[2 /*2*/], 0);
						func_296(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_295(Local_1318.f_0))
					{
						if (unk_0x01CBD71E072E9F33(unk_0x43C4AA3B2D6164A1(Local_1318.f_0, 2)) > 0.5f && unk_0x01CBD71E072E9F33(unk_0x43C4AA3B2D6164A1(Local_1318.f_0, 3)) > 0.5f)
						{
							func_296(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_295(Local_1318.f_0))
					{
						if (!unk_0x19F2785A757B5287(Local_1318.f_0, 2))
						{
							if (unk_0xFCF8BAC7DFF6CFEA(Local_1318.f_0, 2))
							{
								unk_0x6A99D1F228E18F5B(Local_1318.f_0, 2, 1, 0);
								unk_0xE7FE36D64561B2D1(Local_1318.f_0, 2, 0, 0, 1);
								iLocal_1347 = 1;
							}
						}
						else
						{
							iLocal_1347 = 1;
						}
						if (!unk_0x19F2785A757B5287(Local_1318.f_0, 3))
						{
							if (unk_0xFCF8BAC7DFF6CFEA(Local_1318.f_0, 3))
							{
								unk_0x6A99D1F228E18F5B(Local_1318.f_0, 3, 1, 0);
								unk_0xE7FE36D64561B2D1(Local_1318.f_0, 3, 0, 0, 1);
								iLocal_1348 = 1;
							}
						}
						else
						{
							iLocal_1348 = 1;
						}
						if (iLocal_1347 && iLocal_1348)
						{
							iLocal_1346 = 1;
							func_296(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_135(uParam0))
	{
	}
}

int func_295(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_296(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_297(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9591DE0F00127F2A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x2553916E420E8EF0(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x059780A8877D0C70(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_298(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_299(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0xCA7317DE7E0F89E9(iParam0))
		{
			unk_0x363E2170E626A00A(iParam0, 1, bParam1);
			unk_0x8C85E8C71AD74415(iParam0, 1, 0);
			unk_0x2CF873D4DD55E9B7(iParam0);
		}
		if (bParam1)
		{
			Var0 = { func_300(unk_0xACE5E491FC1B0D37(iParam0, 1) - unk_0xC12F91346EA13947(Local_1318.f_0, unk_0x64A3FFD9D62755C5(-0.15f, 0.15f), IntToFloat(-unk_0xBAC643F143880136(3, 6)), unk_0x64A3FFD9D62755C5(-0.1f, 0.1f))) };
			unk_0xEF4C0B3A167109AB(iParam0, 1, Var0 * FtoV(unk_0x64A3FFD9D62755C5(0.25f, 0.5f)), 0, 1, 1, 0);
			unk_0xEF4C0B3A167109AB(iParam0, 5, IntToFloat(unk_0xBAC643F143880136(0, 10)), IntToFloat(unk_0xBAC643F143880136(0, 10)), IntToFloat(unk_0xBAC643F143880136(0, 10)), 0, 1, 1, 0);
			unk_0x1E97F21BCEB8DE35(iParam0, Local_1318.f_0, 1);
		}
	}
}

Vector3 func_300(struct<3> Param0)
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

int func_301(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_302(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	
	if (!func_135(uParam0))
	{
		if (((!unk_0xD4B321D9096B01FC(Local_1306.f_0) || unk_0x2BF5E63466422C38(Local_1306.f_0)) || (unk_0xD4B321D9096B01FC(Local_1318.f_0) && func_202(Local_1318.f_0, Local_1306.f_0, 1) > 200f)) || (!unk_0x5294582CE404D3F4(Local_1306.f_0, 0) && func_202(Local_1318.f_0, Local_1306.f_0, 1) > 200f))
		{
			if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && unk_0xD960230552BC4165(Local_1318.f_0, 0))
			{
				unk_0xA07556D283A83CA1(Local_1318.f_0, 0);
			}
			unk_0x0FFB05DA97E810B5(&Local_1306);
			func_298(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0xD4B321D9096B01FC(Local_1318.f_0) || !unk_0xD960230552BC4165(Local_1318.f_0, 0)) || !unk_0x95ED3BD0F52D542A(Local_1306.f_0, Local_1318.f_0, 0)))
			{
				iLocal_1337 = 0;
				iLocal_1338 = 0;
				StringCopy(&cLocal_1339, "", 24);
				func_296(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
					if (unk_0x7A10CED38342D31F(iVar0, Local_1318.f_0))
					{
						if ((!iLocal_1332 && (unk_0x9B35D07DCD0F0B43() - iLocal_1334) > 500) && fLocal_1333 >= 4f)
						{
							iLocal_1332 = 1;
							iLocal_1331++;
						}
					}
					else if (iLocal_1332)
					{
						iLocal_1334 = unk_0x9B35D07DCD0F0B43();
						iLocal_1332 = 0;
					}
					Var1 = { func_300(unk_0xACE5E491FC1B0D37(iVar0, 1) - unk_0xACE5E491FC1B0D37(Local_1318.f_0, 1)) };
					Var4 = { unk_0x93DC424F261951D6(Local_1318.f_0) - unk_0x93DC424F261951D6(iVar0) };
					fLocal_1333 = func_306(Var4, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0x3656B691E303FDE0(Local_1318.f_0, unk_0x0FA8183DAD2B3203(), 1) || unk_0x3656B691E303FDE0(Local_1306.f_0, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 124)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 125)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 126)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 29)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 118)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 123)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 22)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 24)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 47)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 62)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 62)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 138)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 88)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 89)) || unk_0xCFE0D93B7A6809C1(Local_1306.f_0)) || unk_0xCFBE5B663F1567A7(Local_1318.f_0)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_296(uParam0, 4, 0);
					}
					else
					{
						if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && unk_0xD960230552BC4165(Local_1318.f_0, 0))
						{
							if ((unk_0x6ABAFD7C604ED364(unk_0x0FA8183DAD2B3203()) || fLocal_1333 > 0.5f) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(Local_1318.f_0, 0f, 2f, -0.5f), unk_0xC12F91346EA13947(Local_1318.f_0, 0f, 10f, 2f), 4.5f, 0, 1, 0))
							{
								if (!unk_0x34B3D63A6880041C(Local_1318.f_0))
								{
									if (iLocal_1350 == -1)
									{
										iLocal_1350 = unk_0x9B35D07DCD0F0B43();
									}
									else if ((unk_0x9B35D07DCD0F0B43() - iLocal_1350) > 5000)
									{
										unk_0x4A19798299FFF6B5(Local_1318.f_0, 2000, joaat("normal"), 0);
									}
								}
								else
								{
									iLocal_1350 = -1;
								}
							}
						}
						if (func_305(Local_1318.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_275(&uLocal_99, "jhp2a_airport");
						}
						if (!func_304(Local_1306.f_0, -235832601, 1))
						{
							if (unk_0x42A24CB7B8A08E11(Local_1318.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0))
							{
								if (unk_0xDFE2DFB40A988E19("jhp2a_airport"))
								{
									iLocal_1337 = 0;
									iLocal_1338 = 0;
									StringCopy(&cLocal_1339, "", 24);
									func_296(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0x9B9D9C83AC80FFE4(Local_1306.f_0, Local_1318.f_0, &Global_95561, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0x3656B691E303FDE0(Local_1318.f_0, unk_0x0FA8183DAD2B3203(), 1) || unk_0x3656B691E303FDE0(Local_1306.f_0, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 124)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 125)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 126)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 29)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 118)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 123)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 22)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 24)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 47)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 62)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 62)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 138)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 88)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 89)) || unk_0xCFE0D93B7A6809C1(Local_1306.f_0)) || unk_0xCFBE5B663F1567A7(Local_1318.f_0)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_296(uParam0, 5, 0);
					}
					else if (!func_304(Local_1306.f_0, -235832601, 1))
					{
						if (unk_0x42A24CB7B8A08E11(Local_1318.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0))
						{
							iLocal_1337 = 0;
							iLocal_1338 = 0;
							StringCopy(&cLocal_1339, "", 24);
							func_296(uParam0, 3, 0);
						}
						else
						{
							unk_0x9B9D9C83AC80FFE4(Local_1306.f_0, Local_1318.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0x3656B691E303FDE0(Local_1318.f_0, unk_0x0FA8183DAD2B3203(), 1) || unk_0x3656B691E303FDE0(Local_1306.f_0, unk_0x0FA8183DAD2B3203(), 1)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 124)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 125)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 126)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 29)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 118)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 123)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 22)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 24)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 47)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 62)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 62)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 138)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 88)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 89)) || unk_0xCFE0D93B7A6809C1(Local_1306.f_0)) || unk_0xCFBE5B663F1567A7(Local_1318.f_0)) || unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_1318.f_0, 1)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_296(uParam0, 5, 0);
					}
					else if (unk_0x95ED3BD0F52D542A(Local_1306.f_0, Local_1318.f_0, 1))
					{
						if (!func_304(Local_1306.f_0, 451360105, 1))
						{
							unk_0x3D1E9B6872B0AE00(Local_1306.f_0, Local_1318.f_0, 0);
						}
					}
					else
					{
						unk_0x54B5C3A13D3588F0(Local_1318.f_0, 2);
						if (!func_304(Local_1306.f_0, 242628503, 1))
						{
							unk_0xA12E1659DEF57244(&uLocal_1304);
							unk_0xD06C31EF9A42C2B4(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0x15A7B753872B3CE3(uLocal_1304);
							unk_0xC544A8E1032AC1CF(Local_1306.f_0, uLocal_1304);
							unk_0x78829A259A6975CD(&uLocal_1304);
						}
					}
					break;
				
				case 4:
					if (unk_0x82C6A64BFC7E5440(Local_1318.f_0, 0, 1))
					{
						iVar7++;
					}
					if (unk_0x82C6A64BFC7E5440(Local_1318.f_0, 1, 1))
					{
						iVar7++;
					}
					if (unk_0x82C6A64BFC7E5440(Local_1318.f_0, 4, 1))
					{
						iVar7++;
					}
					if (unk_0x82C6A64BFC7E5440(Local_1318.f_0, 5, 1))
					{
						iVar7++;
					}
					if (((((IntToFloat(unk_0x35D31BEBAFD53DE6(Local_1318.f_0)) <= 0f || unk_0xF524E590E8C8C6BE(Local_1318.f_0) <= 250f) || unk_0x8FA4BFA59CFE52FC(Local_1318.f_0) <= 400f) || unk_0x2BF5E63466422C38(Local_1306.f_0)) || iVar7 >= 2) || iLocal_1331 > 6)
					{
						if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && unk_0xD960230552BC4165(Local_1318.f_0, 0))
						{
							unk_0xA07556D283A83CA1(Local_1318.f_0, 0);
						}
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_296(uParam0, 5, 0);
					}
					else if (!func_304(Local_1306.f_0, -1273030092, 1))
					{
						unk_0x12038E5513D763A5(Local_1306.f_0, Local_1318.f_0, unk_0x0FA8183DAD2B3203(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && !unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
					{
						if (unk_0x95ED3BD0F52D542A(Local_1306.f_0, Local_1318.f_0, 0))
						{
							if (!func_87(Local_1318.f_0))
							{
								if (!func_304(Local_1306.f_0, -2118855366, 1))
								{
									unk_0xC6612209077465DD(Local_1306.f_0);
									unk_0x5671B0B60CC07A13(Local_1306.f_0, Local_1318.f_0, 5, -1);
								}
							}
							else if (!func_304(Local_1306.f_0, 451360105, 1))
							{
								unk_0x3D1E9B6872B0AE00(Local_1306.f_0, Local_1318.f_0, 256);
							}
						}
						else if (!func_304(Local_1306.f_0, 780511057, 1))
						{
							unk_0x6E712A176E3EEFA8(Local_1306.f_0, 1);
							unk_0xF827FEB33E873F71(Local_1306.f_0, unk_0x0FA8183DAD2B3203(), 0, 16);
						}
					}
					if (unk_0xD4B321D9096B01FC(Local_1318.f_0) && !unk_0xF4B969E0807E76C7(Local_1318.f_0, 0))
					{
						unk_0xCDB2F1BE1F602D35(Local_1318.f_0, 2, 1);
						unk_0xCDB2F1BE1F602D35(Local_1318.f_0, 3, 1);
					}
					break;
				}
		}
		if ((unk_0xD4B321D9096B01FC(Local_1306.f_0) && !unk_0x2BF5E63466422C38(Local_1306.f_0)) && !unk_0xF48FBF427471B13B(Local_1306.f_0))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1337)
					{
						case 0:
							if (func_42() && !unk_0x01891E23361FD324(Local_1306.f_0))
							{
								if (unk_0xCFE0D93B7A6809C1(Local_1306.f_0))
								{
									func_62(Local_1306.f_0, "JACKED_GENERIC", 10);
								}
								else
								{
									func_62(Local_1306.f_0, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1337++;
							}
							break;
						
						case 1:
							if (!unk_0x95ED3BD0F52D542A(Local_1306.f_0, Local_1318.f_0, 0) || iLocal_1303 == 3)
							{
								if (!unk_0x95ED3BD0F52D542A(Local_1306.f_0, Local_1318.f_0, 0))
								{
									iLocal_1337 = 4;
								}
								else
								{
									iLocal_1337++;
								}
							}
							else if (func_42() && !unk_0x01891E23361FD324(Local_1306.f_0))
							{
								if (func_303(&uLocal_1126, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1337++;
								}
							}
							break;
						
						case 2:
							if (func_42() && !unk_0x01891E23361FD324(Local_1306.f_0))
							{
								if (unk_0x9591DE0F00127F2A(&cLocal_1339))
								{
									fVar8 = unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(Local_1306.f_0, 1));
									if ((((((iLocal_1332 || unk_0x41F11D4118027EC7(Local_1306.f_0, 124)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 125)) || unk_0x41F11D4118027EC7(Local_1306.f_0, 126)) || fVar8 < 49f) && (unk_0x9B35D07DCD0F0B43() - iLocal_1338) > 5000) && fVar8 < 225f)
									{
										if (unk_0xBAC643F143880136(0, 2) == 0)
										{
											StringCopy(&cLocal_1339, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1339, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0x9591DE0F00127F2A(&cLocal_1339))
								{
									if (unk_0x2553916E420E8EF0(&cLocal_1339, "GENERIC_CURSE_HIGH"))
									{
										func_62(Local_1306.f_0, "GENERIC_CURSE_HIGH", 10);
										iLocal_1337++;
									}
									else
									{
										if (func_303(&uLocal_1126, &cLocal_79, &cLocal_1339, 8, 0, 0, 0))
										{
											iLocal_1337++;
										}
										iLocal_1337++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_43() && !unk_0x01891E23361FD324(Local_1306.f_0))
							{
								iLocal_1338 = unk_0x9B35D07DCD0F0B43();
								StringCopy(&cLocal_1339, "", 24);
								iLocal_1337 = (iLocal_1337 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1337)
					{
						case 0:
							if (func_42() && !unk_0x01891E23361FD324(Local_1306.f_0))
							{
								if (unk_0x9591DE0F00127F2A(&cLocal_1339))
								{
									if ((unk_0x9B35D07DCD0F0B43() - iLocal_1338) > 5000 && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(Local_1306.f_0, 1)) < 400f)
									{
										if (unk_0xBAC643F143880136(0, 2) == 0)
										{
											StringCopy(&cLocal_1339, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1339, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0x9591DE0F00127F2A(&cLocal_1339))
								{
									if (unk_0x2553916E420E8EF0(&cLocal_1339, "GENERIC_INSULT_HIGH"))
									{
										func_62(Local_1306.f_0, "GENERIC_INSULT_HIGH", 10);
										iLocal_1337++;
									}
									else if (func_303(&uLocal_1126, &cLocal_79, &cLocal_1339, 8, 0, 0, 0))
									{
										iLocal_1337++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_43() && !unk_0x01891E23361FD324(Local_1306.f_0))
							{
								iLocal_1338 = unk_0x9B35D07DCD0F0B43();
								StringCopy(&cLocal_1339, "", 24);
								iLocal_1337 = (iLocal_1337 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_135(uParam0))
	{
	}
}

bool func_303(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_27(sParam2, iParam3, 0);
}

int func_304(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x411C065ADB822CD9(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

float func_305(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Param1, iParam4);
}

float func_306(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_307(int iParam0)
{
	struct<2> Var0;
	char[] cVar4[8];
	
	unk_0x81995F6F93D8C987("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_319();
		func_8(0);
		unk_0x9C9E32388A7886A2();
	}
	else if (!bLocal_98)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0x9591DE0F00127F2A(&cVar4))
		{
			func_317(&Var0);
		}
		else
		{
			func_308(&Var0, &cVar4);
		}
		bLocal_98 = true;
	}
}

void func_308(char* sParam0, char* sParam1)
{
	func_316(sParam0, sParam1);
	func_309(0);
}

void func_309(int iParam0)
{
	int iVar0;
	
	if (Global_111560.f_9080 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_310(iVar0))
		{
			return;
		}
		unk_0xA1E7A40E1F56E511(&(Global_89451[iVar0 /*5*/].f_1), 5);
		Global_98705 = iParam0;
	}
}

int func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_315();
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		unk_0x33B887A7E419BCB6(5000);
	}
	iVar0 = Global_89451[iParam0 /*5*/];
	iVar1 = Global_76846.f_109[iVar0 /*4*/];
	func_314(iVar1, 1);
	unk_0x2AE4EAB17A9DD19A(unk_0x7C7787D2D7139A85());
	unk_0x341977E77C118EB1(unk_0x7C7787D2D7139A85());
	func_311(&(Global_111560.f_2358.f_539), iVar1);
	if (Global_92874 == Global_98706)
	{
		Global_111560.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_89487[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0xECBD7388D13DBB07(0);
		}
	}
	Global_111560.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92874 = Global_98706;
	if (iParam0 == -1)
	{
		if (Global_111560.f_9080)
		{
		}
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_89451[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_89451[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_311(var uParam0, int iParam1)
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
		iVar1 = Global_111560.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_313(Global_111560.f_18528[iVar0], &Var2, &fVar5))
			{
				Global_111560.f_18528[iVar0] = 318;
				func_312(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96089[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_9 = 0f;
				Global_96089[iVar0 /*29*/].f_12 = 0f;
				Global_96089[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_10 = 0f;
				Global_96089[iVar0 /*29*/].f_13 = 0f;
				Global_96089[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_11 = 0f;
				Global_96089[iVar0 /*29*/].f_14 = 0f;
				Global_96089[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_26 = 0f;
				Global_96089[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_27 = 0f;
				Global_96089[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_312(var uParam0)
{
	*uParam0 = -15;
}

int func_313(int iParam0, var uParam1, float fParam2)
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
			return func_313(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_313(8, uParam1, fParam2);
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

void func_314(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92684[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92684[iParam0 /*2*/] = 0;
	}
}

void func_315()
{
	Global_98704 = 1;
	if (unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1))
	{
		if (unk_0x9591DE0F00127F2A(&Global_76809))
		{
			switch (func_191())
			{
				case 0:
					StringCopy(&Global_76809, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76809, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76809, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76813, "", 16);
		}
		Global_98704 = 0;
	}
	else if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x9591DE0F00127F2A(&Global_76809))
		{
			switch (func_191())
			{
				case 0:
					StringCopy(&Global_76809, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76809, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76809, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76813, "", 16);
		}
		Global_98704 = 0;
		unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 25);
	}
}

void func_316(char* sParam0, char* sParam1)
{
	if (!unk_0x9591DE0F00127F2A(sParam0))
	{
		if (unk_0xF0B71FD2BDA4E5B7(sParam0) <= 16)
		{
			if (unk_0xF0B71FD2BDA4E5B7(sParam1) <= 16)
			{
				StringCopy(&Global_76809, sParam0, 16);
				StringCopy(&Global_76813, sParam1, 16);
			}
		}
	}
}

void func_317(char* sParam0)
{
	func_318(sParam0);
	func_309(0);
}

void func_318(char* sParam0)
{
	if (!unk_0x9591DE0F00127F2A(sParam0))
	{
		if (unk_0xF0B71FD2BDA4E5B7(sParam0) <= 16)
		{
			StringCopy(&Global_76809, sParam0, 16);
			StringCopy(&Global_76813, "", 16);
			if (unk_0xB9AB61E108CF483B())
			{
				unk_0xE153599BDDE03B01();
			}
		}
	}
}

void func_319()
{
	int iVar0;
	
	if (unk_0x5F74A266852104C3("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_111560.f_9080 || func_6(0))
	{
		if (!func_320())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_310(iVar0))
				{
					return;
				}
				unk_0xA1E7A40E1F56E511(&(Global_89451[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_315();
		}
	}
}

int func_320()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

