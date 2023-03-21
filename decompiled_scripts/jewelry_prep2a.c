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
	if (unk_0x78BF2001491914AC(3))
	{
		func_262(5);
	}
	unk_0x21C966D49C5B368B(1);
	func_241();
	while (true)
	{
		unk_0xE57EE82872DC7A9F("M_JewelStoreJobPrep2A", 0);
		if (bLocal_98)
		{
			func_239();
		}
		func_237(&uLocal_99);
		func_193();
		func_191();
		if (!bLocal_96)
		{
			func_187();
			func_186(&Local_1084);
			func_1();
		}
		unk_0x0C0404DFB8BB22C1(0.8f);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_93)
	{
		case 0:
			if (func_21())
			{
				func_20(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	unk_0x988197573BDAD49A("JHP2A_STOP");
	unk_0x0508903FC1B0ED24();
	unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0xA232817B0B36F2E5();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55856)
	{
		Global_55856 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_70046.f_1 == 1) && func_5(Global_70046))
		{
		}
		else
		{
			Global_55854 = 1;
		}
	}
	if (Global_103236.f_8866 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_82674[iVar0 /*5*/];
		uVar2 = Global_70069.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_103236.f_8866)
			{
			}
			return;
		}
		if (unk_0xAA4F14DA15DB0B51(Global_82674[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xAA4F14DA15DB0B51(Global_82674[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF6082E2ADA1C795B(&(Global_82674[iVar0 /*5*/].f_1), 4);
		unk_0xF6082E2ADA1C795B(&Global_70048, 1);
		Global_70064 = uVar2;
		Global_70065 = unk_0x3732B96D7A1859B4();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_82674[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_103236.f_8866.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	
	unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
	unk_0x02E663D7DDAE8202(joaat("boxville3"), 0);
	unk_0xF81FB2DEF90C0B69(joaat("s_m_m_armoured_01"), 0);
	if (func_19())
	{
		func_13(0);
	}
	iLocal_1335 = 0;
	Global_68272 = 0;
	if (bParam0)
	{
		unk_0xFBC4596E19752537(1f);
		unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
		Global_68272 = 0;
	}
	if (unk_0x2137828D03306CAF(iLocal_1316))
	{
		if (bParam0)
		{
			unk_0xA613FDAC42DBBFAD(&iLocal_1316);
		}
		else
		{
			unk_0xFECCD8AF38671477(&iLocal_1316);
		}
	}
	if (unk_0x2137828D03306CAF(Local_1306.f_0))
	{
		if (bParam0)
		{
			unk_0x27BAC9B39BCC6522(&Local_1306);
		}
		else
		{
			unk_0x6C559FCFFD2365CB(&Local_1306);
		}
	}
	if (unk_0x2137828D03306CAF(Local_1318.f_0))
	{
		if (bParam0 && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0xA613FDAC42DBBFAD(&Local_1318);
		}
		else
		{
			unk_0xFECCD8AF38671477(&Local_1318);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1322.f_0)
	{
		if (unk_0x2137828D03306CAF(Local_1322[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0xBE35B7268C680A20(&(Local_1322[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xED01C551E3A161C0(Local_1322[iVar0 /*2*/]))
				{
					unk_0xA806066ECDF61E23(Local_1322[iVar0 /*2*/], 1, 1);
				}
				unk_0x0EE36F9D946F47F2(&(Local_1322[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x2137828D03306CAF(iLocal_1329))
	{
		if (bParam0)
		{
			unk_0xBE35B7268C680A20(&iLocal_1329);
		}
		else
		{
			if (unk_0xED01C551E3A161C0(iLocal_1329))
			{
				unk_0xA806066ECDF61E23(iLocal_1329, 1, 1);
			}
			unk_0x0EE36F9D946F47F2(&iLocal_1329);
		}
	}
	if (iLocal_1330 != 0)
	{
		unk_0x6790C1CEA32DA629(iLocal_1330, 0);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
		{
			unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1291, 0, 0);
	func_10();
	if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
	{
		unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&Global_25466, iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_25466, iParam0);
	}
}

void func_10()
{
	Global_87777 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
		{
			return;
		}
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0xF01DFB77A6A50908(iParam2);
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x47ABE7550330D9FC(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x47988E04F8E2F0AD(uParam0->f_3))
	{
		if (func_12(uParam0->f_3))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
	if (!unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
}

bool func_12(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_18();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_14(int iParam0)
{
	if (Global_14604)
	{
		func_16(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_15())
	{
		Global_14443.f_1 = 3;
	}
}

int func_15()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_17(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

int func_19()
{
	if (Global_14443.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)
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

int func_21()
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
		if (func_185(Local_1318.f_0))
		{
			if (unk_0x498DE1A79CC5CECC(Local_1318.f_0) != 0)
			{
				Local_1318.f_1 = unk_0x498DE1A79CC5CECC(Local_1318.f_0);
			}
			else
			{
				Local_1318.f_1 = func_184(Local_1318.f_0, 0, 0);
			}
			func_183("JHP2A_STEAL", 7500, 1);
			func_182("JHP2A_HLP2", 15000);
		}
		else if (unk_0x498DE1A79CC5CECC(Local_1318.f_0) != 0)
		{
			unk_0x7EC387C4793AAAF4(1);
			iVar7 = unk_0x498DE1A79CC5CECC(Local_1318.f_0);
			unk_0x789C84F1B8496AD0(&iVar7);
			unk_0x7EC387C4793AAAF4(0);
		}
		unk_0x988197573BDAD49A("JHP2A_START");
		func_126(0f, 0f, 0f, 0f, 1, func_178());
		unk_0x27D0C73ADD305F3C(5f, 5f, 4);
		iLocal_1345 = 0;
		iLocal_95 = 1;
		bLocal_1352 = true;
		iLocal_94 = 1;
	}
	if (iLocal_95)
	{
		func_125();
		switch (iLocal_94)
		{
			case 1:
				if ((((((iLocal_1303 == 0 && unk_0x2137828D03306CAF(Local_1318.f_0)) && unk_0x7FAC45D56235AB39(Local_1318.f_0, 0)) && unk_0x2137828D03306CAF(Local_1306.f_0)) && !unk_0x769F0F6444C1ABE0(Local_1306.f_0)) && unk_0x5B9B499C707C2A95(Local_1306.f_0, Local_1318.f_0, 0)) && func_122(&(Local_1084[0 /*8*/])))
				{
					func_99(&uLocal_1291, Local_1318.f_0, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1291, 0, 0);
				}
				if (iLocal_1303 == 3 || iLocal_1303 == 2)
				{
					unk_0x27D0C73ADD305F3C(5f, 5f, 4);
					func_96(&uLocal_1101, 1, 0);
					if (unk_0x6235C49EA2DBA22D() && func_12("JHP2A_HLP2"))
					{
						unk_0x7D53B6FFAEDA810A(1);
					}
					if (!iLocal_1345)
					{
						func_183("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_94 = 2;
				}
				else if ((unk_0x2137828D03306CAF(iLocal_1320) && unk_0x7FAC45D56235AB39(iLocal_1320, 0)) && unk_0x07FD82987E8F3A91(iLocal_1320, Local_1318.f_0))
				{
					if (unk_0xBDD3EABACAB97D09(Local_1318.f_1))
					{
						unk_0x27D0C73ADD305F3C(5f, 5f, 4);
						unk_0x7EC387C4793AAAF4(1);
						unk_0x789C84F1B8496AD0(&(Local_1318.f_1));
						unk_0x7EC387C4793AAAF4(0);
						func_95(705, 0);
					}
					func_94(&uLocal_1101, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1320, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0x9A46207BB68ED2F0(Local_1318.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						unk_0x8231579045104F87(iLocal_1320, 5f, -1, 0);
						iLocal_94 = 101;
					}
				}
				else if (iLocal_1303 == 1)
				{
					func_96(&uLocal_1101, 1, 0);
					if (!unk_0xBDD3EABACAB97D09(Local_1322[0 /*2*/].f_1))
					{
						unk_0x27D0C73ADD305F3C(5f, 5f, 4);
						Local_1322[0 /*2*/].f_1 = func_93(Local_1322[0 /*2*/]);
						func_183("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1345 = 1;
						unk_0xBB7DA429845F53D4(Local_1318.f_0, 0);
					}
				}
				else if (iLocal_1303 == 0)
				{
					if (unk_0xBDD3EABACAB97D09(Local_1318.f_1))
					{
						unk_0x27D0C73ADD305F3C(5f, 5f, 4);
						unk_0x7EC387C4793AAAF4(1);
						unk_0x789C84F1B8496AD0(&(Local_1318.f_1));
						unk_0x7EC387C4793AAAF4(0);
						func_95(705, 0);
					}
					if (func_91(&uLocal_1101, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1318.f_0, "JHP2A_RTNVAN", "", "", unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 0), 0, 1, -1))
					{
						iLocal_94 = 101;
					}
					if (unk_0xBDD3EABACAB97D09(uLocal_1101) && unk_0x735DA2DDF8C0B2FF(uLocal_1101))
					{
						unk_0xD42DEAFD12809447(uLocal_1101, 0);
					}
				}
				break;
			
			case 101:
				if (unk_0x2137828D03306CAF(Local_1318.f_0) && unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 0))
				{
					iVar8 = Local_1318.f_0;
				}
				else if (unk_0x2137828D03306CAF(iLocal_1320) && unk_0x07FD82987E8F3A91(iLocal_1320, Local_1318.f_0))
				{
					iVar8 = iLocal_1320;
				}
				if (func_89(iVar8, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0x27D0C73ADD305F3C(5f, 5f, 4);
						iLocal_94 = 1000;
					}
					else
					{
						unk_0x27D0C73ADD305F3C(5f, 5f, 4);
						unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
						iLocal_94++;
					}
				}
				break;
			
			case 102:
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					unk_0x0508903FC1B0ED24();
					unk_0xBB7DA429845F53D4(Local_1318.f_0, 0);
					unk_0xCFE4626F633D6C6A(Local_1318.f_0, 1);
					if (unk_0x2137828D03306CAF(iLocal_1320))
					{
						unk_0x8231579045104F87(iLocal_1320, 5f, 1, 0);
					}
					func_88(0, -1);
					if (unk_0x2137828D03306CAF(Local_1322[0 /*2*/]))
					{
						unk_0xBE35B7268C680A20(&(Local_1322[0 /*2*/]));
					}
					if (unk_0x2137828D03306CAF(Local_1322[1 /*2*/]))
					{
						unk_0xBE35B7268C680A20(&(Local_1322[1 /*2*/]));
					}
					if (unk_0x2137828D03306CAF(Local_1322[2 /*2*/]))
					{
						unk_0xBE35B7268C680A20(&(Local_1322[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
				{
					iVar6 = 0;
					while (iVar6 < Local_1322.f_0)
					{
						if (unk_0x2137828D03306CAF(Local_1322[iVar6 /*2*/]) && !unk_0xED01C551E3A161C0(Local_1322[iVar6 /*2*/]))
						{
							if (unk_0xBDD3EABACAB97D09(Local_1318.f_1))
							{
								unk_0x7EC387C4793AAAF4(1);
								unk_0x789C84F1B8496AD0(&(Local_1318.f_1));
								unk_0x7EC387C4793AAAF4(0);
							}
							if (!unk_0xBDD3EABACAB97D09(Local_1322[iVar6 /*2*/].f_1))
							{
								Local_1322[iVar6 /*2*/].f_1 = func_93(Local_1322[iVar6 /*2*/]);
							}
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < Local_1322.f_0)
					{
						if (unk_0x2137828D03306CAF(Local_1322[iVar6 /*2*/]) && !unk_0xED01C551E3A161C0(Local_1322[iVar6 /*2*/]))
						{
							if (!unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
							{
								bVar9 = func_87(Local_1322[iVar6 /*2*/]);
								if ((bVar9 && unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(Local_1318.f_0, 0f, -3f, -0.5f), unk_0x82D9CF397BA8C885(Local_1318.f_0, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar9 && unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), unk_0xD1EE0E9FCD74A37B(Local_1322[iVar6 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1)))
								{
									unk_0x0013D519C885E60B(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 1, 0, 0);
									unk_0xBE35B7268C680A20(&(Local_1322[iVar6 /*2*/]));
									unk_0x0508903FC1B0ED24();
									unk_0x08BE237DBCD9CBD9(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
								}
							}
						}
						iVar6++;
					}
				}
				else
				{
					func_95(705, 0);
					iVar6 = 0;
					while (iVar6 < Local_1322.f_0)
					{
						if (unk_0xBDD3EABACAB97D09(Local_1322[iVar6 /*2*/].f_1))
						{
							unk_0x789C84F1B8496AD0(&(Local_1322[iVar6 /*2*/].f_1));
						}
						iVar6++;
					}
					func_41(&uLocal_1101, Var3, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar10, 1);
					if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0))
					{
						iVar12 = 1;
					}
					if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0))
					{
						bVar11 = true;
					}
					if (bVar11 || ((iVar12 && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) && bLocal_1352))
					{
						unk_0x4E6996123FABDB93(0, 37, 1);
						unk_0x4E6996123FABDB93(0, 44, 1);
						if (!func_19())
						{
							func_13(1);
						}
						if (!unk_0x3A4DB2BE79833505(unk_0x2A5EB8B0FE590B91()))
						{
							if (!unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0) && !func_17(0))
							{
								if (iVar10 != joaat("weapon_briefcase"))
								{
									unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 1);
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
								func_40("JHP2A_HLP1");
							}
						}
						if (unk_0x92BC4A8239BDDACC(0, 51) && iVar10 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x7D53B6FFAEDA810A(1);
							}
							uVar13 = unk_0x0576092251F482D7(unk_0x2A5EB8B0FE590B91(), 1);
							unk_0x435850511E04A8D1(uVar13);
							unk_0x27D0C73ADD305F3C(3f, 5f, 4);
							unk_0x853D8B40635017CB(-1, "Drop_Case", iVar13, "JWL_PREP_2A_SOUNDS", 0, 0);
							unk_0x0EE36F9D946F47F2(&iVar13);
							unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
							unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"));
							func_88(0, -1);
							func_39(706);
							func_96(&uLocal_1101, 1, 0);
							if (func_7(87))
							{
								if (func_19())
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
						if (func_19())
						{
							func_13(0);
						}
						if (unk_0x6235C49EA2DBA22D())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x7D53B6FFAEDA810A(1);
							}
						}
					}
					bLocal_1352 = unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1);
				}
				break;
			
			case 1000:
				unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
				unk_0xBB7DA429845F53D4(Local_1318.f_0, 0);
				unk_0xCFE4626F633D6C6A(Local_1318.f_0, 1);
				func_38(1);
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1126, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0x27D0C73ADD305F3C(5f, 5f, 4);
						iLocal_94++;
					}
				}
				break;
			
			case 1001:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_94++;
				}
				break;
			
			case 1002:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			
			case 2000:
				unk_0x27D0C73ADD305F3C(5f, 5f, 4);
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
				Global_68272 = 1;
				func_38(1);
				func_37(1, 0);
				iLocal_94++;
				break;
			
			case 2001:
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1126, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_94++;
					}
				}
				break;
			
			case 2002:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_94++;
				}
				break;
			
			case 2003:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 157, 1);
		unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x2137828D03306CAF(Global_89291[iVar0]))
		{
			if (!unk_0xA9A04898798AE9E6(Global_89291[iVar0], 0))
			{
				unk_0x9C27A9366AD7DE0B(Global_89291[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xF65C7766FB8D4B2C(Global_89291[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35813 != 0 && Global_35813 != 3) && Global_35813 != 2)
	{
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0xFBC4596E19752537(1f);
	}
}

int func_23()
{
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_34(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam5 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_25(sParam3, iParam4, bParam8);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_33();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_31();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_29();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_26();
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
		func_33();
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_27()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_29()
{
	if (func_30(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_178();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

bool func_30(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_31()
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

bool func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_33()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_35()
{
	if (func_36())
	{
		return 0;
	}
	if (unk_0x53461A7B49FA20A0())
	{
		if (unk_0x5CA780C6DF42F0B0())
		{
			return 0;
		}
	}
	return 1;
}

int func_36()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x4E6996123FABDB93(0, 21, 1);
	}
	unk_0x4E6996123FABDB93(0, 25, 1);
	unk_0x4E6996123FABDB93(0, 24, 1);
	unk_0x4E6996123FABDB93(0, 257, 1);
	unk_0x4E6996123FABDB93(0, 141, 1);
	unk_0x4E6996123FABDB93(0, 140, 1);
	unk_0x4E6996123FABDB93(0, 22, 1);
	unk_0x4E6996123FABDB93(0, 44, 1);
	unk_0x4E6996123FABDB93(0, 23, 1);
	unk_0x4E6996123FABDB93(0, 47, 1);
	unk_0x4E6996123FABDB93(0, 36, 1);
	if (bParam0)
	{
		unk_0x4E6996123FABDB93(0, 37, 1);
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (bParam1)
		{
			unk_0x861C75D434F4572D(unk_0x2A5EB8B0FE590B91(), 2f);
		}
		else
		{
			unk_0x861C75D434F4572D(unk_0x2A5EB8B0FE590B91(), 1f);
		}
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 102, 1);
	}
	if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
	{
		unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
	}
}

void func_38(bool bParam0)
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 157, 0);
		unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
		unk_0x40C35C94A0106576(unk_0x2A5EB8B0FE590B91(), 0, 0);
		if (bParam0)
		{
			unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 0);
		}
		unk_0xA7832A6F29DEF417(unk_0x2A5EB8B0FE590B91(), 0);
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
	}
	unk_0xE0125DCD8DB3EFC3(0);
	unk_0xFBC4596E19752537(0f);
}

void func_39(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55855 = 0;
	if (!Global_56079[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67949)
	{
		if (Global_67950[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67950[iVar1 /*9*/].f_1 = 1;
			Global_67950[iVar1 /*9*/].f_2 = 0f;
			if (Global_67950[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_40(char* sParam0)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 1, 1, -1);
}

int func_41(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	return func_42(uParam0, Param1, Param4, func_86(), func_86(), iParam7, 3, 0, 0, 0, 0, sParam8, func_85(), func_85(), func_85(), func_85(), func_85(), 0, bParam9, func_85(), 0, 0, bParam10, iParam11, func_85(), func_85(), func_85(), bParam12, 1065353216);
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)
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
	func_84(uParam0);
	func_83(uParam0);
	func_82();
	if (func_65(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_64(sParam20);
		func_64(sParam21);
		func_64(sParam22);
		func_64(sParam23);
		if (unk_0x0B21CC5276C2CE1B())
		{
			bVar1 = false;
			if (unk_0x7FAC45D56235AB39(iParam18, 0))
			{
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam18, 0))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
					{
						unk_0x507FE690B1271947(&(uParam0->f_13), 4);
					}
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 23))
					{
						unk_0x507FE690B1271947(&(uParam0->f_13), 23);
					}
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_62(uParam0, iParam29))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
					{
						unk_0x507FE690B1271947(&(uParam0->f_13), 4);
					}
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_64(sParam24);
				func_64(sParam27);
				func_64("MORE_SEATS");
				if (bParam26 && unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
					{
						unk_0x789C84F1B8496AD0(&(uParam0->f_5));
						func_64(sParam19);
					}
					if (unk_0xBDD3EABACAB97D09(*uParam0))
					{
						unk_0x789C84F1B8496AD0(uParam0);
					}
					if ((!func_59(uParam0, 1) && !func_58(uParam0)) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_57(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 0);
						unk_0x507FE690B1271947(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0x507FE690B1271947(&(uParam0->f_13), 0);
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 1);
					}
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 1))
					{
						if (!func_59(uParam0, 1))
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x507FE690B1271947(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xBDD3EABACAB97D09(uParam0->f_5))
					{
						if (unk_0xBDD3EABACAB97D09(*uParam0))
						{
							unk_0x789C84F1B8496AD0(uParam0);
						}
						uParam0->f_5 = func_54(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x9FD1808EF916E312(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_53(uParam0->f_5, uParam0);
						}
					}
					else if (!func_52(Var3, unk_0x052304A1A2560A55(uParam0->f_5), 0.1f, 0))
					{
						unk_0xF1194645A0CA23EC(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_53(uParam0->f_5, uParam0);
						}
					}
					if (!func_59(uParam0, 2))
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 2))
						{
							func_57(uParam0, sParam19, 0);
							unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 13))
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
						unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
									if (!unk_0x5B9B499C707C2A95(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x5B9B499C707C2A95(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar2], func_51()) || !func_49(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_46(uParam0))
							{
								func_64(sParam19);
								func_64(sParam24);
								func_64(sParam20);
								func_64(sParam21);
								func_64(sParam22);
								func_64(sParam23);
								func_64("LOSE_WANTED");
								func_64("MORE_SEATS");
								func_64(sParam27);
								func_96(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x2137828D03306CAF(iParam18))
			{
				if ((bParam26 && unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) && (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 22)))
				{
					func_64(sParam24);
					func_64(sParam27);
					if (unk_0xBDD3EABACAB97D09(uParam0->f_5) || unk_0xBDD3EABACAB97D09(*uParam0))
					{
						unk_0x789C84F1B8496AD0(&(uParam0->f_5));
						unk_0x789C84F1B8496AD0(uParam0);
						func_64(sParam19);
					}
					if ((!func_59(uParam0, 1) && !func_58(uParam0)) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_57(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 0);
						unk_0x507FE690B1271947(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0x507FE690B1271947(&(uParam0->f_13), 0);
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 1);
					}
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 1))
					{
						if (!func_59(uParam0, 1))
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x507FE690B1271947(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x7FAC45D56235AB39(iParam18, 0))
					{
						if (!unk_0xBDD3EABACAB97D09(*uParam0))
						{
							if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
							{
								unk_0x789C84F1B8496AD0(&(uParam0->f_5));
								func_64(sParam19);
							}
							*uParam0 = func_43(iParam18, 0, 0);
							unk_0x929538D619711815(*uParam0, 2);
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
							{
								func_53(*uParam0, uParam0);
							}
						}
						if (!func_59(uParam0, 2))
						{
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 3))
							{
								func_57(uParam0, sParam24, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
								unk_0x507FE690B1271947(&(uParam0->f_13), 4);
							}
							else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
							{
								if (!unk_0x47988E04F8E2F0AD(sParam27))
								{
									if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
									{
										func_57(uParam0, sParam27, 0);
										unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
								{
									func_57(uParam0, sParam24, 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
								}
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 23))
								{
									if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
									{
										func_55(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
				{
					unk_0x789C84F1B8496AD0(&(uParam0->f_5));
					func_64(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_59(uParam0, 2))
						{
							if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x895FB9FE885E36ED(0, iVar8);
									if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar9]))
									{
										func_55(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_57(uParam0, "MORE_SEATS", 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 3))
							{
								func_57(uParam0, sParam24, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
								unk_0x507FE690B1271947(&(uParam0->f_13), 4);
							}
							else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
							{
								if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
								{
									func_57(uParam0, sParam27, 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_59(uParam0, 2))
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 3))
						{
							func_57(uParam0, sParam24, 0);
							unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
							unk_0x507FE690B1271947(&(uParam0->f_13), 4);
						}
						else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
						{
							if (!unk_0x47988E04F8E2F0AD(sParam27))
							{
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
								{
									func_57(uParam0, sParam27, 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
							{
								func_57(uParam0, sParam24, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
		{
			unk_0x507FE690B1271947(&(uParam0->f_13), 0);
		}
		func_64(sParam19);
		func_64(sParam24);
		func_64(sParam27);
		func_64(sParam24);
		func_64("LOSE_WANTED");
		if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
		{
			unk_0x789C84F1B8496AD0(&(uParam0->f_5));
		}
		if (unk_0xBDD3EABACAB97D09(*uParam0))
		{
			unk_0x789C84F1B8496AD0(uParam0);
		}
	}
	unk_0x507FE690B1271947(&(uParam0->f_13), 11);
	unk_0x507FE690B1271947(&(uParam0->f_13), 12);
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_45(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_45(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_45(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_46(var uParam0)
{
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 12))
	{
		if (func_48(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_47(1, 0, 1) || unk_0xAA4F14DA15DB0B51(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_47(1, 0, 1) || unk_0xAA4F14DA15DB0B51(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_47(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDDA1B42A28EFD32F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (bParam0)
		{
			if (unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0x3A564E53FCAA6917(iVar0) < 0.95f || unk_0x3A564E53FCAA6917(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!unk_0x30B90655507F26E3(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	float fVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		fVar0 = unk_0xD2660BAC03EB7433(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()) && iParam1)
		{
			if (func_50(unk_0x2A5EB8B0FE590B91(), iParam0))
			{
				unk_0xD3C70F0B396F74BF(func_51(), 50f);
				return 1;
			}
		}
		else if (unk_0xE7EA59D3048D0B8F(iParam0, func_51()))
		{
			unk_0xD3C70F0B396F74BF(func_51(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xB1C4356ECEE878FE(iParam0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(iParam1))
				{
					if (unk_0xF8ED2D0629FE764D(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

var func_51()
{
	return unk_0x60A7F9A542DD09AD(unk_0x8A41C463063AFC8E());
}

int func_52(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3FEF699D13BCC798((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_53(var uParam0, var uParam1)
{
	if (unk_0xBDD3EABACAB97D09(uParam0))
	{
		if (unk_0xBDD3EABACAB97D09(uParam1->f_6))
		{
			unk_0xD42DEAFD12809447(uParam1->f_6, 0);
		}
		unk_0x765A2A874BCB30A7(0);
		unk_0xC621FE33C5D99948();
		uParam1->f_6 = uParam0;
		unk_0xD42DEAFD12809447(uParam0, 1);
	}
}

var func_54(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x0B584E556B01101F(uVar0, func_45(unk_0x591AF4C50B46E014(), 1f, 1f));
	unk_0xD42DEAFD12809447(uVar0, iParam3);
	return uVar0;
}

void func_55(int iParam0, char* sParam1, int iParam2)
{
	unk_0x430053236FA97FB8(iParam0, sParam1, func_56(iParam2), 1);
}

int func_56(int iParam0)
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

void func_57(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x47988E04F8E2F0AD(sParam1))
		{
			if (!unk_0x35302CD5A5D37EED(sParam1, ""))
			{
				func_183(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x3732B96D7A1859B4();
}

int func_58(var uParam0)
{
	if (!unk_0x769F0F6444C1ABE0(uParam0->f_16))
	{
		if (unk_0x7C8D4D8A617D31D0(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x53461A7B49FA20A0())
	{
		if (unk_0x5CA780C6DF42F0B0())
		{
			return 1;
		}
		if (func_61(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x53461A7B49FA20A0())
	{
		if (func_36() && !func_60())
		{
			return 1;
		}
	}
	return 0;
}

int func_60()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x3732B96D7A1859B4();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (func_63(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x2137828D03306CAF(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xCBA4F77BB9D2F115(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xB98B8EFF8C77CE6F(iParam0, 1))
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
				if (!unk_0xB98B8EFF8C77CE6F(iParam0, 1))
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

void func_64(char* sParam0)
{
	if (!unk_0x47988E04F8E2F0AD(sParam0))
	{
		unk_0x465D8BC4210558AF(sParam0);
	}
}

int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 29) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 28))
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					unk_0xE293CCEE24FD3DDA(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 29) && unk_0xAA4F14DA15DB0B51(uParam0->f_13, 28))
		{
			if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
			{
				unk_0xE293CCEE24FD3DDA(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x507FE690B1271947(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x2137828D03306CAF(uParam0->f_21))
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
			iVar24 = unk_0x8B62441BF8D73898(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 0, iVar25);
			if (unk_0x7FAC45D56235AB39(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x7FAC45D56235AB39(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0) || !bParam17)
					{
						if (func_63(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
								{
									unk_0x861C75D434F4572D(uParam0->f_17[iVar0], 1f);
									if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
									{
										unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
									}
									if (unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470) == 7 && !func_81(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x62F5757271CA0B05(uParam0->f_17[iVar0]) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0]))
										{
											unk_0x4C47904AE69D7393(uParam0->f_17[iVar0], 1);
											unk_0xA6AC097BEBB7B1F0(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], iVar0);
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
			unk_0x507FE690B1271947(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					if (!unk_0xF5A478192BF88D01(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x654FFF4D16298AC5(uParam0->f_17[iVar0]);
					}
					if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_51());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 26))
	{
		if ((!func_78(uParam0) && unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91())) && !unk_0x2137828D03306CAF(iParam10))
		{
			iVar13 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(iVar13, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_59(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x895FB9FE885E36ED(0, iVar26);
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar27]))
						{
							func_55(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_57(uParam0, "MORE_SEATS", 0);
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x507FE690B1271947(&(uParam0->f_13), 13);
			func_64("MORE_SEATS");
		}
		if (!unk_0x2137828D03306CAF(iParam10))
		{
			if ((!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]) || !unk_0x769F0F6444C1ABE0(uParam0->f_17[1])) || !unk_0x769F0F6444C1ABE0(uParam0->f_17[2]))
			{
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 31))
				{
					if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()) && !func_59(uParam0, 2))
					{
						iVar13 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (func_77(iVar13, uParam0))
						{
							func_57(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x507FE690B1271947(&(uParam0->f_13), 31);
					func_64("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x7FAC45D56235AB39(iParam10, 0))
		{
			if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iParam10))
			{
				if (unk_0x92BC4A8239BDDACC(0, 75))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 21))
			{
				unk_0x507FE690B1271947(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2137828D03306CAF(uParam0->f_17[iVar0]))
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
					{
						unk_0x2E0701CEBB06668C(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x2E0701CEBB06668C(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
					{
						iVar13 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (unk_0x7FAC45D56235AB39(iVar13, 0))
						{
							if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
							{
								if (!func_78(uParam0) && unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
								{
									if (!func_76(uParam0->f_17[iVar0]))
									{
										unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xA9A04898798AE9E6(iVar13, 0))
						{
							if (unk_0xF8ED2D0629FE764D(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xABCF7EB00A727656(iVar13) && !unk_0xBBC6067B2AA3BE97(iVar13))
								{
									Var28 = { unk_0xD1EE0E9FCD74A37B(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
					{
						if (unk_0xB1C4356ECEE878FE(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x0C20E539D876C5B3(uParam0->f_17[iVar0], 0);
							if (!unk_0xA9A04898798AE9E6(iVar13, 0))
							{
								if (unk_0x7FAC45D56235AB39(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iVar13))
										{
											if (unk_0xD2660BAC03EB7433(iVar13) > 5f)
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
									{
										iVar31 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
									}
									if (unk_0x7FAC45D56235AB39(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xD2660BAC03EB7433(iVar13) > 5f)
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
					{
						iVar32 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
						if (unk_0x2137828D03306CAF(iVar32))
						{
							if (func_63(iVar32, uParam0, 0))
							{
								if (func_75(iVar0, uParam0) || !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 27))
								{
									unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], iVar0);
									func_74(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_75(iVar0, uParam0))
							{
								if (unk_0xD3B21CE53AA7BE51(iVar32) == joaat("sentinel2"))
								{
									unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], 2);
								}
								func_73(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()) && !func_72(uParam0->f_17[iVar0], iParam10)) && !func_71(uParam0->f_17[iVar0], iParam10))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
							{
								if (((!unk_0x62F5757271CA0B05(uParam0->f_17[iVar0]) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0])) && !unk_0xE3D9FA6DA44707FD(uParam0->f_17[iVar0])) && !unk_0xF5A478192BF88D01(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x654FFF4D16298AC5(uParam0->f_17[iVar0]);
									}
									unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_51());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x3732B96D7A1859B4();
								uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
								unk_0x929538D619711815(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_53(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
					{
						if (((func_49(uParam0->f_17[iVar0], 1) || func_72(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x7FAC45D56235AB39(iParam10, 0) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam10, 0)))
						{
							if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
							{
								unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
								func_64(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_53(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x7FAC45D56235AB39(iParam10, 0))
					{
						if (!unk_0xF8ED2D0629FE764D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x2860DA9980AC4109(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 11)) && !((bParam17 && unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam10, 0)))
							{
								if (unk_0xB1C4356ECEE878FE(uParam0->f_17[iVar0]))
								{
									if (!unk_0x5B9B499C707C2A95(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_49(uParam0->f_17[iVar0], 1))
										{
											if (func_48(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x8F2751B831A7B303(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
									{
										if ((((!unk_0xE3D9FA6DA44707FD(uParam0->f_17[iVar0]) && !unk_0x62F5757271CA0B05(uParam0->f_17[iVar0])) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0])) && !unk_0xF5A478192BF88D01(uParam0->f_17[iVar0])) && !unk_0xFB4BF464D20ED824(iParam10))
										{
											unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_81(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE3D9FA6DA44707FD(uParam0->f_17[iVar0]) && !unk_0xE3D9FA6DA44707FD(unk_0x2A5EB8B0FE590B91())) && !func_70(uParam0->f_17[iVar0], 2f)) && !unk_0x62F5757271CA0B05(uParam0->f_17[iVar0])) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0])) && !unk_0xFB4BF464D20ED824(iParam10))
										{
											unk_0x4C47904AE69D7393(uParam0->f_17[iVar0], 1);
											if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 10))
											{
												unk_0x861C75D434F4572D(uParam0->f_17[iVar0], 1f);
											}
											unk_0xA6AC097BEBB7B1F0(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x13DE0BD5FC063164(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
										unk_0x929538D619711815(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
							{
								if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x62F5757271CA0B05(uParam0->f_17[iVar0]) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x654FFF4D16298AC5(uParam0->f_17[iVar0]);
										}
										unk_0x4C47904AE69D7393(uParam0->f_17[iVar0], 0);
										unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_51());
									}
								}
							}
						}
						else if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iParam10))
						{
							if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()))
							{
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 21))
								{
									unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_51());
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 21))
							{
								unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()) && !unk_0xFB4BF464D20ED824(iParam10))
						{
							unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
					func_64(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_59(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
						{
							if (func_76(uParam0->f_17[iVar0]) || unk_0x2860DA9980AC4109(uParam0->f_17[iVar0], unk_0x2A5EB8B0FE590B91(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
					{
						if (!unk_0x2860DA9980AC4109(uParam0->f_17[iVar0], unk_0x2A5EB8B0FE590B91(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_76(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x3732B96D7A1859B4();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 5))
							{
								func_57(uParam0, sParam7, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 5);
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
									if (!func_69(iVar0, uParam0))
									{
										if (!unk_0x47988E04F8E2F0AD(uVar19[iVar0]))
										{
											if (!unk_0x35302CD5A5D37EED(uVar19[iVar0], ""))
											{
												func_67(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_66(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_69(iVar0, uParam0))
										{
											func_57(uParam0, uVar15[iVar0], 0);
											func_66(iVar0, uParam0);
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
		unk_0x507FE690B1271947(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
					func_64(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_64("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 16);
			break;
	}
}

void func_67(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x47988E04F8E2F0AD(sParam1))
		{
			if (!unk_0x35302CD5A5D37EED(sParam1, ""))
			{
				func_68(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x3732B96D7A1859B4();
}

void func_68(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x63EE614B6594E772(sParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	unk_0x17C5AB14FA142F36(iParam2, 1);
}

int func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 14);
		
		case 1:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 15);
		
		case 2:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_70(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0xD2660BAC03EB7433(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (!unk_0xE7EA59D3048D0B8F(iParam0, func_51()))
		{
			iVar0 = unk_0x73E10648CA4D8C19(iParam0);
			if (unk_0x7FAC45D56235AB39(iParam1, 0))
			{
				if (unk_0x2860DA9980AC4109(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_72(int iParam0, int iParam1)
{
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0x7FAC45D56235AB39(iParam1, 0))
			{
				if (unk_0xF8ED2D0629FE764D(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 19);
			break;
	}
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x507FE690B1271947(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x507FE690B1271947(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x507FE690B1271947(&(uParam1->f_13), 19);
			break;
	}
}

int func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 17);
		
		case 1:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 18);
		
		case 2:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
		if (unk_0x7FAC45D56235AB39(iVar0, 0))
		{
			if (!unk_0x769F0F6444C1ABE0(iParam0))
			{
				iVar1 = unk_0xCB705C0242571D84(iParam0);
				if (unk_0x7FAC45D56235AB39(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x2860DA9980AC4109(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_77(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("bus") || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x769F0F6444C1ABE0(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x8F8E5C33266ED978(iParam0, 0, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar3))
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
			iVar4 = unk_0x8F8E5C33266ED978(iParam0, 1, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar4))
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
			iVar5 = unk_0x8F8E5C33266ED978(iParam0, 2, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar5))
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

int func_78(var uParam0)
{
	int iVar0;
	
	if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (func_63(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iParam1))
	{
		if (unk_0xB1C4356ECEE878FE(iParam1))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam1, 0);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iVar0))
					{
						if (func_78(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
				if (unk_0x2137828D03306CAF(iVar0))
				{
					if (func_63(iVar0, uParam0, 0))
					{
						if (unk_0x7FAC45D56235AB39(iVar0, 0))
						{
							if (func_80(iVar0))
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

int func_80(int iParam0)
{
	float fVar0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar0 = unk_0xD2660BAC03EB7433(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam1, 0))
		{
			iVar0 = unk_0xCB705C0242571D84(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		iVar0 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
		if (unk_0x7FAC45D56235AB39(iVar0, 0))
		{
			iVar1 = unk_0x8F8E5C33266ED978(iVar0, 0, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar1))
			{
				if (iVar1 != unk_0x2A5EB8B0FE590B91())
				{
					if (unk_0x03322C3918511AA0(iVar1))
					{
						if (!unk_0xD175293EF7878334(iVar1, unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xEDF42871EAD55C9B(iVar1, unk_0x2A5EB8B0FE590B91(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_83(var uParam0)
{
	int iVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 25))
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2137828D03306CAF(uParam0->f_17[iVar0]))
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 32, 0);
					unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 305, 1);
					unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 268, 1);
					unk_0x13DE0BD5FC063164(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 25);
	}
}

void func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_17[iVar0]))
		{
			if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
			{
				if (unk_0xB1C4356ECEE878FE(uParam0->f_17[iVar0]))
				{
					unk_0x76DB40064D4A807D(uParam0->f_17[iVar0], 0);
					unk_0x1EA7D129CB42F133(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x76DB40064D4A807D(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x1EA7D129CB42F133(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
	}
}

int func_85()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_86()
{
	struct<3> Var0;
	
	return Var0;
}

int func_87(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
	{
		return 0;
	}
	Var0 = { unk_0x7A50DA3F66D9DE97(unk_0xD1EE0E9FCD74A37B(iParam0, 1), unk_0x82D9CF397BA8C885(Local_1318.f_0, Local_87), unk_0x82D9CF397BA8C885(Local_1318.f_0, Local_90), 0) };
	if (unk_0xB7A628320EFF8E47(Var0, unk_0x82D9CF397BA8C885(Local_1318.f_0, Local_87)) <= unk_0xB7A628320EFF8E47(unk_0x82D9CF397BA8C885(Local_1318.f_0, Local_90), unk_0x82D9CF397BA8C885(Local_1318.f_0, Local_87)))
	{
		return 1;
	}
	return 0;
}

void func_88(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55862)
	{
	}
	Global_55862 = 0;
	if (bParam0)
	{
		Global_55863 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67949)
		{
			if (Global_56079[Global_67950[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67950[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67949)
		{
			if (Global_67950[iVar0 /*9*/] > 0)
			{
				if (Global_67950[iVar0 /*9*/] == iParam1)
				{
					Global_67950[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_89(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 73, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam5)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4E6996123FABDB93(0, 69, 1);
		unk_0x4E6996123FABDB93(0, 70, 1);
		unk_0x4E6996123FABDB93(0, 68, 1);
	}
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 138, 1);
	unk_0x4E6996123FABDB93(0, 136, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
	unk_0x4E6996123FABDB93(0, 131, 1);
	unk_0x4E6996123FABDB93(0, 132, 1);
	unk_0x4E6996123FABDB93(0, 123, 1);
	unk_0x4E6996123FABDB93(0, 126, 1);
	unk_0x4E6996123FABDB93(0, 129, 1);
	unk_0x4E6996123FABDB93(0, 130, 1);
	unk_0x4E6996123FABDB93(0, 133, 1);
	unk_0x4E6996123FABDB93(0, 134, 1);
	unk_0xB5924913D8350E63();
	func_90(iParam0);
	if ((unk_0x3732B96D7A1859B4() - Global_29) > 500)
	{
		unk_0x8231579045104F87(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3732B96D7A1859B4();
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x3FEF699D13BCC798(unk_0xD2660BAC03EB7433(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x317EBF76D4EFACBF(iParam0))
		{
			if (unk_0xBCE28DDC8BEC619D(iParam0))
			{
				unk_0xE3F9604466DA5BF0(iParam0, 0);
			}
		}
	}
}

bool func_91(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_42(uParam0, Param1, func_92(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_85(), func_85(), func_85(), func_85(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_85(), func_85(), func_85(), 1, iParam10);
}

Vector3 func_92()
{
	return 0f, 0f, 2f;
}

int func_93(int iParam0)
{
	return func_44(iParam0, 1, 0);
}

int func_94(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_42(uParam0, Param1, Param4, func_86(), func_86(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_85(), func_85(), func_85(), func_85(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55864 = iParam0;
	if (!Global_55862)
	{
		Global_55862 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67949)
		{
			if (Global_67950[iVar0 /*9*/] == iParam0)
			{
				Global_67950[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_96(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_98(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
		{
			unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
		}
		func_97(iVar0, uParam0);
		func_74(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x507FE690B1271947(&(uParam0->f_13), iVar0);
			unk_0x507FE690B1271947(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
		{
			unk_0x76DB40064D4A807D(uParam0->f_17[iVar0], 1);
			unk_0x1EA7D129CB42F133(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 32, 1);
				unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_51()) && uParam0->f_17[iVar0] != unk_0x2A5EB8B0FE590B91())
				{
					unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 29))
			{
				unk_0xE293CCEE24FD3DDA(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		unk_0x76DB40064D4A807D(unk_0x2A5EB8B0FE590B91(), 1);
		unk_0x1EA7D129CB42F133(unk_0x2A5EB8B0FE590B91(), 1);
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (bParam2)
		{
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

void func_97(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x507FE690B1271947(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x507FE690B1271947(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x507FE690B1271947(&(uParam1->f_13), 16);
			break;
	}
}

void func_98(var uParam0)
{
	if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_5));
	}
}

void func_99(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_100(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_100(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_101(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_101(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_102(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_102(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x943D8B466B9BD1A3())
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x47988E04F8E2F0AD(iVar0))
	{
		if (!unk_0x591AF4C50B46E014())
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
		func_121();
	}
	if (func_120(iParam1) && unk_0x18570CCBAF7F635C(iParam1))
	{
		iVar1 = 0;
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			unk_0x2C9BFB18AC97D56A(unk_0xC3A7AD90290CA72E(iParam1));
			unk_0xB6E06390C751480C(unk_0xC3A7AD90290CA72E(iParam1), 1);
			if (unk_0x2CA699E76FE1F362(unk_0xC3A7AD90290CA72E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x82DF3B947FC3E281(iParam1))
		{
			unk_0x8D2653D3B0E4E932(unk_0x761AC59E782D169D(iParam1));
			if (unk_0x7C985EA0E2CA156C(unk_0x761AC59E782D169D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam1))
		{
			unk_0xB6F65B032F5104E8(unk_0x3D7676880675803E(iParam1));
			if (unk_0xC6E81CD09CBFB72A(unk_0x3D7676880675803E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x943D8B466B9BD1A3())
		{
			if (func_115(uParam0, bParam7, bParam9, 0))
			{
				func_111(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_106(iVar0))
				{
					if ((unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0)) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if ((iVar1 && !unk_0x6235C49EA2DBA22D()) && uParam8)
						{
							if (!func_12(iVar0))
							{
								func_182(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
								{
									func_105(1);
								}
							}
						}
					}
				}
			}
			else if (func_106(iVar0))
			{
				if (unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0))
				{
					if (((unk_0x57F6052FCF93BCFF(iParam1) && iVar1) && !unk_0x6235C49EA2DBA22D()) && uParam8)
					{
						if (!func_12(iVar0))
						{
							func_182(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
							{
								func_105(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x47988E04F8E2F0AD(sParam5))
			{
				if (func_12(sParam5))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_115(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_104(uParam0))
				{
					func_103(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_103(var uParam0)
{
	if (func_120(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xAF2C217E49954DFD(unk_0x2A5EB8B0FE590B91());
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0x47ABE7550330D9FC(1);
		unk_0xF01DFB77A6A50908(0);
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_104(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x3732B96D7A1859B4()
		{
			return 1;
		}
	}
	return 0;
}

int func_105(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_103236.f_9830.f_100++;
			}
			return Global_103236.f_9830.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_103236.f_9830.f_101++;
			}
			return Global_103236.f_9830.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_103236.f_9830.f_102++;
			}
			return Global_103236.f_9830.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_106(char* sParam0)
{
	if (!func_107(1, 1, 0))
	{
		if ((!unk_0x58478145CAF8429C(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_105(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_107(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		return 0;
	}
	if (func_17(0))
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (unk_0x2593BD27F8406EC2())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x09952BA662A7629B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
			{
				return 0;
			}
			if (unk_0xFC99B60347524C55())
			{
				return 0;
			}
		}
	}
	if (func_109())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x3A55AED06BFC52DE(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), func_108(unk_0x2A5EB8B0FE590B91(), 0)) || (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("apc") && func_108(unk_0x2A5EB8B0FE590B91(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_109()
{
	return Global_2445217.f_13;
}

bool func_110()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

void func_111(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		func_11(uParam0, 0, 0);
	}
	if (func_114(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			iVar0 = unk_0xC3A7AD90290CA72E(iParam1);
			if (!unk_0xC4A39E4229BD3ABE(iVar0, 0))
			{
				if (unk_0xDB61DD81432BD145(iVar0))
				{
					if (!func_112())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x8F40CB4DCBB7C8AB(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x47ABE7550330D9FC(0);
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
	unk_0x8E8B3A8DE1143EAE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDF42871EAD55C9B(unk_0x2A5EB8B0FE590B91(), iParam1, -1, iVar3, iVar4);
	unk_0x18A0B296F4932A7B("FocusIn", 0, 0);
	unk_0xB0D390F8FEB78903("HINT_CAM_SCENE");
	unk_0x08BE237DBCD9CBD9(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3732B96D7A1859B4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_112()
{
	return func_113(unk_0x0FFED3E94261A832());
}

int func_113(var uParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_114(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_115(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_104(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (!func_119(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3732B96D7A1859B4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_118(bParam1, bParam2, bParam3) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (func_117(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_104(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_107(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_121();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_107(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_107(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_107(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_107(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x82DF3B947FC3E281(iParam0))
		{
			if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEE46DE31F43DCAF1(iParam0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_121()
{
	unk_0xF6082E2ADA1C795B(&Global_2314, 4);
}

int func_122(var uParam0)
{
	if (func_124(uParam0) && !func_123(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_123(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_124(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_125()
{
	int iVar0;
	
	if (iLocal_1303 == 0 || iLocal_1303 == 1)
	{
		if (((unk_0xA9A04898798AE9E6(Local_1318.f_0, 0) || (unk_0x2137828D03306CAF(Local_1322[0 /*2*/]) && !unk_0xED01C551E3A161C0(Local_1322[0 /*2*/]))) || (unk_0x2137828D03306CAF(Local_1322[1 /*2*/]) && !unk_0xED01C551E3A161C0(Local_1322[1 /*2*/]))) || (unk_0x2137828D03306CAF(Local_1322[2 /*2*/]) && !unk_0xED01C551E3A161C0(Local_1322[2 /*2*/])))
		{
			iLocal_1303 = 2;
		}
	}
	if (iLocal_1303 == 2)
	{
		if ((((!unk_0x2137828D03306CAF(Local_1318.f_0) || !unk_0x7FAC45D56235AB39(Local_1318.f_0, 0)) || (unk_0x2137828D03306CAF(Local_1322[0 /*2*/]) && !func_87(Local_1322[0 /*2*/]))) || (unk_0x2137828D03306CAF(Local_1322[1 /*2*/]) && !func_87(Local_1322[1 /*2*/]))) || (unk_0x2137828D03306CAF(Local_1322[2 /*2*/]) && !func_87(Local_1322[2 /*2*/])))
		{
			iLocal_1303 = 3;
		}
	}
	if (iLocal_1303 == 0)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("towtruck") || unk_0xD3B21CE53AA7BE51(iVar0) == joaat("towtruck2"))
			{
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					if (unk_0x07FD82987E8F3A91(iVar0, Local_1318.f_0))
					{
						iLocal_1320 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1303 == 0)
	{
		if (!unk_0x7FAC45D56235AB39(Local_1318.f_0, 0))
		{
			iLocal_1303 = 1;
		}
	}
	if (iLocal_1303 == 1 && unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_126(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x2137828D03306CAF(Global_94043.f_4))
	{
		if (unk_0x7FAC45D56235AB39(Global_94043.f_4, 0))
		{
			if (func_177(24) != Global_94043.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_174(unk_0xD1EE0E9FCD74A37B(Global_94043.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_127(Global_94043.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_127(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x2137828D03306CAF(Global_68628.f_484[25]) && unk_0x7FAC45D56235AB39(Global_68628.f_484[25], 0))
			{
				if (Global_68628.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xD540D62327324842(iParam0) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("bus")) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_173(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_169(iParam0, &Var0);
		if (func_114(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
			uParam4 = unk_0x6DAB28241B34DEED(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) != joaat("vehicle_gen_controller"))
			{
				Global_69616 = unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC());
			}
		}
		func_162(iParam5, &Var0, Param1, uParam4, func_168(iParam0));
		func_128(iParam5, iParam0, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_158(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 12) && !unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68628.f_555[0 /*21*/].f_4 != unk_0xD3B21CE53AA7BE51(iParam1))
		{
			return;
		}
	}
	if (Global_69535 != -1 && Global_69535 != iParam0)
	{
		return;
	}
	if (unk_0x2137828D03306CAF(iParam1))
	{
		if (unk_0x7FAC45D56235AB39(iParam1, 0))
		{
			if (!unk_0x03322C3918511AA0(iParam1))
			{
				unk_0x216B434C1A609F5B(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_103236.f_32211.f_4801 = func_147();
			}
			if (iParam1 != Global_68628.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_177(iParam0);
					if ((unk_0x2137828D03306CAF(iVar0) && unk_0x7FAC45D56235AB39(iVar0, 0)) && iParam1 != iVar0)
					{
						func_129(iVar0, 145);
					}
				}
				Global_69534 = iParam1;
				Global_69535 = iParam0;
				Global_69536 = iParam2;
			}
		}
	}
}

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_130(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, -1, 0);
		if (!unk_0x2137828D03306CAF(iVar0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, -1);
		}
		if (unk_0x2137828D03306CAF(iVar0) && !unk_0x769F0F6444C1ABE0(iVar0))
		{
			if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_103236.f_2164.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xD3B21CE53AA7BE51(iParam0) == Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x58478145CAF8429C(&(Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x35302CD5A5D37EED(unk_0x76FEACB77B140714(iParam0), &(Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_103236.f_32211.f_5592[iVar1] = iVar2;
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
		if (unk_0xD3B21CE53AA7BE51(iParam0) == Global_103236.f_32211.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x58478145CAF8429C(&(Global_103236.f_32211.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x35302CD5A5D37EED(unk_0x76FEACB77B140714(iParam0), &(Global_103236.f_32211.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_103236.f_32211.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_103236.f_32211.f_5590 = iParam1;
	Global_69533 = iParam0;
	Global_103236.f_32211.f_5588 = 1;
	func_169(iParam0, &(Global_103236.f_32211.f_5510));
}

int func_130(int iParam0)
{
	if ((((((((((!unk_0x2137828D03306CAF(iParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0)) || func_145(iParam0, 0, 0)) || func_145(iParam0, 1, 0)) || func_145(iParam0, 2, 0)) || func_168(iParam0) != 145) || func_144(iParam0)) || func_143(iParam0)) || func_142(iParam0)) || func_141(iParam0)) || !func_131(unk_0xD3B21CE53AA7BE51(iParam0)))
	{
		if (func_143(iParam0))
		{
		}
		if (func_143(iParam0))
		{
		}
		if (func_145(iParam0, 0, 0))
		{
		}
		if (func_145(iParam0, 1, 0))
		{
		}
		if (func_145(iParam0, 2, 0))
		{
		}
		if (func_168(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_131(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_132(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xC6B6C45D0DE76B0B(iParam0) || unk_0xDA6E804770521A18(iParam0)) || unk_0x0F93427D94EAEAA2(iParam0)) || unk_0x11217C882DAE7DDD(iParam0))
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

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5FABA3586E57ED57(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x591AF4C50B46E014()) || (iParam0 == joaat("buffalo3") && !unk_0x591AF4C50B46E014())) || (iParam0 == joaat("gauntlet2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blista3"))
	{
		if (!func_140())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x387A7CB2B4F8027A())
		{
			if (unk_0xC36B0959EAB89B8F(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x17983D8EA6EAF9C8(Var1.f_0))
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
		if ((((!func_139() && !func_138()) && !func_137()) && !func_136()) && !func_140())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x97FFE0491AC179A2() || unk_0x5018862FF5D9F844()) || unk_0x429A1F8C699BEE23())
		{
		}
		else if (!func_137())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_135(iParam0))
		{
			return 0;
		}
	}
	if (!func_133(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_134())
	{
		return 1;
	}
	unk_0xAA8D12A27D860B4A(&iVar0, &uVar1);
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
	if (!unk_0x8B420EE50F3B667E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_134()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2484612)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDA84A1E29323722E();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5515 && !Global_262145.f_11562) && iVar1 < Global_262145.f_11563)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12774 && iVar1 < Global_262145.f_12786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12770 && iVar1 < Global_262145.f_12782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12771 && iVar1 < Global_262145.f_12783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12772 && iVar1 < Global_262145.f_12784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12773 && iVar1 < Global_262145.f_12785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12775 && iVar1 < Global_262145.f_12787)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12776 && iVar1 < Global_262145.f_12779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12777 && iVar1 < Global_262145.f_12780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12778 && iVar1 < Global_262145.f_12781)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15405 && iVar1 < Global_262145.f_15370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15400 && iVar1 < Global_262145.f_15365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15404 && iVar1 < Global_262145.f_15369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15403 && iVar1 < Global_262145.f_15368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15397 && iVar1 < Global_262145.f_15362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15398 && iVar1 < Global_262145.f_15363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15401 && iVar1 < Global_262145.f_15366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15402 && iVar1 < Global_262145.f_15367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15399 && iVar1 < Global_262145.f_15364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15407 && iVar1 < Global_262145.f_15372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15408 && iVar1 < Global_262145.f_15373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15396 && iVar1 < Global_262145.f_15361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15395 && iVar1 < Global_262145.f_15360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15394 && iVar1 < Global_262145.f_15359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15406 && iVar1 < Global_262145.f_15371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15409 && iVar1 < Global_262145.f_15374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15410 && iVar1 < Global_262145.f_15375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15411 && iVar1 < Global_262145.f_15376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15412 && iVar1 < Global_262145.f_15377)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15557 && iVar1 < Global_262145.f_15579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15558 && iVar1 < Global_262145.f_15580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15559 && iVar1 < Global_262145.f_15581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15560 && iVar1 < Global_262145.f_15582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15561 && iVar1 < Global_262145.f_15583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15562 && iVar1 < Global_262145.f_15584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15564 && iVar1 < Global_262145.f_15585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15565 && iVar1 < Global_262145.f_15586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15566 && iVar1 < Global_262145.f_15587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15567 && iVar1 < Global_262145.f_15588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15568 && iVar1 < Global_262145.f_15589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15569 && iVar1 < Global_262145.f_15590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15570 && iVar1 < Global_262145.f_15591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15576 && iVar1 < Global_262145.f_15598)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15573 && iVar1 < Global_262145.f_15594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15574 && iVar1 < Global_262145.f_15595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15575 && iVar1 < Global_262145.f_15596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15563 && iVar1 < Global_262145.f_15597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15577 && iVar1 < Global_262145.f_15599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15571 && iVar1 < Global_262145.f_15592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15572 && iVar1 < Global_262145.f_15593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15578 && iVar1 < Global_262145.f_15600)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17208 && iVar1 < Global_262145.f_17249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17209 && iVar1 < Global_262145.f_17250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17210 && iVar1 < Global_262145.f_17251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17211 && iVar1 < Global_262145.f_17252)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17212 && iVar1 < Global_262145.f_17253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17213 && iVar1 < Global_262145.f_17254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17214 && iVar1 < Global_262145.f_17255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17215 && iVar1 < Global_262145.f_17256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17216 && iVar1 < Global_262145.f_17257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17217 && iVar1 < Global_262145.f_17258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17218 && iVar1 < Global_262145.f_17259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17219 && iVar1 < Global_262145.f_17260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17220 && iVar1 < Global_262145.f_17261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17221 && iVar1 < Global_262145.f_17262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17222 && iVar1 < Global_262145.f_17263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17223 && iVar1 < Global_262145.f_17264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17224 && iVar1 < Global_262145.f_17265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17225 && iVar1 < Global_262145.f_17266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17226 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17227 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17228 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17229 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17230 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18233 && iVar1 < Global_262145.f_18229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18234 && iVar1 < Global_262145.f_18230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18235 && iVar1 < Global_262145.f_18231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18236 && iVar1 < Global_262145.f_18232)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19073 && iVar1 < Global_262145.f_19081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19074 && iVar1 < Global_262145.f_19082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19075 && iVar1 < Global_262145.f_19083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19076 && iVar1 < Global_262145.f_19084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19077 && iVar1 < Global_262145.f_19085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19078 && iVar1 < Global_262145.f_19086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("apc"))
	{
	}
	else if (iParam0 == joaat("dune3"))
	{
	}
	else if (iParam0 == joaat("halftrack"))
	{
	}
	else if (iParam0 == joaat("oppressor"))
	{
	}
	else if (iParam0 == joaat("tampa3"))
	{
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
	}
	return iVar0;
}

int func_136()
{
	return 0;
}

int func_137()
{
	return 1;
}

int func_138()
{
	return 1;
}

int func_139()
{
	if (unk_0xA438D14FADC1185B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					uVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&uVar0, 0);
					unk_0x01D51AAE02B320BA(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	sVar1 = unk_0x76FEACB77B140714(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x35302CD5A5D37EED(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_132(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2137828D03306CAF(Global_89283[iVar0]))
		{
			if (Global_89283[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x2137828D03306CAF(Global_89253[iVar0]) && unk_0x7FAC45D56235AB39(Global_89253[iVar0], 0))
			{
				if (Global_89253[iVar0] == iParam0 && unk_0xD3B21CE53AA7BE51(Global_89253[iVar0]) == unk_0xD3B21CE53AA7BE51(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(Global_68628.f_484[24]))
	{
		if (iParam0 == Global_68628.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x2137828D03306CAF(Global_68628.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68628.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x2137828D03306CAF(iParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_146(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iVar9], 0))
		{
			if (unk_0x62B2A00573987368(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_147()
{
	var uVar0;
	
	func_157(&uVar0, unk_0xD887411BD4A4A92D());
	func_156(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_155(&uVar0, unk_0xDA870B7547A455EA());
	func_150(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_149(&uVar0, unk_0x0FD588FC21950895());
	func_148(&uVar0, unk_0x15C180E135C728D1());
	return uVar0;
}

void func_148(var uParam0, int iParam1)
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

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_154(*uParam0);
	iVar1 = func_152(*uParam0);
	if (iParam1 < 1 || iParam1 > func_151(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_151(int iParam0, int iParam1)
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

var func_152(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_153(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
}

int func_153(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_154(var uParam0)
{
	return uParam0 & 15;
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_158(var uParam0, int iParam1)
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
			uParam0->f_4 = func_159(0, 1);
			uParam0->f_12 = 0;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_159(0, 1);
			uParam0->f_12 = 0;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_159(1, 1);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_159(1, 2);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 19);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_159(1, 1);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_159(1, 2);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 19);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_159(2, 1);
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_159(2, 1);
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_159(2, 1);
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 27);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 27);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 27);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 11);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 11);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 9);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 9);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
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
			if (func_140())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_140())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_103236.f_32211.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_114(Global_103236.f_32211.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_103236.f_32211.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_103236.f_32211.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_103236.f_32211.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_9, 19))
	{
		if (!func_114(Global_103236.f_2164.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_103236.f_2164.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_103236.f_2164.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(uParam0->f_9, 20))
	{
		if (!func_114(Global_103236.f_2164.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_103236.f_2164.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_103236.f_2164.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_159(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_161(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_160(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_160(int iParam0, var uParam1, int iParam2)
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
			if (Global_103236.f_8866.f_99.f_58[128] && !Global_103236.f_8866.f_99.f_58[131])
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
					if (Global_103236.f_8866.f_99.f_58[119])
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
			else if (Global_103236.f_8866.f_99.f_58[118])
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

bool func_161(int iParam0)
{
	return iParam0 < 3;
}

void func_162(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_158(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 10))
		{
			func_167(iParam0);
			func_166(uParam1, &(Global_103236.f_32211.f_69[Global_68628.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 11))
			{
				Global_103236.f_32211.f_1864[Global_68628.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_103236.f_32211.f_1934[Global_68628.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_103236.f_32211.f_1864[Global_68628.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_103236.f_32211.f_1934[Global_68628.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_103236.f_32211.f_1958[Global_68628.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_163(iParam0, 1);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_165(iParam0, 0))
		{
			func_164(iParam0, 1, 0);
			func_164(iParam0, 2, 0);
			func_164(iParam0, 3, 0);
			func_164(iParam0, 4, 0);
			func_164(iParam0, 0, 1);
			Global_68628[iParam0] = 1;
		}
	}
	else
	{
		func_164(iParam0, 0, 0);
	}
}

void func_164(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_32211[iParam0]), iParam1);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_32211[iParam0]), iParam1);
	}
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_32211[iParam0], iParam1);
}

void func_166(var uParam0, var uParam1)
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

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_158(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x2137828D03306CAF(Global_68628.f_139[iParam0]))
		{
			unk_0x216B434C1A609F5B(Global_68628.f_139[iParam0], 1, 1);
			unk_0xFECCD8AF38671477(&(Global_68628.f_139[iParam0]));
			Global_68628.f_139[iParam0] = 0;
		}
		if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 13))
		{
			func_163(iParam0, 0);
		}
	}
}

int func_168(int iParam0)
{
	int iVar0;
	
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 145;
	}
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x2137828D03306CAF(Global_89253[iVar0]))
		{
			if (Global_89253[iVar0] == iParam0)
			{
				return Global_89263[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_169(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		func_172(uParam1);
		uParam1->f_66 = unk_0xD3B21CE53AA7BE51(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x76FEACB77B140714(iParam0), 16);
		*uParam1 = unk_0x8721B6183C713CE4(iParam0);
		unk_0x89AFA08324111FDC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA410C943ACB84245(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA6349759D1FE6F1C(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x289A21B43A9C74AA(iParam0);
		uParam1->f_67 = unk_0x30DA210F0843C9E9(iParam0);
		uParam1->f_69 = unk_0xEDE232D4FB7953E1(iParam0);
		uParam1->f_70 = unk_0xEC63E312ACFB2C99(iParam0);
		unk_0xD9F5533763950EB1(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x4140FA0DCDF92827(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xD046431B0EBE3CAF(iParam0, 2))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 28);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 3))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 29);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 30);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 1))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4294F2710818C474(iParam0, 0))
		{
			uParam1->f_68 = unk_0x69F266E1CAA28F73(iParam0);
		}
		if (unk_0xDA6E804770521A18(uParam1->f_66))
		{
			if (unk_0x5C6E7D7E0AC7BBD7(iParam0))
			{
				switch (unk_0x720776EFC73F5B23(iParam0))
				{
					case 2:
					case 0:
						unk_0x507FE690B1271947(&(uParam1->f_77), 23);
						unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x507FE690B1271947(&(uParam1->f_77), 23);
						unk_0x507FE690B1271947(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7C5D0771C19AD7FF(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 9);
		}
		if (unk_0xED329BF1C4277ABD(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 10);
		}
		if (unk_0x6143D7FE8749E532(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 13);
			unk_0xF036A2A8ADC88DFC(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9139A45B8DE75586(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 12);
		}
		func_171(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x519A3AD50A2673BF(iParam0, iVar0 + 1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_170(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xEDC05B7EC722C843(iParam0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 11);
		}
		if (unk_0x30BD96CB13063EC9(iParam0, "IgnoredByQuickSave") && unk_0x42EC87EC81CA5339(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 27);
		}
	}
}

int func_170(int iParam0)
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

int func_171(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7FAC45D56235AB39(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x300A7FCC6B376752(*iParam0) == 0)
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
			if (unk_0x9CFA3995FF093229(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x855369FDBD418C02(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xF9562C9903A5FC6A(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xF9562C9903A5FC6A(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_172(var uParam0)
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

void func_173(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_167(iParam0);
	func_163(iParam0, 0);
}

int func_174(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_175(Param0, iParam3, 1);
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

int func_175(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86960[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86960[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_176(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Global_86960[iVar0 /*10*/].f_3, 1);
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

bool func_176(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iParam0], 0);
}

int func_177(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68628.f_139[iParam0];
}

int func_178()
{
	func_179();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_179()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_181(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_180(unk_0x2A5EB8B0FE590B91());
			if (func_161(iVar0) && (!func_30(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_161(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

int func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_181(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_181(int iParam0)
{
	if (func_161(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_182(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_183(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x63EE614B6594E772(sParam0);
	unk_0x17C5AB14FA142F36(iParam1, 1);
}

int func_184(int iParam0, bool bParam1, bool bParam2)
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_185(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		switch (unk_0x165904868F8BF802(iParam0))
		{
			case 1:
				if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0xA9A04898798AE9E6(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_186(var uParam0)
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
				if ((unk_0x3732B96D7A1859B4() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_187()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!iLocal_1351)
		{
			func_190(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), -1);
			func_189(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), -1);
			iLocal_1351 = 1;
		}
	}
	else if (iLocal_1351)
	{
		func_189(0, -1);
		func_190(0, -1);
		iLocal_1351 = 0;
	}
	if (!iLocal_1349)
	{
		if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
		{
			if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1))
			{
				unk_0x74A5A7443264D9EE("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1349 = 1;
			}
			else if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
			{
				unk_0x74A5A7443264D9EE("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1349 = 1;
			}
		}
	}
	if (iLocal_93 == 0)
	{
		switch (iLocal_1303)
		{
			case 0:
				if ((unk_0x2137828D03306CAF(Local_1306.f_0) && !unk_0x769F0F6444C1ABE0(Local_1306.f_0)) && func_122(&(Local_1084[0 /*8*/])))
				{
					if (Local_1084[0 /*8*/].f_1 == 1)
					{
						if (func_188(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1) > 500f)
						{
							func_262(1);
						}
					}
					else if (Local_1084[0 /*8*/].f_1 == 4)
					{
						if (func_188(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1) > 250f)
						{
							func_262(1);
						}
					}
					else if (func_188(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1) > 250f)
					{
						func_262(2);
					}
				}
				else if (func_188(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1) > 250f)
				{
					func_262(2);
				}
				break;
			
			case 1:
				if (func_188(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1) > 250f)
				{
					func_262(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0x2137828D03306CAF(Local_1322[0 /*2*/]) && func_188(unk_0x2A5EB8B0FE590B91(), Local_1322[0 /*2*/], 1) > 250f) && unk_0x2137828D03306CAF(Local_1322[1 /*2*/])) && func_188(unk_0x2A5EB8B0FE590B91(), Local_1322[1 /*2*/], 1) > 250f) && unk_0x2137828D03306CAF(Local_1322[2 /*2*/])) && func_188(unk_0x2A5EB8B0FE590B91(), Local_1322[2 /*2*/], 1) > 250f)
					{
						func_262(3);
					}
				}
				break;
			}
	}
	if (unk_0x2137828D03306CAF(Local_1318.f_0))
	{
		if ((unk_0xABCF7EB00A727656(Local_1318.f_0) && !unk_0x7FAC45D56235AB39(Local_1318.f_0, 0)) && !unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
		{
			func_262(4);
		}
	}
}

float func_188(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

void func_189(int iParam0, int iParam1)
{
	Global_55865 = iParam0;
	Global_55866 = iParam1;
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55867 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67949)
	{
		if (iParam1 == -1 || Global_67950[iVar0 /*9*/] == iParam1)
		{
			if (Global_67950[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67950[iVar0 /*9*/].f_6 = iParam0;
				Global_67950[iVar0 /*9*/].f_7 = 1;
				Global_67950[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_191()
{
	if (unk_0x2137828D03306CAF(Local_1306.f_0))
	{
		if (!unk_0xC4A39E4229BD3ABE(Local_1306.f_0, 0))
		{
			func_192(Local_1306.f_0, &(Local_1306.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
	}
	if (unk_0x2137828D03306CAF(Local_1318.f_0))
	{
		if (((!func_185(Local_1318.f_0) && unk_0xA9A04898798AE9E6(Local_1318.f_0, 0)) && iLocal_1346) && func_188(Local_1318.f_0, unk_0x2A5EB8B0FE590B91(), 1) > 200f)
		{
			unk_0xFECCD8AF38671477(&Local_1318);
		}
	}
}

int func_192(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x8A41C463063AFC8E();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x769F0F6444C1ABE0(uParam0))
	{
		if (!unk_0x4C2C9007DF4A7DB6(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x740D0745C06D2DDC(iParam0, 1);
			}
			else
			{
				unk_0xEC788EF0F7E0437A(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x958B0F67184F0A15(iParam0, iParam2);
			unk_0xE27A966E15A7110C(iParam0, fParam6);
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA4130A6FADB516EE(iParam0, iParam9);
		}
		unk_0xEEFEA3C5BD4B4CEC(iParam0, iParam4);
		unk_0xFA67C6B6608350D2(iParam0, iParam5);
		*uParam1 = unk_0x964C09CA77A5150B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB5D36079067EBA5(*uParam1, iParam8);
				}
				unk_0xCE515166115E0087("STRING");
				if (bParam10)
				{
					unk_0xCF6846167A5EFE98(iParam7);
				}
				else
				{
					unk_0xD5DA3EC5EEC78358(iParam7);
				}
				unk_0xC3EC4F430EC11854(*uParam1);
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 2))
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!unk_0x58478145CAF8429C(iParam7))
				{
					unk_0xCE515166115E0087("STRING");
					if (bParam10)
					{
						unk_0xCF6846167A5EFE98(iParam7);
					}
					else
					{
						unk_0xD5DA3EC5EEC78358(iParam7);
					}
					unk_0xC3EC4F430EC11854(*uParam1);
				}
				unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			uParam1->f_1 = unk_0x05DF223770EFF48B(iParam0);
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 3))
			{
				if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
				{
					unk_0x697F84823ACFF84C(uParam1->f_1, 7);
					unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x507FE690B1271947(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_96 == 1)
	{
		if (!unk_0xF4EE9D6C8E60AE22())
		{
			if (!unk_0xEF08C8E0C4679477())
			{
				unk_0x5BFE0E837BA0AF60(1000);
			}
		}
		else
		{
			if (unk_0x4F561A675BAC81C6())
			{
				unk_0x3E6ED80934AE4880(0);
				unk_0x27378D398128FEC6();
			}
			iLocal_93 = iLocal_97;
			unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
			unk_0x0508903FC1B0ED24();
			unk_0x7D53B6FFAEDA810A(1);
			func_8(1);
			if (unk_0x4F561A675BAC81C6())
			{
				unk_0x27378D398128FEC6();
			}
			if (!func_236())
			{
				func_235(iLocal_93, &Var0, &uVar3);
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Var0, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), uVar3);
				unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 1);
				func_233(&uLocal_99, Var0, 50f, 0);
			}
			func_232(&uLocal_99);
			switch (iLocal_93)
			{
				case 0:
					func_231(&uLocal_99, iLocal_83);
					func_231(&uLocal_99, iLocal_84);
					func_231(&uLocal_99, iLocal_85);
					func_230(&uLocal_99, &Global_88784);
					break;
				
				case 1:
					func_231(&uLocal_99, joaat("burrito2"));
					break;
			}
			while (!func_229(&uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_191();
			}
			switch (iLocal_93)
			{
				case 0:
					while (!func_222(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x35302CD5A5D37EED(&Global_88784, "jhp2a_main"))
					{
						while (!func_197(&iLocal_1316, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x17F1CA1754EDB8DB(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						while (!func_197(&iLocal_1316, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x17F1CA1754EDB8DB(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0);
						}
					}
					unk_0x23B7F0BEB9890E62(iLocal_1316, 0);
					unk_0xE4246493481B5222(iLocal_1316, 1, false);
					unk_0xE4246493481B5222(iLocal_1316, 2, true);
					unk_0x07C140F31B3CDAFA(iLocal_1316, 1084227584);
					unk_0x2DEA38A68AA89671(iLocal_1316, 1, 1, 0);
					if (func_236())
					{
						func_194(iLocal_1316, -1, 1);
					}
					else
					{
						unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 0);
						unk_0x01EE2412A2609146(unk_0x2A5EB8B0FE590B91(), iLocal_1316, -1);
					}
					unk_0x164CA344DBD7B6F3(0f);
					unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1318.f_0 = unk_0xE42A511281C9895B(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
						unk_0xBB7DA429845F53D4(Local_1318.f_0, 0);
						unk_0x07C140F31B3CDAFA(Local_1318.f_0, 1084227584);
					}
					if (func_236())
					{
						func_194(0, -1, 1);
					}
					else
					{
						unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 0);
					}
					unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 359.5735f);
					unk_0x164CA344DBD7B6F3(0f);
					unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
					break;
			}
			if (unk_0xF4EE9D6C8E60AE22() || !unk_0x9AF3AC4F52023B45())
			{
				unk_0x9B0467159FAB9F56(1000);
			}
			bLocal_96 = false;
		}
	}
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (func_196() && func_236())
	{
		while (Global_91772 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8850034223654421(0);
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x8591E81E75799D08(unk_0x2A5EB8B0FE590B91());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x2137828D03306CAF(iParam0))
				{
					if (unk_0x7FAC45D56235AB39(iParam0, 0))
					{
						if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam0, 0))
						{
							unk_0x01EE2412A2609146(unk_0x2A5EB8B0FE590B91(), iParam0, iParam1);
							unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
							unk_0x164CA344DBD7B6F3(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
			}
		}
		unk_0x3BB20A910B3F98DC();
		func_195(0);
	}
}

void func_195(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 13);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_91777.f_20), 13);
	}
}

int func_196()
{
	if (Global_91777 == 10 || Global_91777 == 9)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_196())
	{
		if (func_221())
		{
			func_166(&(Global_97012.f_2875.f_12), &Var0);
		}
	}
	else if (func_219())
	{
		func_166(&(Global_94043.f_2875.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_218(0, &Var0))
		{
			if (unk_0x6CB676485E7724F8(Var0.f_66) || unk_0x4BD9974FDDE2D1EC(Var0.f_66))
			{
				unk_0x0F39DF6675B2333E(Var0.f_66);
				if (unk_0xA1FC9D7AEA164881(Var0.f_66))
				{
					*iParam0 = unk_0xE42A511281C9895B(Var0.f_66, Param1, fParam4, 1, 1, 0);
					func_214(*iParam0, &Var0, 0, 1);
					unk_0xFD213087BC4CC3B3(Var0.f_66);
					unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
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
		if (!unk_0x2137828D03306CAF(*iParam0))
		{
			if (func_198(iParam0, 0, Param1, fParam4, 1, 0))
			{
				unk_0x02E663D7DDAE8202(func_159(0, 0), 1);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_198(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_161(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_160(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x2137828D03306CAF(*iParam0))
		{
			if (unk_0xD3B21CE53AA7BE51(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_103236.f_2164.f_539.f_4296) && Global_103236.f_8866.f_99.f_58[131])
		{
			Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x0F39DF6675B2333E(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xA1FC9D7AEA164881(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE42A511281C9895B(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
				unk_0x57BF0DBF9E160E0A(*iParam0, 0);
				unk_0xAEED2773E5D58406(*iParam0, 0);
				unk_0x9897DB908AE3BCFF(*iParam0, 1);
				unk_0x67E5DE1657F60AC6(*iParam0, 1250);
				unk_0x525CB8A0699017B3(*iParam0, 1250f);
				unk_0x6385100E76566DD6(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC2C096B78AB918EB(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x1225B25A5432A577(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x170792970BF5726F(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xE4246493481B5222(*iParam0, iVar103 + 1, !Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x2038B43D5C4AA200(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_213(&uVar1, &uVar0))
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &uVar1);
					unk_0xA7314A354509BF8F(*iParam0, uVar0);
				}
				else
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x00007E94C64D5DBF())
					{
						unk_0xA7314A354509BF8F(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB1546B6A0A948EEF(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x11C8DD1ABA391722(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x81B2B4427379A53A(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xFB949D3CEFC55756(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xAF068518EE1A2969(*iParam0, 2, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xAF068518EE1A2969(*iParam0, 3, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xAF068518EE1A2969(*iParam0, 0, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xAF068518EE1A2969(*iParam0, 1, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x7006FCC790371C48(*iParam0) > 1 && Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x8F60D3A8849F5D7E(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(*iParam0)))
					{
						if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(*iParam0)))
						{
							if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_209(iParam0, &(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x9A030C582B35313F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bodhi2"))
					{
						func_207(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xFD213087BC4CC3B3(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_206(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x0F39DF6675B2333E(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xA1FC9D7AEA164881(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE42A511281C9895B(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
				unk_0x57BF0DBF9E160E0A(*iParam0, 0);
				unk_0xAEED2773E5D58406(*iParam0, 0);
				unk_0x9897DB908AE3BCFF(*iParam0, 1);
				unk_0x67E5DE1657F60AC6(*iParam0, 1250);
				unk_0x525CB8A0699017B3(*iParam0, 1250f);
				unk_0x6385100E76566DD6(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC2C096B78AB918EB(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x1225B25A5432A577(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x170792970BF5726F(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xE4246493481B5222(*iParam0, iVar104 + 1, !Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x2038B43D5C4AA200(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_213(&uVar1, &uVar0))
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &uVar1);
					unk_0xA7314A354509BF8F(*iParam0, uVar0);
				}
				else
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x00007E94C64D5DBF())
					{
						unk_0xA7314A354509BF8F(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB1546B6A0A948EEF(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x11C8DD1ABA391722(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x81B2B4427379A53A(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xFB949D3CEFC55756(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xAF068518EE1A2969(*iParam0, 2, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xAF068518EE1A2969(*iParam0, 3, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xAF068518EE1A2969(*iParam0, 0, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xAF068518EE1A2969(*iParam0, 1, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x7006FCC790371C48(*iParam0) > 1 && Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x8F60D3A8849F5D7E(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(*iParam0)))
					{
						if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(*iParam0)))
						{
							if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_209(iParam0, &(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x9A030C582B35313F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bodhi2"))
					{
						func_207(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xFD213087BC4CC3B3(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_206(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x0F39DF6675B2333E(Var5.f_0);
			if (unk_0xA1FC9D7AEA164881(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xE42A511281C9895B(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
				unk_0x57BF0DBF9E160E0A(*iParam0, 0);
				unk_0xAEED2773E5D58406(*iParam0, 0);
				unk_0x9897DB908AE3BCFF(*iParam0, 1);
				StringCopy(&cVar106, unk_0x76FEACB77B140714(*iParam0), 16);
				unk_0x67E5DE1657F60AC6(*iParam0, 1250);
				unk_0x525CB8A0699017B3(*iParam0, 1250f);
				unk_0x6385100E76566DD6(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC2C096B78AB918EB(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x1225B25A5432A577(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x170792970BF5726F(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xE4246493481B5222(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x2038B43D5C4AA200(*iParam0, Var5.f_24);
				}
				if (func_213(&uVar1, &uVar0))
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &uVar1);
					unk_0xA7314A354509BF8F(*iParam0, uVar0);
				}
				else
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x00007E94C64D5DBF())
					{
						unk_0xA7314A354509BF8F(*iParam0, Var5.f_26);
					}
				}
				unk_0xB1546B6A0A948EEF(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x11C8DD1ABA391722(*iParam0, Var5.f_88);
				unk_0x81B2B4427379A53A(*iParam0, Var5.f_87);
				unk_0xFB949D3CEFC55756(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0xAF068518EE1A2969(*iParam0, 2, unk_0xAA4F14DA15DB0B51(Var5.f_92, 28));
				unk_0xAF068518EE1A2969(*iParam0, 3, unk_0xAA4F14DA15DB0B51(Var5.f_92, 29));
				unk_0xAF068518EE1A2969(*iParam0, 0, unk_0xAA4F14DA15DB0B51(Var5.f_92, 30));
				unk_0xAF068518EE1A2969(*iParam0, 1, unk_0xAA4F14DA15DB0B51(Var5.f_92, 31));
				if (unk_0x7006FCC790371C48(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x8F60D3A8849F5D7E(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(*iParam0)))
					{
						if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xF2EEE6F25AF5D5B9(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xF2EEE6F25AF5D5B9(*iParam0, Var5.f_90);
						}
					}
				}
				func_209(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x9A030C582B35313F(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bagger") && !Global_103236.f_8866.f_99.f_58[118])
					{
						unk_0x08DCA8665D0C20FA(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bodhi2"))
					{
						func_207(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_103236.f_2164.f_539.f_4296) && Global_103236.f_8866.f_99.f_58[131]) && unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("tailgater"))
				{
					unk_0x7940803ED711B46E(*iParam0, 6, 1, false);
					unk_0x7940803ED711B46E(*iParam0, 14, 7, false);
					unk_0x7940803ED711B46E(*iParam0, 11, 2, false);
					unk_0x7940803ED711B46E(*iParam0, 2, 3, false);
					unk_0x7940803ED711B46E(*iParam0, 7, 5, false);
					unk_0x7940803ED711B46E(*iParam0, 0, 0, false);
					unk_0x7940803ED711B46E(*iParam0, 3, 3, false);
					unk_0x7940803ED711B46E(*iParam0, 13, 1, false);
					unk_0x7940803ED711B46E(*iParam0, 4, 3, false);
					unk_0x7940803ED711B46E(*iParam0, 12, 2, false);
					unk_0x4F10E5AD7F210123(*iParam0, 22, true);
					unk_0xF2EEE6F25AF5D5B9(*iParam0, 2);
					unk_0x7940803ED711B46E(*iParam0, 23, 11, false);
					unk_0x81B2B4427379A53A(*iParam0, 2);
					Global_103236.f_2164.f_539.f_4296 = 1;
					func_199(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0xFD213087BC4CC3B3(Var5.f_0);
				}
				if (bVar105)
				{
					func_206(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_199(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_161(iParam0) && unk_0x2137828D03306CAF(*iParam1)) && unk_0x7FAC45D56235AB39(*iParam1, 0))
	{
		if (iParam2 > Global_103236.f_2164.f_539.f_2387)
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
			func_129(*iParam1, iParam0);
		}
		if (unk_0x300A7FCC6B376752(*iParam1) != 0)
		{
			unk_0x3EEE06C64BC5D39B(*iParam1, 0);
		}
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0xD3B21CE53AA7BE51(*iParam1);
		if (unk_0xFF8C24E64D6E24F2(*iParam1, &iVar1))
		{
			Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0xD3B21CE53AA7BE51(iVar1);
		}
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xB9D1DA086531BDE7(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xE86A53C202B21FAB(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x519A3AD50A2673BF(*iParam1, 1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x519A3AD50A2673BF(*iParam1, 2);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x519A3AD50A2673BF(*iParam1, 3);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x519A3AD50A2673BF(*iParam1, 4);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x519A3AD50A2673BF(*iParam1, 5);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x519A3AD50A2673BF(*iParam1, 6);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x519A3AD50A2673BF(*iParam1, 7);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x519A3AD50A2673BF(*iParam1, 8);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x519A3AD50A2673BF(*iParam1, 9);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x519A3AD50A2673BF(*iParam1, 10);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x519A3AD50A2673BF(*iParam1, 11);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x519A3AD50A2673BF(*iParam1, 12);
		if (unk_0x4294F2710818C474(*iParam1, 0))
		{
			iVar2 = unk_0x69F266E1CAA28F73(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x511EB800EFE78B52();
		StringCopy(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x76FEACB77B140714(*iParam1), 16);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x8721B6183C713CE4(*iParam1);
		unk_0x89AFA08324111FDC(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xA410C943ACB84245(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xA6349759D1FE6F1C(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x7C5D0771C19AD7FF(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x289A21B43A9C74AA(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x30DA210F0843C9E9(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xEDE232D4FB7953E1(*iParam1);
		unk_0x4140FA0DCDF92827(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xD046431B0EBE3CAF(*iParam1, 2))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xD046431B0EBE3CAF(*iParam1, 3))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xD046431B0EBE3CAF(*iParam1, 0))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xD046431B0EBE3CAF(*iParam1, 1))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_103236.f_2164.f_539.f_4297[iParam0] = 10;
		if ((unk_0x5688106DF029B957(*iParam1) >= 0 && unk_0x5688106DF029B957(*iParam1) < 255) && func_203(*iParam1, 0, &uVar0))
		{
			func_171(iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_103236.f_19899[iParam0 /*43*/].f_40 = 1;
				Global_103236.f_19899[iParam0 /*43*/] = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_103236.f_19899[iParam0 /*43*/].f_3 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_103236.f_19899[iParam0 /*43*/].f_4 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_103236.f_19899[iParam0 /*43*/].f_5 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_103236.f_19899[iParam0 /*43*/].f_6 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_103236.f_19899[iParam0 /*43*/].f_10 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_103236.f_19899[iParam0 /*43*/].f_16 = !Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_103236.f_19899[iParam0 /*43*/].f_19 = { Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_103236.f_19899[iParam0 /*43*/].f_23 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_103236.f_19899[iParam0 /*43*/].f_7 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_103236.f_19899[iParam0 /*43*/].f_8 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_103236.f_19899[iParam0 /*43*/].f_9 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_103236.f_19899[iParam0 /*43*/].f_11 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_103236.f_19899[iParam0 /*43*/].f_12 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_103236.f_19899[iParam0 /*43*/].f_13 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_103236.f_19899[iParam0 /*43*/].f_14 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_103236.f_19899[iParam0 /*43*/].f_15 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_103236.f_19899[iParam0 /*43*/].f_18 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_103236.f_19899[iParam0 /*43*/].f_17 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_103236.f_19899[iParam0 /*43*/].f_24 = unk_0x7EF9AB14DBD846A9(*iParam1, 11) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_25 = unk_0x7EF9AB14DBD846A9(*iParam1, 12) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_26 = unk_0x7EF9AB14DBD846A9(*iParam1, 4) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_27 = unk_0x7EF9AB14DBD846A9(*iParam1, 23) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_28 = unk_0x7EF9AB14DBD846A9(*iParam1, 14) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_29 = unk_0x7EF9AB14DBD846A9(*iParam1, 16) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_30 = unk_0x7EF9AB14DBD846A9(*iParam1, 15) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_32 = unk_0x6A1AEEDEE3E56D20(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[0] = unk_0xF495654F4ECB81B8(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[1] = unk_0x0306EF871D404DE5(*iParam1, 14, 0);
				Global_103236.f_19899[iParam0 /*43*/].f_33[2] = unk_0x0306EF871D404DE5(*iParam1, 14, 1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[3] = unk_0x0306EF871D404DE5(*iParam1, 14, 2);
				Global_103236.f_19899[iParam0 /*43*/].f_33[4] = unk_0x0306EF871D404DE5(*iParam1, 14, 3);
				Global_103236.f_19899[iParam0 /*43*/].f_39 = unk_0x12B9EB0FD500FB78(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_31 = func_202(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[0] = unk_0xCD40B830B6D15DE7(*iParam1);
				unk_0x05E005EA5C9DD9F7(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_200(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_103236.f_19899[iParam0 /*43*/].f_1));
				unk_0xFC554E56023C10DA(*iParam1, &iVar4, &uVar5);
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
				func_200(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_103236.f_19899[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_200(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_201(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

bool func_201(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

float func_202(int iParam0)
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
	if (((unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0)) && unk_0x5688106DF029B957(iParam0) >= 0) && unk_0x5688106DF029B957(iParam0) < 255)
	{
		if (unk_0x12B9EB0FD500FB78(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x12B9EB0FD500FB78(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x12B9EB0FD500FB78(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x12B9EB0FD500FB78(iParam0) == 0)
		{
			if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam0)))
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

int func_203(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x5FABA3586E57ED57(unk_0xD3B21CE53AA7BE51(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	if (!func_204(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (((((unk_0xD540D62327324842(iParam0) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("halftrack")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("phantom3")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("hauler2")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("trailerlarge")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("trailersmall2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x591AF4C50B46E014())
	{
		if ((func_142(iParam0) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("sentinel2")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_204(int iParam0, bool bParam1, var uParam2)
{
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
	if ((((((((!unk_0x6CB676485E7724F8(iParam0) && !unk_0x4BD9974FDDE2D1EC(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2"))
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
	if (unk_0x591AF4C50B46E014())
	{
		if (func_205(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_205(int iParam0)
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

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x2137828D03306CAF(Global_89253[iVar0]))
		{
			Global_89253[iVar0] = iParam0;
			Global_89263[iVar0] = iParam1;
			Global_89273[iVar0] = unk_0xD3B21CE53AA7BE51(iParam0);
			if (unk_0x6CB676485E7724F8(Global_89273[iVar0]))
			{
				Global_89301[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89301[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_207(int iParam0)
{
	if (!func_208(*iParam0))
	{
		unk_0xE4246493481B5222(*iParam0, 5, !Global_103236.f_8866.f_99.f_58[119]);
	}
}

bool func_208(int iParam0)
{
	return unk_0x519A3AD50A2673BF(iParam0, 5);
}

int func_209(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7FAC45D56235AB39(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x300A7FCC6B376752(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x3EEE06C64BC5D39B(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4F10E5AD7F210123(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x855369FDBD418C02(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x74971716DDE7C473(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_212(unk_0xD3B21CE53AA7BE51(*iParam0), 1) && unk_0x855369FDBD418C02(*iParam0, 24) != func_211(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x7940803ED711B46E(*iParam0, 24, func_211(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_210(*iParam0))
	{
		unk_0x3EACD080B21FFD9A(*iParam0, 1);
		unk_0x9897DB908AE3BCFF(*iParam0, 1);
	}
	return 1;
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0)) && unk_0x300A7FCC6B376752(iParam0) > 0)
	{
		unk_0x3EEE06C64BC5D39B(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x855369FDBD418C02(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E5B8F76E9B66F81(iParam0, iVar1, unk_0x855369FDBD418C02(iParam0, iVar1)), 16);
				iVar2 = unk_0xCAEDBF30E3EA14FC(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xCAEDBF30E3EA14FC("MNU_CAGE") || iVar2 == unk_0xCAEDBF30E3EA14FC("SABRE_CAG"))
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

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		switch (unk_0xD3B21CE53AA7BE51(iParam0))
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
		iVar0 = unk_0x7EF9AB14DBD846A9(iParam0, 38);
		iVar1 = unk_0x7EF9AB14DBD846A9(iParam0, 24);
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

int func_212(int iParam0, int iParam1)
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
			if (!Global_262145.f_12771)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12772)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12770)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12773)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12775)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12774)
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
			if (Global_262145.f_17216)
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
			if (Global_262145.f_17218)
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
			if (Global_262145.f_17222)
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
			if (Global_262145.f_17219)
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
			if (Global_262145.f_17226)
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
			if (Global_262145.f_17224)
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
			if (Global_262145.f_17229)
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
			if (Global_262145.f_19079)
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
			if (Global_262145.f_19080)
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

int func_213(var uParam0, var uParam1)
{
	if (unk_0x591AF4C50B46E014())
	{
	}
	else if (Global_103236.f_19899.f_261)
	{
		*uParam0 = { Global_103236.f_19899.f_267 };
		*uParam1 = Global_103236.f_19899.f_271;
		return 1;
	}
	return 0;
}

void func_214(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)) != 0)
		{
			unk_0x08DCA8665D0C20FA(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x00007E94C64D5DBF())
		{
			unk_0xA7314A354509BF8F(iParam0, *uParam1);
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
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_170(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_170(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_170(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_170(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x1087BC8EC540DAEB(iParam0, false);
			if (unk_0x855369FDBD418C02(iParam0, 5) != -1)
			{
				unk_0x1087BC8EC540DAEB(iParam0, true);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 13))
		{
			unk_0xA04F6B54BF8EB9D3(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE8D649FA91E8C52B(iParam0);
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 12))
		{
			unk_0xAA12D8CEA5E8A7D4(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x29321171ADCB78EF(iParam0);
		}
		unk_0xC2C096B78AB918EB(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x1225B25A5432A577(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xAA4F14DA15DB0B51(uParam1->f_77, 15) || func_217(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_216())
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
		unk_0xB1546B6A0A948EEF(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x81B2B4427379A53A(iParam0, 0);
		}
		else
		{
			unk_0x81B2B4427379A53A(iParam0, 0);
			unk_0x81B2B4427379A53A(iParam0, uParam1->f_65);
		}
		unk_0x11C8DD1ABA391722(iParam0, !unk_0xAA4F14DA15DB0B51(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD1A53D507962BF1F(iParam0, uParam1->f_70);
		}
		unk_0xFB949D3CEFC55756(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xAF068518EE1A2969(iParam0, 2, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 28));
		unk_0xAF068518EE1A2969(iParam0, 3, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 29));
		unk_0xAF068518EE1A2969(iParam0, 0, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 30));
		unk_0xAF068518EE1A2969(iParam0, 1, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 31));
		unk_0xC0CE5D00E49597D9(iParam0, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 10));
		if (unk_0x7006FCC790371C48(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x8F60D3A8849F5D7E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(iParam0)))
			{
				if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_215(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_215(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x4294F2710818C474(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x9DF0C51BF038A196(iParam0, 1);
			}
			else
			{
				unk_0x1D58A0C9ED6B3B38(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_209(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x0F93427D94EAEAA2(uParam1->f_66) && !unk_0xC6B6C45D0DE76B0B(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_170(iVar2 + 1)))
				{
					if (!unk_0x519A3AD50A2673BF(iParam0, iVar2 + 1))
					{
						unk_0xE4246493481B5222(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x519A3AD50A2673BF(iParam0, iVar2 + 1))
				{
					unk_0xE4246493481B5222(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0xD3B21CE53AA7BE51(iParam0) == joaat("sheava") || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("omnis")) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("le7b"))
		{
			if (unk_0x855369FDBD418C02(iParam0, 0) == -1)
			{
				unk_0xE4246493481B5222(iParam0, 1, false);
			}
		}
		if (unk_0xDA6E804770521A18(uParam1->f_66))
		{
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_77, 23))
			{
				if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 22))
				{
					unk_0x0C2EA5A202FDF476(iParam0, 2);
				}
				else
				{
					unk_0x0C2EA5A202FDF476(iParam0, 3);
				}
			}
			else
			{
				unk_0x0C2EA5A202FDF476(iParam0, 4);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 27))
		{
			unk_0x7009DB24B44E9BF0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x7009DB24B44E9BF0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x300A7FCC6B376752(iParam0) > 0)
	{
		unk_0x3EEE06C64BC5D39B(iParam0, 0);
		iVar0 = unk_0x855369FDBD418C02(iParam0, 24);
		iVar1 = unk_0xF9562C9903A5FC6A(iParam0, 24);
		unk_0xF2EEE6F25AF5D5B9(iParam0, uParam1);
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x74971716DDE7C473(iParam0, 24);
		}
		else
		{
			unk_0x7940803ED711B46E(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_216()
{
	return unk_0xA438D14FADC1185B(joaat("mpindependence"));
}

int func_217(int iParam0)
{
	var uVar0;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (unk_0x4D1A8278BAE26361("MPBitset", 3))
			{
				if (unk_0x30BD96CB13063EC9(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x01307FD0B54F50D3(iParam0, "MPBitset");
				}
				return unk_0xAA4F14DA15DB0B51(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_218(int iParam0, var uParam1)
{
	struct<82> Var0;
	
	if (!func_161(iParam0))
	{
		return 0;
	}
	if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xCAEDBF30E3EA14FC(&(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam0 /*98*/].f_27)) == unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xCAEDBF30E3EA14FC(&(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam0 /*98*/].f_27)) == unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_160(iParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xCAEDBF30E3EA14FC(&(Var0.f_27)) == unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_160(iParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xCAEDBF30E3EA14FC(&(Var0.f_27)) == unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_219()
{
	return func_220(&(Global_94043.f_2875));
}

int func_220(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_132(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_52(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_221()
{
	return func_220(&(Global_97012.f_2875));
}

int func_222(bool bParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_230(&uLocal_99, &Global_88784);
	func_231(&uLocal_99, joaat("s_m_m_armoured_01"));
	func_231(&uLocal_99, iLocal_85);
	func_231(&uLocal_99, iLocal_86);
	if ((unk_0xA1FC9D7AEA164881(joaat("s_m_m_armoured_01")) && unk_0xA1FC9D7AEA164881(iLocal_85)) && unk_0xA1FC9D7AEA164881(iLocal_86))
	{
		if (bParam0)
		{
			if (!unk_0x2137828D03306CAF(Local_1318.f_0))
			{
				if (unk_0x2137828D03306CAF(Global_88419[0]))
				{
					unk_0x216B434C1A609F5B(Global_88419[0], 1, 1);
					Local_1318.f_0 = Global_88419[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0x2137828D03306CAF(Local_1306.f_0))
			{
				if (unk_0x2137828D03306CAF(Global_88419.f_9[0]))
				{
					unk_0x216B434C1A609F5B(Global_88419.f_9[0], 1, 1);
					Local_1306.f_0 = Global_88419.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_231(&uLocal_99, iLocal_84);
			if (unk_0xA1FC9D7AEA164881(iLocal_84) && unk_0xF6D41300D4DD067A(&Global_88784))
			{
				if (unk_0x35302CD5A5D37EED(&Global_88784, "jhp2a_main"))
				{
					unk_0xBA733D85D6F77D9E(&Global_88784, 23, &Var1);
					unk_0x17F1CA1754EDB8DB(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1318.f_0 = unk_0xE42A511281C9895B(iLocal_84, Var1, 119.4988f, 1, 1, 0);
					Local_1306.f_0 = unk_0x7B47BFDF39EC38D3(Local_1318.f_0, 26, iLocal_83, -1, 1, 1);
					unk_0x07C140F31B3CDAFA(Local_1318.f_0, 1084227584);
					unk_0x82889D87596D2C20(Local_1306.f_0, Local_1318.f_0, &Global_88784, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0xBA733D85D6F77D9E(&Global_88784, 29, &Var1);
					unk_0x17F1CA1754EDB8DB(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1318.f_0 = unk_0xE42A511281C9895B(iLocal_84, Var1, 134.0011f, 1, 1, 0);
					Local_1306.f_0 = unk_0x7B47BFDF39EC38D3(Local_1318.f_0, 26, iLocal_83, -1, 1, 1);
					unk_0x07C140F31B3CDAFA(Local_1318.f_0, 1084227584);
					unk_0x82889D87596D2C20(Local_1306.f_0, Local_1318.f_0, &Global_88784, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0x2137828D03306CAF(Local_1318.f_0))
		{
			func_228(Local_1318.f_0, 0);
			if (unk_0x7FAC45D56235AB39(Local_1318.f_0, 0))
			{
				unk_0x9897DB908AE3BCFF(Local_1318.f_0, 1);
				unk_0xD44F61F61676BA14(Local_1318.f_0, 1);
				unk_0x4CC32589F27FBD47(Local_1318.f_0, 1);
				unk_0xCFE4626F633D6C6A(Local_1318.f_0, 1);
			}
		}
		if (unk_0x2137828D03306CAF(Local_1306.f_0))
		{
			if (!unk_0x769F0F6444C1ABE0(Local_1306.f_0))
			{
				unk_0x4C47904AE69D7393(Local_1306.f_0, 1);
				unk_0x3C030E241A3543D2(Local_1306.f_0, iLocal_1305);
				unk_0x176253610C53F0E0(Local_1306.f_0, 5);
				unk_0x2725C3746060DA66(Local_1306.f_0, 0);
				unk_0x89AEA58335779997(Local_1306.f_0, 1, 0);
				unk_0x0013D519C885E60B(Local_1306.f_0, joaat("weapon_pistol"), 15, 0, 1);
				func_227(&uLocal_1126, 3, Local_1306.f_0, "JHP2A_Driver", 0, 1);
				func_226(&(Local_1084[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0x2137828D03306CAF(Local_1318.f_0) && unk_0x2137828D03306CAF(Local_1306.f_0))
		{
			func_225();
			func_226(&(Local_1084[1 /*8*/]), 0, 0, 1);
			func_223(&uLocal_99, joaat("boxville3"));
			func_223(&uLocal_99, joaat("s_m_m_armoured_01"));
			func_223(&uLocal_99, iLocal_85);
			func_223(&uLocal_99, iLocal_86);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_223(var uParam0, int iParam1)
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
					unk_0xFD213087BC4CC3B3(iParam1);
					func_224(uParam0[iVar0 /*5*/]);
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

void func_224(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_225()
{
	struct<3> Var0;
	
	if (unk_0x2137828D03306CAF(Local_1318.f_0))
	{
		if (!unk_0xA9A04898798AE9E6(Local_1318.f_0, 0) && !unk_0x2137828D03306CAF(iLocal_1329))
		{
			iLocal_1329 = unk_0xA3618B5F6184DAD2(iLocal_86, unk_0xD1EE0E9FCD74A37B(Local_1318.f_0, 1), 1, 1, 0);
			unk_0xF6DF83B893D86E6B(iLocal_1329, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0xF01E2CA1EE1972CA(iLocal_1329, Local_1318.f_0, -1, -1, unk_0xABF3BF12B0129BAF(Local_1318.f_0, unk_0x398D060E1D834545(Local_1318.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0x4C1FCB3943DAF647(iLocal_1329, 0, 0);
		}
		if (!unk_0x2137828D03306CAF(Local_1322[0 /*2*/]))
		{
			if (unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
			{
				Var0 = { unk_0x82D9CF397BA8C885(Local_1318.f_0, unk_0x399F81B56505EE6F(-2.5f, 2.5f), -5f, 0f) };
				unk_0xE423CA97BB7EA540(Var0, &(Var0.f_2), 0);
				Local_1322[0 /*2*/] = unk_0xA3618B5F6184DAD2(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1322[0 /*2*/] = unk_0xA3618B5F6184DAD2(iLocal_85, unk_0xD1EE0E9FCD74A37B(Local_1318.f_0, 1), 1, 1, 0);
				unk_0xF6DF83B893D86E6B(Local_1322[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x5DAB197A499B8499(Local_1322[0 /*2*/], Local_1318.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xE77EEA92586CF2E8(Local_1322[0 /*2*/], 1);
			}
		}
		if (!unk_0x2137828D03306CAF(Local_1322[1 /*2*/]))
		{
			if (unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
			{
				Var0 = { unk_0x82D9CF397BA8C885(Local_1318.f_0, unk_0x399F81B56505EE6F(-2.5f, 2.5f), -5f, 0f) };
				unk_0xE423CA97BB7EA540(Var0, &(Var0.f_2), 0);
				Local_1322[1 /*2*/] = unk_0xA3618B5F6184DAD2(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1322[1 /*2*/] = unk_0xA3618B5F6184DAD2(iLocal_85, unk_0xD1EE0E9FCD74A37B(Local_1318.f_0, 1), 1, 1, 0);
				unk_0xF6DF83B893D86E6B(Local_1322[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x5DAB197A499B8499(Local_1322[1 /*2*/], Local_1318.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xE77EEA92586CF2E8(Local_1322[1 /*2*/], 1);
			}
		}
		if (!unk_0x2137828D03306CAF(Local_1322[2 /*2*/]))
		{
			if (unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
			{
				Var0 = { unk_0x82D9CF397BA8C885(Local_1318.f_0, unk_0x399F81B56505EE6F(-2.5f, 2.5f), -5f, 0f) };
				unk_0xE423CA97BB7EA540(Var0, &(Var0.f_2), 0);
				Local_1322[2 /*2*/] = unk_0xA3618B5F6184DAD2(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1322[2 /*2*/] = unk_0xA3618B5F6184DAD2(iLocal_85, unk_0xD1EE0E9FCD74A37B(Local_1318.f_0, 1), 1, 1, 0);
				unk_0xF6DF83B893D86E6B(Local_1322[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x5DAB197A499B8499(Local_1322[2 /*2*/], Local_1318.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xE77EEA92586CF2E8(Local_1322[2 /*2*/], 1);
			}
		}
	}
}

int func_226(var uParam0, int iParam1, int iParam2, int iParam3)
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
		uParam0->f_4 = unk_0x3732B96D7A1859B4();
		uParam0->f_5 = unk_0x3732B96D7A1859B4();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_227(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_228(var uParam0, int iParam1)
{
	Global_91777.f_22[iParam1] = uParam0;
}

int func_229(var uParam0)
{
	if (func_237(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_230(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x35302CD5A5D37EED(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
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
		unk_0xBD7617BB733D8EC9(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x3732B96D7A1859B4();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_231(var uParam0, int iParam1)
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
		unk_0x0F39DF6675B2333E(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x3732B96D7A1859B4();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_232(var uParam0)
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

int func_233(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_234(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_114(uParam0->f_868.f_4, Param1, 0) && uParam0->f_868.f_10 == fParam4)
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
	unk_0x137CC7FF3E681664(Param1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0x3732B96D7A1859B4();
	uParam0->f_868.f_4 = { Param1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

int func_234(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_235(int iParam0, var uParam1, var uParam2)
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

bool func_236()
{
	return unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 13);
}

int func_237(var uParam0)
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
					if (unk_0xA1FC9D7AEA164881((uParam0[iVar1 /*5*/])->f_4))
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
						unk_0xFD213087BC4CC3B3((uParam0[iVar1 /*5*/])->f_4);
						func_224(uParam0[iVar1 /*5*/]);
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
					if (unk_0x45834D6C20FFF689(uParam0->f_273[iVar1 /*5*/].f_4))
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
						unk_0x15167ADA0B7D44AE(uParam0->f_273[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_273[iVar1 /*5*/]));
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
					if (unk_0xF6D41300D4DD067A(uParam0->f_374[iVar1 /*5*/].f_4))
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
						unk_0xD431C233427B1AA2(uParam0->f_374[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_374[iVar1 /*5*/]));
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
					if (unk_0xA8AF99BD8D81CFB7(uParam0->f_656[iVar1 /*6*/].f_5))
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
						unk_0x73F5E7B6BB964839(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_224(&(uParam0->f_656[iVar1 /*6*/]));
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
					if (unk_0x3FCFBAC760CAEC03(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
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
						unk_0x0090DF2486F4EBEE(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_224(&(uParam0->f_475[iVar1 /*6*/]));
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
					if (unk_0xF5626558F6369373(uParam0->f_202[iVar1 /*7*/].f_4))
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
						unk_0xF26C0582DD2D64F7(uParam0->f_202[iVar1 /*7*/].f_4);
						func_224(&(uParam0->f_202[iVar1 /*7*/]));
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
					if (unk_0x10DE48ACD981F75B(uParam0->f_151[iVar1 /*5*/].f_4))
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
						unk_0x73F65A305292A4D1(uParam0->f_151[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_151[iVar1 /*5*/]));
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
					if (unk_0x741298E7009A20C9(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
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
						unk_0xC7B777B06F98C301(uParam0->f_737[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_737[iVar1 /*5*/]));
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
					if (unk_0xACBF56DC1C78B822(uParam0->f_763[iVar1 /*5*/].f_4))
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
						unk_0x4BECDF7222654A56(uParam0->f_763[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_763[iVar1 /*5*/]));
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
			if (!unk_0x58478145CAF8429C(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x72FAA227203ECB43(uParam0->f_687[iVar1 /*7*/].f_5);
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
								func_224(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0x485250A0CB74FBB5(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0xACBF56DC1C78B822(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xD44AF0E12F93B10F(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x3732B96D7A1859B4();
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
							unk_0x485250A0CB74FBB5(uParam0->f_687[iVar1 /*7*/].f_5);
							func_224(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_224(&(uParam0->f_687[iVar1 /*7*/]));
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
					if (unk_0x39FAC9A40261135B(uParam0->f_879[iVar1 /*5*/].f_4))
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
						unk_0xFD6AB158A15D5B17(uParam0->f_879[iVar1 /*5*/].f_4);
						func_224(&(uParam0->f_879[iVar1 /*5*/]));
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
					if (unk_0xFB69A59EA23BAAD9(uParam0->f_930[iVar1 /*5*/].f_4))
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
						func_224(&(uParam0->f_930[iVar1 /*5*/]));
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
					if (unk_0x44FB58EFDA8731B7(iVar1))
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
						unk_0xEF7A86AB02E46379(iVar1, 1);
						func_224(&(uParam0->f_779[iVar1 /*5*/]));
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
				if (unk_0x1135D5BD86A70AD2())
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
					unk_0x2C495F7C13999480();
					func_224(&(uParam0->f_860));
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
				if (unk_0x28E49FA8CDF5DF71())
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
					unk_0x5606DDC5BFAC9DDB();
					func_224(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0xFD918707B1B07874())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0xAFCB22D9B08750BD())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 0);
						func_238(uParam0);
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
				unk_0x39E6BFF51A22111E();
				func_224(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0xB5ABADF6417115F2(uParam0->f_956[iVar1 /*5*/].f_4))
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
						func_224(&(uParam0->f_956[iVar1 /*5*/]));
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

void func_238(var uParam0)
{
	if (unk_0xFD918707B1B07874())
	{
		unk_0x39E6BFF51A22111E();
		func_224(&(uParam0->f_868));
	}
}

void func_239()
{
	if (bLocal_98 && (func_240() || unk_0xF4EE9D6C8E60AE22()))
	{
		func_8(1);
		unk_0xA232817B0B36F2E5();
	}
}

int func_240()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91777 == 7 || Global_91777 == 8)
	{
		return 1;
	}
	return 0;
}

void func_241()
{
	struct<3> Var0;
	var uVar3;
	
	func_248();
	unk_0xEE8231F61ED038B0("SECDRIVER", &iLocal_1305);
	unk_0x3A8EFBE4AB457FE2(1, iLocal_1305, joaat("COP"));
	unk_0x3A8EFBE4AB457FE2(1, iLocal_1305, -183807561);
	unk_0x3A8EFBE4AB457FE2(1, joaat("COP"), iLocal_1305);
	if (func_6(0) || func_196())
	{
		iLocal_97 = 0;
		if (func_196())
		{
			if (Global_86099)
			{
				iLocal_97++;
			}
		}
		StringCopy(&Global_88784, "jhp2a_alt", 64);
		if (func_196())
		{
			func_235(iLocal_97, &Var0, &uVar3);
			func_247(Var0, uVar3, 1, 0);
		}
		bLocal_96 = true;
	}
	else
	{
		while (!func_222(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_246(&uLocal_99);
		}
	}
	func_245(&uLocal_99, "JHP2A", 0);
	unk_0xFBC4596E19752537(0.1f);
	unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
	func_243(88);
	func_227(&uLocal_1126, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
	func_227(&uLocal_1126, 3, 0, "Lester", 0, 1);
	unk_0x02E663D7DDAE8202(joaat("boxville3"), 1);
	unk_0xF81FB2DEF90C0B69(joaat("s_m_m_armoured_01"), 1);
	if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"), 0))
	{
		unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("weapon_briefcase"));
	}
	func_242();
	if (unk_0x58478145CAF8429C(&Global_88784))
	{
	}
	iLocal_1330 = unk_0x25118499AB6F447B(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x44FB58EFDA8731B7(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_68272 = 1;
}

void func_242()
{
	Global_86100 = 1;
}

void func_243(int iParam0)
{
	Global_87777 = 0;
	switch (iParam0)
	{
		case 72:
			func_244(2);
			func_244(4);
			break;
		
		case 73:
			func_244(0);
			func_244(1);
			func_244(7);
			break;
		
		case 92:
			func_244(10);
			func_244(9);
			func_244(13);
			func_244(6);
			break;
		
		case 68:
			func_244(11);
			break;
		
		case 78:
			func_244(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_244(3);
			break;
		
		default:
			break;
	}
}

void func_244(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&Global_87777, iParam0);
}

int func_245(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x35302CD5A5D37EED(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
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
			unk_0x324D82949BFAAC9B(sParam1, iParam2);
		}
		else
		{
			unk_0xC9173FA08E7D8227(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x3732B96D7A1859B4();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_246(var uParam0)
{
	func_237(uParam0);
}

void func_247(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_196())
	{
		unk_0xAC09235E2065C253(0);
		unk_0x507FE690B1271947(&(Global_91777.f_20), 2);
		unk_0x8850034223654421(1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 0);
		}
		Global_91773 = { Param0 };
		Global_91776 = uParam3;
		Global_91772 = 1;
		if (iParam4 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 14);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_91777.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 24);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_91777.f_20), 24);
		}
		func_195(1);
	}
}

void func_248()
{
	func_256(&(Local_1084[0 /*8*/]), 69411, "Van Driver Manager");
	func_256(&(Local_1084[1 /*8*/]), 68058, "Cargo Manager");
}

void func_249(var uParam0)
{
	if (!func_123(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
		{
			func_254(Local_1322[0 /*2*/], 1);
			func_254(Local_1322[1 /*2*/], 1);
			func_254(Local_1322[2 /*2*/], 1);
			iLocal_1346 = 1;
			func_253(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_252(&uLocal_99, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0x741298E7009A20C9("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0, -1))
					{
						if ((unk_0x3732B96D7A1859B4() - iLocal_1336) > 150)
						{
							if (unk_0xE8594BE97055E9A1(iLocal_1329, unk_0x2A5EB8B0FE590B91(), 0))
							{
								if ((((unk_0xE781FF266FA8648E(iLocal_1329, joaat("weapon_molotov"), 0) || unk_0xE781FF266FA8648E(iLocal_1329, joaat("weapon_bzgas"), 0)) || unk_0xE781FF266FA8648E(iLocal_1329, joaat("weapon_knife"), 0)) || unk_0xE781FF266FA8648E(iLocal_1329, joaat("weapon_unarmed"), 0)) || unk_0xE781FF266FA8648E(iLocal_1329, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0x28511A1074EC8E16(iLocal_1329);
								}
								else
								{
									unk_0x869E3FDF7FDABA6A(iLocal_1329);
									iLocal_1336 = unk_0x3732B96D7A1859B4();
									iLocal_1335++;
									if (iLocal_1335 >= 3)
									{
										unk_0x853D8B40635017CB(-1, "Lock_Destroyed", iLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										unk_0x853D8B40635017CB(-1, "Lock_Damage", iLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							unk_0x869E3FDF7FDABA6A(iLocal_1329);
						}
					}
					if (((((iLocal_1335 >= 3 || unk_0xA9A04898798AE9E6(iLocal_1329, 0)) || unk_0x05B8AAC38D122B03(Local_1318.f_0, 2)) || unk_0x05B8AAC38D122B03(Local_1318.f_0, 3)) || unk_0xB2C6EB7B345D25EC(Local_1318.f_0, 2) > 0f) || unk_0xB2C6EB7B345D25EC(Local_1318.f_0, 3) > 0f)
					{
						if (unk_0x2137828D03306CAF(iLocal_1329))
						{
							unk_0xBE35B7268C680A20(&iLocal_1329);
						}
						if (!unk_0x05B8AAC38D122B03(Local_1318.f_0, 2))
						{
							unk_0xE90B4C21E7E6817C(Local_1318.f_0, 2, 0, 0);
						}
						if (!unk_0x05B8AAC38D122B03(Local_1318.f_0, 3))
						{
							unk_0xE90B4C21E7E6817C(Local_1318.f_0, 3, 0, 0);
						}
						iLocal_1347 = 0;
						iLocal_1348 = 0;
						func_254(Local_1322[0 /*2*/], 0);
						func_254(Local_1322[1 /*2*/], 0);
						func_254(Local_1322[2 /*2*/], 0);
						func_251(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_250(Local_1318.f_0))
					{
						if (unk_0x3FEF699D13BCC798(unk_0xB2C6EB7B345D25EC(Local_1318.f_0, 2)) > 0.5f && unk_0x3FEF699D13BCC798(unk_0xB2C6EB7B345D25EC(Local_1318.f_0, 3)) > 0.5f)
						{
							func_251(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_250(Local_1318.f_0))
					{
						if (!unk_0x05B8AAC38D122B03(Local_1318.f_0, 2))
						{
							if (unk_0xBDABA203E908C8D5(Local_1318.f_0, 2))
							{
								unk_0xE90B4C21E7E6817C(Local_1318.f_0, 2, 1, 0);
								unk_0x81411F23CB74DE8D(Local_1318.f_0, 2, 0, 0, 1);
								iLocal_1347 = 1;
							}
						}
						else
						{
							iLocal_1347 = 1;
						}
						if (!unk_0x05B8AAC38D122B03(Local_1318.f_0, 3))
						{
							if (unk_0xBDABA203E908C8D5(Local_1318.f_0, 3))
							{
								unk_0xE90B4C21E7E6817C(Local_1318.f_0, 3, 1, 0);
								unk_0x81411F23CB74DE8D(Local_1318.f_0, 3, 0, 0, 1);
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
							func_251(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_123(uParam0))
	{
	}
}

int func_250(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_251(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x3732B96D7A1859B4();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_252(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x35302CD5A5D37EED(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
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
		unk_0x741298E7009A20C9(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x3732B96D7A1859B4();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_253(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x3732B96D7A1859B4();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_254(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0xED01C551E3A161C0(iParam0))
		{
			unk_0xA806066ECDF61E23(iParam0, 1, bParam1);
			unk_0x81642E3BC0111BF2(iParam0, 1, 0);
			unk_0x435850511E04A8D1(iParam0);
		}
		if (bParam1)
		{
			Var0 = { func_255(unk_0xD1EE0E9FCD74A37B(iParam0, 1) - unk_0x82D9CF397BA8C885(Local_1318.f_0, unk_0x399F81B56505EE6F(-0.15f, 0.15f), IntToFloat(-unk_0x895FB9FE885E36ED(3, 6)), unk_0x399F81B56505EE6F(-0.1f, 0.1f))) };
			unk_0x734B5BA06E0DF284(iParam0, 1, Var0 * FtoV(unk_0x399F81B56505EE6F(0.25f, 0.5f)), 0, 1, 1, 0);
			unk_0x734B5BA06E0DF284(iParam0, 5, IntToFloat(unk_0x895FB9FE885E36ED(0, 10)), IntToFloat(unk_0x895FB9FE885E36ED(0, 10)), IntToFloat(unk_0x895FB9FE885E36ED(0, 10)), 0, 1, 1, 0);
			unk_0x8FFCA03B16F9F5EB(iParam0, Local_1318.f_0, 1);
		}
	}
}

Vector3 func_255(struct<3> Param0)
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

int func_256(var uParam0, int iParam1, char* sParam2)
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

void func_257(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	
	if (!func_123(uParam0))
	{
		if (((!unk_0x2137828D03306CAF(Local_1306.f_0) || unk_0x769F0F6444C1ABE0(Local_1306.f_0)) || (unk_0x2137828D03306CAF(Local_1318.f_0) && func_188(Local_1318.f_0, Local_1306.f_0, 1) > 200f)) || (!unk_0xC4A39E4229BD3ABE(Local_1306.f_0, 0) && func_188(Local_1318.f_0, Local_1306.f_0, 1) > 200f))
		{
			if (unk_0x2137828D03306CAF(Local_1318.f_0) && unk_0x7FAC45D56235AB39(Local_1318.f_0, 0))
			{
				unk_0xCFE4626F633D6C6A(Local_1318.f_0, 0);
			}
			unk_0x6C559FCFFD2365CB(&Local_1306);
			func_253(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0x2137828D03306CAF(Local_1318.f_0) || !unk_0x7FAC45D56235AB39(Local_1318.f_0, 0)) || !unk_0x5B9B499C707C2A95(Local_1306.f_0, Local_1318.f_0, 0)))
			{
				iLocal_1337 = 0;
				iLocal_1338 = 0;
				StringCopy(&cLocal_1339, "", 24);
				func_251(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					if (unk_0xB588E9EC60290D87(iVar0, Local_1318.f_0))
					{
						if ((!iLocal_1332 && (unk_0x3732B96D7A1859B4() - iLocal_1334) > 500) && fLocal_1333 >= 4f)
						{
							iLocal_1332 = 1;
							iLocal_1331++;
						}
					}
					else if (iLocal_1332)
					{
						iLocal_1334 = unk_0x3732B96D7A1859B4();
						iLocal_1332 = 0;
					}
					Var1 = { func_255(unk_0xD1EE0E9FCD74A37B(iVar0, 1) - unk_0xD1EE0E9FCD74A37B(Local_1318.f_0, 1)) };
					Var4 = { unk_0x759F285D4B31C388(Local_1318.f_0) - unk_0x759F285D4B31C388(iVar0) };
					fLocal_1333 = func_261(Var4, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0xE8594BE97055E9A1(Local_1318.f_0, unk_0x2A5EB8B0FE590B91(), 1) || unk_0xE8594BE97055E9A1(Local_1306.f_0, unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 122)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 123)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 124)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 29)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 116)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 121)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 22)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 24)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 46)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 61)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 61)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 136)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 86)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 87)) || unk_0xB833DDD4C8B30212(Local_1306.f_0)) || unk_0xFB4BF464D20ED824(Local_1318.f_0)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_251(uParam0, 4, 0);
					}
					else
					{
						if (unk_0x2137828D03306CAF(Local_1318.f_0) && unk_0x7FAC45D56235AB39(Local_1318.f_0, 0))
						{
							if ((unk_0xDFE6DCAAD8FD78A5(unk_0x2A5EB8B0FE590B91()) || fLocal_1333 > 0.5f) && unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(Local_1318.f_0, 0f, 2f, -0.5f), unk_0x82D9CF397BA8C885(Local_1318.f_0, 0f, 10f, 2f), 4.5f, 0, 1, 0))
							{
								if (!unk_0xB461EF8364113FFC(Local_1318.f_0))
								{
									if (iLocal_1350 == -1)
									{
										iLocal_1350 = unk_0x3732B96D7A1859B4();
									}
									else if ((unk_0x3732B96D7A1859B4() - iLocal_1350) > 5000)
									{
										unk_0x78754059832F6DB6(Local_1318.f_0, 2000, joaat("normal"), 0);
									}
								}
								else
								{
									iLocal_1350 = -1;
								}
							}
						}
						if (func_260(Local_1318.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_230(&uLocal_99, "jhp2a_airport");
						}
						if (!func_259(Local_1306.f_0, -235832601, 1))
						{
							if (unk_0x9A46207BB68ED2F0(Local_1318.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0))
							{
								if (unk_0xF6D41300D4DD067A("jhp2a_airport"))
								{
									iLocal_1337 = 0;
									iLocal_1338 = 0;
									StringCopy(&cLocal_1339, "", 24);
									func_251(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0x82889D87596D2C20(Local_1306.f_0, Local_1318.f_0, &Global_88784, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0xE8594BE97055E9A1(Local_1318.f_0, unk_0x2A5EB8B0FE590B91(), 1) || unk_0xE8594BE97055E9A1(Local_1306.f_0, unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 122)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 123)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 124)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 29)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 116)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 121)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 22)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 24)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 46)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 61)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 61)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 136)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 86)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 87)) || unk_0xB833DDD4C8B30212(Local_1306.f_0)) || unk_0xFB4BF464D20ED824(Local_1318.f_0)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_251(uParam0, 5, 0);
					}
					else if (!func_259(Local_1306.f_0, -235832601, 1))
					{
						if (unk_0x9A46207BB68ED2F0(Local_1318.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0))
						{
							iLocal_1337 = 0;
							iLocal_1338 = 0;
							StringCopy(&cLocal_1339, "", 24);
							func_251(uParam0, 3, 0);
						}
						else
						{
							unk_0x82889D87596D2C20(Local_1306.f_0, Local_1318.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0xE8594BE97055E9A1(Local_1318.f_0, unk_0x2A5EB8B0FE590B91(), 1) || unk_0xE8594BE97055E9A1(Local_1306.f_0, unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 122)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 123)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 124)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 29)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 116)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 121)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 22)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 24)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 46)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 61)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 61)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 136)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 86)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 87)) || unk_0xB833DDD4C8B30212(Local_1306.f_0)) || unk_0xFB4BF464D20ED824(Local_1318.f_0)) || unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_1318.f_0, 1)) || iLocal_1331 > 0)
					{
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_251(uParam0, 5, 0);
					}
					else if (unk_0x5B9B499C707C2A95(Local_1306.f_0, Local_1318.f_0, 1))
					{
						if (!func_259(Local_1306.f_0, 451360105, 1))
						{
							unk_0x153CD660E835E570(Local_1306.f_0, Local_1318.f_0, 0);
						}
					}
					else
					{
						unk_0xD1A53D507962BF1F(Local_1318.f_0, 2);
						if (!func_259(Local_1306.f_0, 242628503, 1))
						{
							unk_0x219EE6A7B599E7DC(&uLocal_1304);
							unk_0x28FB7E63A217D6DE(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0xBD718C5BA2122192(uLocal_1304);
							unk_0x234E551BB8E8813B(Local_1306.f_0, uLocal_1304);
							unk_0xEDD36C58DDE03C8F(&uLocal_1304);
						}
					}
					break;
				
				case 4:
					if (unk_0xD8BFF899C7596F35(Local_1318.f_0, 0, 1))
					{
						iVar7++;
					}
					if (unk_0xD8BFF899C7596F35(Local_1318.f_0, 1, 1))
					{
						iVar7++;
					}
					if (unk_0xD8BFF899C7596F35(Local_1318.f_0, 4, 1))
					{
						iVar7++;
					}
					if (unk_0xD8BFF899C7596F35(Local_1318.f_0, 5, 1))
					{
						iVar7++;
					}
					if (((((IntToFloat(unk_0xE86A53C202B21FAB(Local_1318.f_0)) <= 0f || unk_0xB01B1648698791BB(Local_1318.f_0) <= 250f) || unk_0x67ED3C44A2B3E8F2(Local_1318.f_0) <= 400f) || unk_0x769F0F6444C1ABE0(Local_1306.f_0)) || iVar7 >= 2) || iLocal_1331 > 6)
					{
						if (unk_0x2137828D03306CAF(Local_1318.f_0) && unk_0x7FAC45D56235AB39(Local_1318.f_0, 0))
						{
							unk_0xCFE4626F633D6C6A(Local_1318.f_0, 0);
						}
						iLocal_1337 = 0;
						iLocal_1338 = 0;
						StringCopy(&cLocal_1339, "", 24);
						func_251(uParam0, 5, 0);
					}
					else if (!func_259(Local_1306.f_0, -1273030092, 1))
					{
						unk_0x8C6A1F8B258BDF97(Local_1306.f_0, Local_1318.f_0, unk_0x2A5EB8B0FE590B91(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0x2137828D03306CAF(Local_1318.f_0) && !unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
					{
						if (unk_0x5B9B499C707C2A95(Local_1306.f_0, Local_1318.f_0, 0))
						{
							if (!func_80(Local_1318.f_0))
							{
								if (!func_259(Local_1306.f_0, -2118855366, 1))
								{
									unk_0x654FFF4D16298AC5(Local_1306.f_0);
									unk_0xA05ED0EFFC6C6A11(Local_1306.f_0, Local_1318.f_0, 5, -1);
								}
							}
							else if (!func_259(Local_1306.f_0, 451360105, 1))
							{
								unk_0x153CD660E835E570(Local_1306.f_0, Local_1318.f_0, 256);
							}
						}
						else if (!func_259(Local_1306.f_0, 780511057, 1))
						{
							unk_0x2725C3746060DA66(Local_1306.f_0, 1);
							unk_0xDD0413EAB0ADDE6A(Local_1306.f_0, unk_0x2A5EB8B0FE590B91(), 0, 16);
						}
					}
					if (unk_0x2137828D03306CAF(Local_1318.f_0) && !unk_0xA9A04898798AE9E6(Local_1318.f_0, 0))
					{
						unk_0x15872CD5DF7D67EF(Local_1318.f_0, 2, 1);
						unk_0x15872CD5DF7D67EF(Local_1318.f_0, 3, 1);
					}
					break;
				}
		}
		if ((unk_0x2137828D03306CAF(Local_1306.f_0) && !unk_0x769F0F6444C1ABE0(Local_1306.f_0)) && !unk_0xE2B119BA0F90C02A(Local_1306.f_0))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1337)
					{
						case 0:
							if (func_35() && !unk_0x7C8D4D8A617D31D0(Local_1306.f_0))
							{
								if (unk_0xB833DDD4C8B30212(Local_1306.f_0))
								{
									func_55(Local_1306.f_0, "JACKED_GENERIC", 10);
								}
								else
								{
									func_55(Local_1306.f_0, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1337++;
							}
							break;
						
						case 1:
							if (!unk_0x5B9B499C707C2A95(Local_1306.f_0, Local_1318.f_0, 0) || iLocal_1303 == 3)
							{
								if (!unk_0x5B9B499C707C2A95(Local_1306.f_0, Local_1318.f_0, 0))
								{
									iLocal_1337 = 4;
								}
								else
								{
									iLocal_1337++;
								}
							}
							else if (func_35() && !unk_0x7C8D4D8A617D31D0(Local_1306.f_0))
							{
								if (func_258(&uLocal_1126, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1337++;
								}
							}
							break;
						
						case 2:
							if (func_35() && !unk_0x7C8D4D8A617D31D0(Local_1306.f_0))
							{
								if (unk_0x58478145CAF8429C(&cLocal_1339))
								{
									fVar8 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(Local_1306.f_0, 1));
									if ((((((iLocal_1332 || unk_0x002C96066F2BBA2F(Local_1306.f_0, 122)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 123)) || unk_0x002C96066F2BBA2F(Local_1306.f_0, 124)) || fVar8 < 49f) && (unk_0x3732B96D7A1859B4() - iLocal_1338) > 5000) && fVar8 < 225f)
									{
										if (unk_0x895FB9FE885E36ED(0, 2) == 0)
										{
											StringCopy(&cLocal_1339, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1339, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0x58478145CAF8429C(&cLocal_1339))
								{
									if (unk_0x35302CD5A5D37EED(&cLocal_1339, "GENERIC_CURSE_HIGH"))
									{
										func_55(Local_1306.f_0, "GENERIC_CURSE_HIGH", 10);
										iLocal_1337++;
									}
									else
									{
										if (func_258(&uLocal_1126, &cLocal_79, &cLocal_1339, 8, 0, 0, 0))
										{
											iLocal_1337++;
										}
										iLocal_1337++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_36() && !unk_0x7C8D4D8A617D31D0(Local_1306.f_0))
							{
								iLocal_1338 = unk_0x3732B96D7A1859B4();
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
							if (func_35() && !unk_0x7C8D4D8A617D31D0(Local_1306.f_0))
							{
								if (unk_0x58478145CAF8429C(&cLocal_1339))
								{
									if ((unk_0x3732B96D7A1859B4() - iLocal_1338) > 5000 && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(Local_1306.f_0, 1)) < 400f)
									{
										if (unk_0x895FB9FE885E36ED(0, 2) == 0)
										{
											StringCopy(&cLocal_1339, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1339, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0x58478145CAF8429C(&cLocal_1339))
								{
									if (unk_0x35302CD5A5D37EED(&cLocal_1339, "GENERIC_INSULT_HIGH"))
									{
										func_55(Local_1306.f_0, "GENERIC_INSULT_HIGH", 10);
										iLocal_1337++;
									}
									else if (func_258(&uLocal_1126, &cLocal_79, &cLocal_1339, 8, 0, 0, 0))
									{
										iLocal_1337++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_36() && !unk_0x7C8D4D8A617D31D0(Local_1306.f_0))
							{
								iLocal_1338 = unk_0x3732B96D7A1859B4();
								StringCopy(&cLocal_1339, "", 24);
								iLocal_1337 = (iLocal_1337 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_123(uParam0))
	{
	}
}

bool func_258(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_259(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xE897E371352225D5(iParam0, iParam1);
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

float func_260(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

float func_261(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_262(int iParam0)
{
	struct<2> Var0;
	char[] cVar4[8];
	
	unk_0x988197573BDAD49A("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_274();
		func_8(0);
		unk_0xA232817B0B36F2E5();
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
		if (unk_0x58478145CAF8429C(&cVar4))
		{
			func_272(&Var0);
		}
		else
		{
			func_263(&Var0, &cVar4);
		}
		bLocal_98 = true;
	}
}

void func_263(char* sParam0, char* sParam1)
{
	func_271(sParam0, sParam1);
	func_264(0);
}

void func_264(int iParam0)
{
	int iVar0;
	
	if (Global_103236.f_8866 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_265(iVar0))
		{
			return;
		}
		unk_0xF6082E2ADA1C795B(&(Global_82674[iVar0 /*5*/].f_1), 5);
		Global_91813 = iParam0;
	}
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_270();
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		unk_0x99DD6F20B8E5BA3F(5000);
	}
	iVar0 = Global_82674[iParam0 /*5*/];
	iVar1 = Global_70069.f_109[iVar0 /*4*/];
	func_269(iVar1, 1);
	unk_0x51266B592682B8E6(unk_0x0FFED3E94261A832());
	unk_0xC72CE1AF85253467(unk_0x0FFED3E94261A832());
	func_266(&(Global_103236.f_2164.f_539), iVar1);
	if (Global_86097 == Global_91814)
	{
		Global_103236.f_8866.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_82710[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x4B41BFF3249EA7CC(0);
		}
	}
	Global_103236.f_8866.f_330[iVar1 /*6*/].f_2++;
	Global_86097 = Global_91814;
	if (iParam0 == -1)
	{
		if (Global_103236.f_8866)
		{
		}
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_82674[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_82674[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_266(var uParam0, int iParam1)
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
		iVar1 = Global_103236.f_18314[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xAA4F14DA15DB0B51(Global_103236.f_8866.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_268(Global_103236.f_18314[iVar0], &Var2, &fVar5))
			{
				Global_103236.f_18314[iVar0] = 318;
				func_267(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_89312[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89312[iVar0 /*29*/].f_9 = 0f;
				Global_89312[iVar0 /*29*/].f_12 = 0f;
				Global_89312[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89312[iVar0 /*29*/].f_10 = 0f;
				Global_89312[iVar0 /*29*/].f_13 = 0f;
				Global_89312[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89312[iVar0 /*29*/].f_11 = 0f;
				Global_89312[iVar0 /*29*/].f_14 = 0f;
				Global_89312[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89312[iVar0 /*29*/].f_26 = 0f;
				Global_89312[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89312[iVar0 /*29*/].f_27 = 0f;
				Global_89312[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89312[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_267(var uParam0)
{
	*uParam0 = -15;
}

int func_268(int iParam0, var uParam1, float fParam2)
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
			return func_268(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_268(8, uParam1, fParam2);
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

void func_269(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85907[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85907[iParam0 /*2*/] = 0;
	}
}

void func_270()
{
	Global_91812 = 1;
	if (unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1))
	{
		if (unk_0x58478145CAF8429C(&Global_70032))
		{
			switch (func_178())
			{
				case 0:
					StringCopy(&Global_70032, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_70032, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_70032, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_70036, "", 16);
		}
		Global_91812 = 0;
	}
	else if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x58478145CAF8429C(&Global_70032))
		{
			switch (func_178())
			{
				case 0:
					StringCopy(&Global_70032, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_70032, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_70032, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_70036, "", 16);
		}
		Global_91812 = 0;
		unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 25);
	}
}

void func_271(char* sParam0, char* sParam1)
{
	if (!unk_0x58478145CAF8429C(sParam0))
	{
		if (unk_0x49828C486339D60D(sParam0) <= 16)
		{
			if (unk_0x49828C486339D60D(sParam1) <= 16)
			{
				StringCopy(&Global_70032, sParam0, 16);
				StringCopy(&Global_70036, sParam1, 16);
			}
		}
	}
}

void func_272(char* sParam0)
{
	func_273(sParam0);
	func_264(0);
}

void func_273(char* sParam0)
{
	if (!unk_0x58478145CAF8429C(sParam0))
	{
		if (unk_0x49828C486339D60D(sParam0) <= 16)
		{
			StringCopy(&Global_70032, sParam0, 16);
			StringCopy(&Global_70036, "", 16);
			if (unk_0x211BAFB9C9DDEA2C())
			{
				unk_0xF7F18D1F3D2475E2();
			}
		}
	}
}

void func_274()
{
	int iVar0;
	
	if (unk_0x7AE6E004B57B6658("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1624);
	}
	if (Global_103236.f_8866 || func_6(0))
	{
		if (!func_275())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_265(iVar0))
				{
					return;
				}
				unk_0xF6082E2ADA1C795B(&(Global_82674[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_270();
		}
	}
}

int func_275()
{
	if (((Global_91777 == 13 || Global_91777 == 10) || Global_91777 == 11) || Global_91777 == 12)
	{
		return 0;
	}
	return 1;
}

