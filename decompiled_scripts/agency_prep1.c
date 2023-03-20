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
	var uLocal_37 = 8;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 2;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 8;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 8;
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
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	struct<110> Local_79 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_241 = 3;
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
	var uLocal_338 = 16;
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
	var uLocal_503 = 16;
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
	var uLocal_669 = 3;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 1092616192;
	var uLocal_676 = 1101004800;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 3;
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
	var uLocal_733 = 5;
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
	var uLocal_750 = 5;
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
	var uLocal_810 = 3;
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
	var uLocal_829 = 13;
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
	var uLocal_858 = 4;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 4;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 4;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 4;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 4;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 4;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 4;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 8;
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
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_950 = 0;
	var uLocal_951 = 16;
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
	var uLocal_1029 = 0;
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
	var uLocal_1055 = 0;
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
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
	struct<3> Local_1118 = { 0, 0, 0 } ;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	int iLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	int iLocal_1128 = 0;
	bool bLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	struct<3> Local_1133 = { 0, 0, 0 } ;
	struct<3> Local_1136 = { 0, 0, 0 } ;
	struct<2> Local_1139 = { 0, 0 } ;
	var uLocal_1141 = 0;
	struct<2> Local_1142 = { 0, 0 } ;
	var uLocal_1144 = 0;
	int iLocal_1145 = 0;
	char[] cLocal_1146[8] = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	char[] cLocal_1150[8] = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	bool bLocal_1154 = 0;
	int iLocal_1155 = 0;
	char cLocal_1156[48] = "";
	int iLocal_1162 = 0;
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	var uLocal_1165 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_70 = 1;
	iLocal_71 = 65;
	iLocal_72 = 49;
	iLocal_73 = 64;
	iLocal_78 = joaat("p_amb_phone_01");
	Local_1118 = { 693.1158f, -1012.418f, 21.72802f };
	Local_1133 = { 692.8695f, -998.7867f, 22.3201f };
	Local_1136 = { 693.3784f, -1025.671f, 21.506f };
	if (unk_0x9CEB376419A71A96(3))
	{
		func_102();
		func_100();
		func_98();
	}
	func_90();
	unk_0xECB8ED754419899D(1);
	while (true)
	{
		unk_0xDEC471C6A5373AC4("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_1123)
		{
			if (!unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Local_1118, 200f, 200f, 200f, 0, 1, 0) && !unk_0x7515D29C901C4E76(Local_1118, 50f))
			{
				unk_0x79D9EC458879E8B8(Local_1118, 50f, 1, 0, 0, 0);
				iLocal_1123 = 1;
			}
		}
		else if (!unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Local_1118, 200f, 200f, 200f, 0, 1, 0))
		{
			iLocal_1123 = 0;
		}
		if (!iLocal_1128)
		{
			if (Global_88140.f_358 == unk_0x9F7CDE7B20BCB675("AHP1_TRUCKCALLED") || Global_88070)
			{
				func_89(543);
				Global_88140.f_358 = 0;
				iLocal_1128 = 1;
			}
		}
		func_88();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((unk_0xC1EDB61CE0A4B94E(iLocal_941[iVar0]) && !unk_0xCFC04A38F256EE06(iLocal_941[iVar0])) && unk_0xC1EDB61CE0A4B94E(iLocal_939))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(iLocal_941[iVar0], 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) > 2500f)
				{
					unk_0x97C5D2BB8E47131D(iLocal_941[iVar0], 1);
					unk_0xFEDD46326A41DB46(iLocal_941[iVar0], unk_0x06736567F820A39E(), 300f, 20000, 1, 0);
					unk_0x5318F6C4C2B82FA7(&(iLocal_941[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1164 < 8 && iLocal_1116 >= 0)
		{
			func_86();
		}
		switch (iLocal_1116)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_941)
				{
					if (unk_0xC1EDB61CE0A4B94E(iLocal_941[iVar1]))
					{
						if (unk_0xC1EDB61CE0A4B94E(unk_0xE8F1FE9FB29EB9CC(unk_0x06736567F820A39E())))
						{
							iVar2 = unk_0xE8F1FE9FB29EB9CC(unk_0x06736567F820A39E());
							if ((unk_0x1B6292EA51632C25(iVar2, 0) && unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iVar2, 1)) < 30f) && unk_0xD94C5D56986DC6E2(iVar2, joaat("firetruk")))
							{
								unk_0x054CBFE90FAA6840(5, joaat("player"), iLocal_950);
								unk_0x054CBFE90FAA6840(5, iLocal_950, joaat("player"));
								unk_0x2A8F1A0BA3FCCC09(unk_0xE0BDAFA1A39552D6(), 1, 0);
								unk_0x6821306347C4E0F6(unk_0xE0BDAFA1A39552D6(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_85())
				{
					unk_0x0423ACD571C3E768(15f, 15f, 4);
					unk_0x25B97FB8615971D6("AHP1_START");
					iLocal_1116++;
				}
				break;
			
			case 0:
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_939))
				{
					func_85();
					if ((unk_0xC1EDB61CE0A4B94E(unk_0xF222904387CE4946()) && unk_0x1B6292EA51632C25(unk_0xF222904387CE4946(), 0)) && unk_0x79469DA5833EACA8(unk_0xF222904387CE4946()) == joaat("firetruk"))
					{
						iLocal_939 = unk_0xF222904387CE4946();
						unk_0xB7E6C6AE18F1EDA6(iLocal_939, 1, 1);
					}
				}
				else
				{
					func_43();
					if (!iLocal_1124 && unk_0x1B6292EA51632C25(iLocal_939, 0))
					{
						func_42(iLocal_939, -1);
						func_41(iLocal_939, -1);
						func_40(541, 0);
						iLocal_1124 = 1;
					}
					if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_1118) < unk_0xE3621CC40F31FE2E(100f, 2f))
					{
						unk_0xC5822DB7BC89704E(1);
					}
					func_85();
					if (bLocal_1129)
					{
						if (unk_0x1B6292EA51632C25(iLocal_939, 0) && unk_0x1B6292EA51632C25(iLocal_940, 0))
						{
							func_34(iLocal_940);
							if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), iLocal_940) && unk_0x8853522CEFF93BE9(iLocal_939, Local_1118, Global_19, 1, 1, 0))
							{
								if (unk_0xCDB4C4200A9B478A(uLocal_937))
								{
									unk_0x2239ED27B231AE2E(&uLocal_937);
								}
								unk_0x0423ACD571C3E768(5f, 15f, 4);
								iLocal_1116++;
							}
						}
					}
					else if (unk_0x1B6292EA51632C25(iLocal_939, 0))
					{
						func_34(iLocal_939);
						if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), iLocal_939) && unk_0x8853522CEFF93BE9(iLocal_939, Local_1118, Global_19, 1, 1, 0))
						{
							if (unk_0xCDB4C4200A9B478A(uLocal_937))
							{
								unk_0x2239ED27B231AE2E(&uLocal_937);
							}
							unk_0x0423ACD571C3E768(5f, 15f, 4);
							iLocal_1116++;
						}
					}
				}
				if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
				{
					unk_0x0423ACD571C3E768(5f, 10f, 4);
					iLocal_1116 = 100;
				}
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_939))
				{
					func_13("AHP_LOSTTRUCK");
				}
				else if (unk_0x1B6292EA51632C25(iLocal_939, 0))
				{
					if ((unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_939, 1)) > 22500f && unk_0x8831C606DC492098(iLocal_939)) || unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_939, 1)) > 90000f)
					{
						func_13("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_13("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (unk_0x1B6292EA51632C25(iLocal_939, 0))
				{
					if (func_12(iLocal_939, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_1127)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_1127 = 1;
						}
						unk_0x25B97FB8615971D6("AHP1_STOP");
						unk_0x0423ACD571C3E768(10f, 10f, 4);
						iLocal_1116++;
					}
				}
				break;
			
			case 2:
				if (unk_0x1B6292EA51632C25(iLocal_939, 0))
				{
					if (!unk_0x8853522CEFF93BE9(iLocal_939, Local_1118, Global_19 + Vector(2f, 2f, 2f), 1, 1, 0))
					{
						iLocal_1116 = 0;
					}
					else if (bLocal_1129)
					{
						if (unk_0xC1EDB61CE0A4B94E(iLocal_940))
						{
							if (!unk_0x046CEB8397234DA8(iLocal_940, iLocal_939))
							{
								unk_0x02AA51E28DECDB1B(iLocal_939, 0, 0);
								if (unk_0x2CBCDAFEE036FFA7(iLocal_939))
								{
									unk_0x2CE5420763546B4E(iLocal_939, 0);
								}
								unk_0x818E8D7BA45E01E7(iLocal_939, 2);
								unk_0x1AEFC2FB20822515();
								unk_0xC1B1E9A034A63A62(0);
								iLocal_1116++;
							}
							else
							{
								unk_0x4A37827373E82EDA(iLocal_940, iLocal_939);
							}
						}
					}
					else if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_939, 0))
					{
						if (unk_0x2CBCDAFEE036FFA7(iLocal_939))
						{
							unk_0x2CE5420763546B4E(iLocal_939, 0);
						}
						unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
						unk_0x818E8D7BA45E01E7(iLocal_939, 2);
						unk_0x1AEFC2FB20822515();
						unk_0xC1B1E9A034A63A62(0);
						iLocal_1116++;
					}
				}
				break;
			
			case 3:
				if (unk_0x1B6292EA51632C25(iLocal_939, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 3000)
					{
						unk_0x0423ACD571C3E768(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (unk_0xCDB4C4200A9B478A(uLocal_937))
				{
					unk_0x2239ED27B231AE2E(&uLocal_937);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_1116++;
				break;
			
			case 101:
				func_85();
				if (bLocal_1129)
				{
					func_34(iLocal_940);
				}
				else
				{
					func_34(iLocal_939);
				}
				if (!iLocal_1130)
				{
					if ((unk_0x1B6292EA51632C25(iLocal_939, 0) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_939, 0)) || (unk_0x1B6292EA51632C25(iLocal_940, 0) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_940, 0)))
					{
						if ((unk_0xA1A9C846A0BED5B2(unk_0x06736567F820A39E(), "DAVIS") && unk_0x137B8B7A1CAD742A(unk_0x06736567F820A39E()) > 5f) && unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
						{
							if (func_3())
							{
								unk_0xA83C44759382F7CE("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								unk_0xA83C44759382F7CE("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_1130 = 1;
						}
					}
				}
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_939))
				{
					func_13("AHP_LOSTTRUCK");
				}
				else if (unk_0x1B6292EA51632C25(iLocal_939, 0))
				{
					if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
					{
						unk_0x1AEFC2FB20822515();
						iLocal_1116 = 0;
					}
					else if (unk_0x954A6C5EBD942B9E(unk_0x06736567F820A39E(), iLocal_939))
					{
						if (!iLocal_1126)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_1126 = 1;
							iLocal_1117 = unk_0x1ADBAAC322D61F73();
						}
					}
					else if ((iLocal_1126 && (unk_0x1ADBAAC322D61F73() - iLocal_1117) < 7500) && unk_0x74832C64B3ECD28D())
					{
						unk_0x1AEFC2FB20822515();
					}
					if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_939, 1)) > 22500f)
					{
						func_13("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_13("AHP_DEADTRUCK");
				}
				break;
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_939))
		{
			if (!func_2(iLocal_939))
			{
				func_1(iLocal_939, 0);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	Global_91310.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91310.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_3()
{
	if (unk_0x7DA173D4FD42F36B(unk_0xA6055C735E3DD877(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101186.f_7851.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101186.f_7851.f_99.f_58[iParam0] = iParam1;
}

int func_5(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101186.f_7851.f_99.f_58[iParam0];
}

void func_6()
{
	unk_0xFA6584EFD4754E3A(0, 0);
	func_7(0, 0);
	func_98();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55782)
	{
		Global_55782 = iParam1;
	}
	if (bParam0)
	{
		if ((func_10(0) && Global_69767.f_1 == 1) && func_9(Global_69767))
		{
		}
		else
		{
			Global_55780 = 1;
		}
	}
	if (Global_101186.f_7851 || func_10(0))
	{
		iVar0 = func_8();
		iVar1 = Global_82395[iVar0 /*5*/];
		uVar2 = Global_69790.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101186.f_7851)
			{
			}
			return;
		}
		if (unk_0x7DA173D4FD42F36B(Global_82395[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x7DA173D4FD42F36B(Global_82395[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xE27C8E42A97895CF(&(Global_82395[iVar0 /*5*/].f_1), 4);
		unk_0xE27C8E42A97895CF(&Global_69769, 1);
		Global_69785 = uVar2;
		Global_69786 = unk_0x1ADBAAC322D61F73();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x7DA173D4FD42F36B(Global_82395[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
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

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x366FF5AC028F8A66(sParam0);
	unk_0x1C785DE53446A241(iParam1, 1);
}

int func_12(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC80D2B3478FFF428(0, 71, 1);
	unk_0xC80D2B3478FFF428(0, 72, 1);
	unk_0xC80D2B3478FFF428(0, 76, 1);
	unk_0xC80D2B3478FFF428(0, 73, 1);
	unk_0xC80D2B3478FFF428(0, 59, 1);
	unk_0xC80D2B3478FFF428(0, 60, 1);
	if (bParam5)
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
	unk_0xC80D2B3478FFF428(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC80D2B3478FFF428(0, 69, 1);
		unk_0xC80D2B3478FFF428(0, 70, 1);
		unk_0xC80D2B3478FFF428(0, 68, 1);
	}
	unk_0xC80D2B3478FFF428(0, 74, 1);
	unk_0xC80D2B3478FFF428(0, 86, 1);
	unk_0xC80D2B3478FFF428(0, 81, 1);
	unk_0xC80D2B3478FFF428(0, 82, 1);
	unk_0xC80D2B3478FFF428(0, 138, 1);
	unk_0xC80D2B3478FFF428(0, 136, 1);
	unk_0xC80D2B3478FFF428(0, 114, 1);
	unk_0xC80D2B3478FFF428(0, 107, 1);
	unk_0xC80D2B3478FFF428(0, 110, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 87, 1);
	unk_0xC80D2B3478FFF428(0, 88, 1);
	unk_0xC80D2B3478FFF428(0, 113, 1);
	unk_0xC80D2B3478FFF428(0, 115, 1);
	unk_0xC80D2B3478FFF428(0, 116, 1);
	unk_0xC80D2B3478FFF428(0, 117, 1);
	unk_0xC80D2B3478FFF428(0, 118, 1);
	unk_0xC80D2B3478FFF428(0, 119, 1);
	unk_0xC80D2B3478FFF428(0, 131, 1);
	unk_0xC80D2B3478FFF428(0, 132, 1);
	unk_0xC80D2B3478FFF428(0, 123, 1);
	unk_0xC80D2B3478FFF428(0, 126, 1);
	unk_0xC80D2B3478FFF428(0, 129, 1);
	unk_0xC80D2B3478FFF428(0, 130, 1);
	unk_0xC80D2B3478FFF428(0, 133, 1);
	unk_0xC80D2B3478FFF428(0, 134, 1);
	unk_0xEEB3EB1EAE3ADA8E();
	if ((unk_0x1ADBAAC322D61F73() - Global_29) > 500)
	{
		unk_0xD5739C1C2A4441D5(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1ADBAAC322D61F73();
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (unk_0xF87C669B882D93C0(unk_0x137B8B7A1CAD742A(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(char* sParam0)
{
	int iVar0;
	
	unk_0xFA6584EFD4754E3A(0, 0);
	func_19(sParam0);
	while (!func_18())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_939))
	{
		if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_939, 0))
		{
			unk_0x5D91DDE62ED9EC5E(&iLocal_939);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_941)
	{
		if (unk_0xC1EDB61CE0A4B94E(iLocal_941[iVar0]))
		{
			unk_0xDAF1451794AD09A3(&(iLocal_941[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_88140.f_9)
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_88140.f_9[iVar0]))
		{
			unk_0xDAF1451794AD09A3(&(Global_88140.f_9[iVar0]));
		}
		iVar0++;
	}
	unk_0x79D9EC458879E8B8(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 100f, 1, 1, 0, 0);
	unk_0x25B97FB8615971D6("AHP1_FAIL");
	if (func_17())
	{
		func_102();
	}
	else if (func_16())
	{
		func_14(229.1676f, -1614.979f, 28.2892f, 142.5156f);
	}
	func_98();
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_69761, 0f, 0f, 0f, 0))
	{
		Global_69761 = { Param0 };
		Global_69764 = fParam3;
	}
}

bool func_15(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_16()
{
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17()
{
	if (Global_91310 == 7)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91310 == 7 || Global_91310 == 8)
	{
		return 1;
	}
	return 0;
}

void func_19(char* sParam0)
{
	func_33(sParam0);
	func_20(0);
}

void func_20(int iParam0)
{
	int iVar0;
	
	if (Global_101186.f_7851 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_21(iVar0))
		{
			return;
		}
		unk_0xE27C8E42A97895CF(&(Global_82395[iVar0 /*5*/].f_1), 5);
		Global_91346 = iParam0;
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_26();
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		unk_0x111E9B5D5C018FF9(5000);
	}
	iVar0 = Global_82395[iParam0 /*5*/];
	iVar1 = Global_69790.f_109[iVar0 /*4*/];
	func_25(iVar1, 1);
	unk_0xC8C9BD179B55B416(unk_0xE0BDAFA1A39552D6());
	unk_0xB87E30BB393A29AE(unk_0xE0BDAFA1A39552D6());
	func_22(&(Global_101186.f_1902.f_539), iVar1);
	if (Global_85818 == Global_91347)
	{
		Global_101186.f_7851.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x7DA173D4FD42F36B(Global_82431[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0x8BA777D22D085125(0);
		}
	}
	Global_101186.f_7851.f_330[iVar1 /*6*/].f_2++;
	Global_85818 = Global_91347;
	if (iParam0 == -1)
	{
		if (Global_101186.f_7851)
		{
		}
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_82395[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_82395[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_22(var uParam0, int iParam1)
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
		iVar1 = Global_101186.f_17299[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x7DA173D4FD42F36B(Global_101186.f_7851.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_24(Global_101186.f_17299[iVar0], &Var2, &fVar5))
			{
				Global_101186.f_17299[iVar0] = 318;
				func_23(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89033[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89033[iVar0 /*29*/].f_9 = 0f;
				Global_89033[iVar0 /*29*/].f_12 = 0f;
				Global_89033[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89033[iVar0 /*29*/].f_10 = 0f;
				Global_89033[iVar0 /*29*/].f_13 = 0f;
				Global_89033[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89033[iVar0 /*29*/].f_11 = 0f;
				Global_89033[iVar0 /*29*/].f_14 = 0f;
				Global_89033[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89033[iVar0 /*29*/].f_26 = 0f;
				Global_89033[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89033[iVar0 /*29*/].f_27 = 0f;
				Global_89033[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89033[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_23(var uParam0)
{
	*uParam0 = -15;
}

int func_24(int iParam0, var uParam1, float fParam2)
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
			return func_24(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_24(8, uParam1, fParam2);
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

void func_25(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85628[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85628[iParam0 /*2*/] = 0;
	}
}

void func_26()
{
	Global_91345 = 1;
	if (unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (unk_0x226FA58470A21AEF(&Global_69753))
		{
			switch (func_27())
			{
				case 0:
					StringCopy(&Global_69753, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69753, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69753, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69757, "", 16);
		}
		Global_91345 = 0;
	}
	else if (!unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x226FA58470A21AEF(&Global_69753))
		{
			switch (func_27())
			{
				case 0:
					StringCopy(&Global_69753, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69753, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69753, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69757, "", 16);
		}
		Global_91345 = 0;
		unk_0xE27C8E42A97895CF(&(Global_91310.f_20), 25);
	}
}

int func_27()
{
	func_28();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_32(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_31(unk_0x06736567F820A39E());
			if (func_30(iVar0) && (!func_29(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_30(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_29(int iParam0)
{
	return Global_35742 == iParam0;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33(char* sParam0)
{
	if (!unk_0x226FA58470A21AEF(sParam0))
	{
		if (unk_0x1AF431622CC415A8(sParam0) <= 16)
		{
			StringCopy(&Global_69753, sParam0, 16);
			StringCopy(&Global_69757, "", 16);
			if (unk_0x19FDDE8D858645A6())
			{
				unk_0xF60EED8E39839E1C();
			}
		}
	}
}

void func_34(int iParam0)
{
	if (unk_0x1B6292EA51632C25(iParam0, 0))
	{
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
		{
			if (unk_0x1B6292EA51632C25(iParam0, 0))
			{
				if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iParam0, 0))
				{
					if (unk_0xCDB4C4200A9B478A(uLocal_938))
					{
						unk_0x2239ED27B231AE2E(&uLocal_938);
					}
				}
				else if (!unk_0xCDB4C4200A9B478A(uLocal_938))
				{
					uLocal_938 = func_38(iParam0, 0, 0);
				}
			}
		}
		else if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iParam0, 0))
		{
			if (unk_0xCDB4C4200A9B478A(uLocal_938))
			{
				unk_0x2239ED27B231AE2E(&uLocal_938);
			}
			if (!unk_0xCDB4C4200A9B478A(uLocal_937))
			{
				unk_0x1AEFC2FB20822515();
				if (!iLocal_1122)
				{
					func_37("AHP_DROPOFF", 7500, 1);
					iLocal_1122 = 1;
				}
				uLocal_937 = func_35(Local_1118, 1);
				unk_0x0423ACD571C3E768(3f, 2f, 3);
			}
		}
		else
		{
			if (unk_0xCDB4C4200A9B478A(uLocal_937))
			{
				unk_0x2239ED27B231AE2E(&uLocal_937);
			}
			if (!unk_0xCDB4C4200A9B478A(uLocal_938))
			{
				unk_0x1AEFC2FB20822515();
				if (!iLocal_1121)
				{
					func_37("AHP_GETBAKIN", 7500, 1);
					iLocal_1121 = 1;
				}
				uLocal_938 = func_38(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (unk_0xCDB4C4200A9B478A(uLocal_938))
		{
			unk_0x2239ED27B231AE2E(&uLocal_938);
		}
		if (unk_0xCDB4C4200A9B478A(uLocal_937))
		{
			unk_0x2239ED27B231AE2E(&uLocal_937);
		}
	}
}

var func_35(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1232EB8CC16E4E5F(Param0);
	unk_0xC5B281EF0EBC2AA6(uVar0, func_36(unk_0x17CC0D5008835470(), 1f, 1f));
	unk_0xEEF2AFCBBDD180D3(uVar0, iParam3);
	return uVar0;
}

float func_36(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_37(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x366FF5AC028F8A66(sParam0);
	unk_0x1C785DE53446A241(iParam1, 0);
}

int func_38(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDB8B533098769F4F(iParam0);
	if (unk_0xFCBEC4C2079B0872(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_36(unk_0x17CC0D5008835470(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF2B74C6AE979DE74(uVar0, bParam1);
		}
		else
		{
			unk_0x8A6C20F61A3C4CFA(uVar0, 2);
		}
	}
	else if (unk_0x77CB3F400804EDD1(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_36(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
		unk_0xF2B74C6AE979DE74(uVar0, bParam1);
	}
	else if (unk_0x25EBA3BDCAE4CD26(iParam0))
	{
		unk_0xC5B281EF0EBC2AA6(uVar0, func_36(unk_0x17CC0D5008835470(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_40(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55790 = iParam0;
	if (!Global_55788)
	{
		Global_55788 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67875)
		{
			if (Global_67876[iVar0 /*9*/] == iParam0)
			{
				Global_67876[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55793 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67875)
	{
		if (iParam1 == -1 || Global_67876[iVar0 /*9*/] == iParam1)
		{
			if (Global_67876[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67876[iVar0 /*9*/].f_6 = iParam0;
				Global_67876[iVar0 /*9*/].f_7 = 1;
				Global_67876[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, int iParam1)
{
	Global_55791 = iParam0;
	Global_55792 = iParam1;
}

void func_43()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_1129)
	{
		iVar0 = iLocal_940;
	}
	else
	{
		iVar0 = iLocal_939;
	}
	if (!unk_0xAD79840A082ADD7F())
	{
		switch (iLocal_1131)
		{
			case 0:
				if ((unk_0x1B6292EA51632C25(iVar0, 0) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0)) && unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_83(iVar1);
						if ((!unk_0xCFC04A38F256EE06(iVar2) && unk_0x93E49C491856D7AD(iVar2, iVar0, 0)) && unk_0x4321FC7479614822(iVar0, -1) == iVar2)
						{
							if (!func_82(iVar2) && func_81(iVar2, 0))
							{
								if (func_80(iVar2, 0))
								{
									iLocal_1163 = 0;
									iLocal_1132 = iVar1;
									iLocal_1131 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (unk_0x1B6292EA51632C25(iVar0, 0))
				{
					if ((((unk_0xCFC04A38F256EE06(func_83(iLocal_1132)) || unk_0x4321FC7479614822(iVar0, -1) != func_83(iLocal_1132)) || !unk_0x93E49C491856D7AD(func_83(iLocal_1132), iVar0, 0)) || !func_82(func_83(iLocal_1132))) || !unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
					{
						func_79(func_83(iLocal_1132));
						iLocal_1131 = 0;
					}
					else
					{
						switch (iLocal_1163)
						{
							case 0:
								iLocal_1163 = 2;
								break;
							
							case 1:
								if (unk_0x8A517457C85EB9F1(Local_1139.f_0, Local_1139.f_1, Local_1142.f_0, Local_1142.f_1))
								{
									iLocal_1163++;
								}
								break;
							
							case 2:
								unk_0xCB0E9D592F2F88FA(func_83(iLocal_1132), iVar0, Local_1118, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
								if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iVar0, 1), Local_1118) > 250f)
								{
									unk_0x55F93CB9E01858D1(iVar0, unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iLocal_939, 1), Local_1118));
								}
								iLocal_1163++;
								break;
							
							case 3:
								if (unk_0x923F1BB1676259BF(iVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0, 1, 0))
								{
									if (unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iVar0, 1), Local_1133) < unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(iVar0, 1), Local_1136))
									{
										if (bLocal_1129)
										{
											unk_0xCB0E9D592F2F88FA(func_83(iLocal_1132), iVar0, Local_1136, 5f, 0, unk_0x79469DA5833EACA8(iVar0), 262144, 2f, 2f);
										}
										else
										{
											unk_0x18A8F5F1EBC81D59(func_83(iLocal_1132), iVar0, Local_1118, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_1129)
									{
										unk_0xCB0E9D592F2F88FA(func_83(iLocal_1132), iVar0, Local_1133, 5f, 0, unk_0x79469DA5833EACA8(iVar0), 262144, 2f, 2f);
									}
									else
									{
										unk_0x18A8F5F1EBC81D59(func_83(iLocal_1132), iVar0, Local_1118, 0f, 1, 15f, 0);
									}
									iLocal_1163++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_44();
				break;
		}
	}
	else if (iLocal_1131 != 0)
	{
		if (func_79(func_83(iLocal_1132)))
		{
			iLocal_1131 = 0;
		}
	}
}

void func_44()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0xCFC04A38F256EE06(func_83(iLocal_1132)) && unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) == 0)
	{
		if ((((unk_0xC1EDB61CE0A4B94E(iLocal_939) && unk_0x1B6292EA51632C25(iLocal_939, 0)) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_939, 0)) && unk_0x93E49C491856D7AD(func_83(iLocal_1132), iLocal_939, 0)) || (((unk_0xC1EDB61CE0A4B94E(iLocal_940) && unk_0x1B6292EA51632C25(iLocal_940, 0)) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_940, 0)) && unk_0x93E49C491856D7AD(func_83(iLocal_1132), iLocal_940, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_1145)
	{
		case 0:
			iVar1 = func_76();
			if (func_64(0, 1, 145, 0, iVar1, &cLocal_1146, &cLocal_1150, 1))
			{
				func_63(&uLocal_951, 0);
				func_63(&uLocal_951, 1);
				func_63(&uLocal_951, 2);
				if (func_27() == 1)
				{
					func_62(&uLocal_951, 0, func_83(0), "MICHAEL", 0, 1);
					func_62(&uLocal_951, 1, unk_0x06736567F820A39E(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_62(&uLocal_951, 1, func_83(1), "FRANKLIN", 0, 1);
					func_62(&uLocal_951, 0, unk_0x06736567F820A39E(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1155)
				{
					iLocal_1162 = unk_0x1ADBAAC322D61F73();
				}
				iLocal_1145 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((unk_0x1ADBAAC322D61F73() - iLocal_1162) > 5000 || iLocal_1155)
				{
					if (func_61(&uLocal_951, &cLocal_1146, &cLocal_1150, 8, 0, 0, 0))
					{
						iLocal_1155 = 1;
						iLocal_1145 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_1154)
			{
				if (!bVar0)
				{
					cLocal_1156 = { func_60() };
					func_59();
					bLocal_1154 = true;
				}
			}
			else if (bVar0)
			{
				if (func_48(&uLocal_951, &cLocal_1146, &cLocal_1150, &cLocal_1156, 8, 0, 0))
				{
					bLocal_1154 = false;
				}
			}
			if (unk_0xAD79840A082ADD7F() || (!bLocal_1154 && !func_47()))
			{
				func_45();
				iLocal_1145 = 3;
				iLocal_1162 = unk_0x1ADBAAC322D61F73();
			}
			break;
		
		case 3:
			if ((unk_0x1ADBAAC322D61F73() - iLocal_1162) > 10000)
			{
				iLocal_1145 = 0;
			}
			break;
	}
}

void func_45()
{
	Global_14578 = 0;
	func_46();
}

void func_46()
{
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0x0F9FE213495D2609();
		Global_16723 = 0;
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

int func_47()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

bool func_48(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_49(sParam2, iParam4, 0);
}

int func_49(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC48487554D051523(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_57();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_55();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_54();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_53())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
				}
			}
			if (func_52())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_51();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_50();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_57();
	}
	return 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_51()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_52()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_53()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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

void func_54()
{
	if (func_29(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_27();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

void func_57()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_59()
{
	Global_14578 = 0;
	func_57();
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x1E6B7631898C6301();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xDC1F9F222D09400F(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xDC1F9F222D09400F(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_49(sParam2, iParam3, 0);
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
			}
		}
	}
}

void func_63(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_75(iParam0);
	iVar1 = func_75(iParam1);
	iVar2 = func_75(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_74(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_73(&(Global_101186.f_16869.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_68(&(Global_101186.f_16869.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_73(&(Global_101186.f_16869.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_68(&(Global_101186.f_16869.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_67(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_73(&(Global_101186.f_16869.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_68(&(Global_101186.f_16869.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_65(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_65(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_66(iParam0), 16);
		StringConCat(&Var0, func_66(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_66(iParam0), 16);
		StringConCat(&Var0, func_66(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar4 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar4;
		}
		if (iParam1 < iParam0)
		{
			iVar5 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar5;
		}
		if (iParam2 < iParam1)
		{
			iVar6 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar6;
		}
		StringConCat(&Var0, func_66(iParam0), 16);
		StringConCat(&Var0, func_66(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_66(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_66(iParam0), 16);
		StringConCat(&Var0, func_66(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_66(iParam2), 16);
		}
	}
	return Var0;
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_68(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_72((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_71((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_70((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_69(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_69(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_70(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = unk_0x97EF1E5BCE9DC075(iParam0, 16) & 15;
	*iParam2 = unk_0x97EF1E5BCE9DC075(iParam0, 12) & 15;
	*iParam3 = unk_0x97EF1E5BCE9DC075(iParam0, 8) & 15;
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = unk_0x97EF1E5BCE9DC075(iParam0, 28) & 15;
	*iParam2 = unk_0x97EF1E5BCE9DC075(iParam0, 24) & 15;
	*iParam3 = unk_0x97EF1E5BCE9DC075(iParam0, 20) & 15;
}

int func_73(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_70((*uParam0)[*iParam2], &iVar6);
		if (unk_0x7DA173D4FD42F36B(iParam4, iVar6))
		{
			func_72((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_71((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_75(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_101186.f_32651[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	unk_0xE27C8E42A97895CF(&iVar0, 1);
	if (Local_79.f_109 == 0)
	{
		unk_0xE27C8E42A97895CF(&iVar0, 2);
	}
	if (func_5(128))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 4);
		if (!func_78(24))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 21);
		}
	}
	else
	{
		unk_0xE27C8E42A97895CF(&iVar0, 3);
	}
	if (func_5(131))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 6);
	}
	else
	{
		unk_0xE27C8E42A97895CF(&iVar0, 5);
	}
	if (func_5(137))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 9);
	}
	else if (func_5(126))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 8);
	}
	else
	{
		unk_0xE27C8E42A97895CF(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 10);
		}
		if (func_5(135))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 11);
		}
		else
		{
			unk_0xE27C8E42A97895CF(&iVar0, 13);
		}
		if (func_5(136))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 12);
		}
		else
		{
			unk_0xE27C8E42A97895CF(&iVar0, 14);
		}
	}
	if (!func_78(20))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 15);
	}
	if (!func_78(46))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 16);
	}
	if (func_5(129) && !unk_0x7DA173D4FD42F36B(iVar0, 9))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 17);
	}
	if (func_78(40) && !func_78(43))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 18);
	}
	if (func_78(43) && !func_78(42))
	{
		unk_0xE27C8E42A97895CF(&iVar0, 19);
	}
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (func_77(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)))
		{
			unk_0xE27C8E42A97895CF(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_77(struct<2> Param0, Vector3 vParam2)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101186.f_7851.f_330[iParam0 /*6*/];
}

int func_79(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		iVar0 = func_31(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_83(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Global_87497, iVar0))
		{
			return 0;
		}
		unk_0x99BCB15F954AF579(&Global_87497, iVar0);
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		iVar0 = func_31(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_83(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x7DA173D4FD42F36B(Global_87497, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x06736567F820A39E())
			{
				return 0;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_87496, iVar0))
		{
			unk_0x654FA76455558990(iParam0, 0, 0);
			unk_0x215FFA3EE011BA3C(iParam0, 0);
			unk_0xE27C8E42A97895CF(&Global_87497, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		iVar0 = func_31(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_83(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x06736567F820A39E())
			{
				return 0;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_87496, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		iVar0 = func_31(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_83(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x7DA173D4FD42F36B(Global_87497, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_27())
	{
		return unk_0x06736567F820A39E();
	}
	return Global_89121[func_84(iParam0)];
}

int func_84(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_85()
{
	if (((unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0) && unk_0x1B6292EA51632C25(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), 0)) && unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0) != iLocal_939) && unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0) != iLocal_940)
	{
		if (unk_0xD94C5D56986DC6E2(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), joaat("firetruk")))
		{
			iLocal_939 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
			unk_0xB7E6C6AE18F1EDA6(iLocal_939, 1, 1);
			iLocal_1124 = 0;
			return 1;
		}
		if (unk_0xD94C5D56986DC6E2(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), joaat("towtruck")) || unk_0xD94C5D56986DC6E2(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0), joaat("towtruck2")))
		{
			if (unk_0xC1EDB61CE0A4B94E(unk_0xDF984030F4851603(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0))))
			{
				if (unk_0x1B6292EA51632C25(unk_0x43AB2E726FCE3BF7(unk_0xDF984030F4851603(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0))), 0))
				{
					iLocal_940 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
					unk_0xB7E6C6AE18F1EDA6(iLocal_940, 1, 1);
					if (unk_0x43AB2E726FCE3BF7(unk_0xDF984030F4851603(iLocal_940)) != iLocal_939)
					{
						iLocal_939 = unk_0x43AB2E726FCE3BF7(unk_0xDF984030F4851603(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0)));
						iLocal_1124 = 0;
						unk_0xB7E6C6AE18F1EDA6(iLocal_939, 1, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (iLocal_1164 < 8)
	{
		if (iLocal_1164 < 4)
		{
			if (unk_0xC1EDB61CE0A4B94E(Global_88140.f_9[iLocal_1164]))
			{
				if (!unk_0xCFC04A38F256EE06(Global_88140.f_9[iLocal_1164]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(Global_88140.f_9[iLocal_1164], 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) < 900f)
					{
						unk_0xB7E6C6AE18F1EDA6(Global_88140.f_9[iLocal_1164], 1, 1);
						iLocal_941[iLocal_1164] = Global_88140.f_9[iLocal_1164];
						bVar0 = true;
						Global_88140.f_9[iLocal_1164] = 0;
					}
					else if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(Global_88140.f_9[iLocal_1164], 1), unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1)) > 2500f && unk_0x8831C606DC492098(Global_88140.f_9[iLocal_1164]))
					{
						unk_0xB7E6C6AE18F1EDA6(Global_88140.f_9[iLocal_1164], 1, 1);
						unk_0xDAF1451794AD09A3(&(Global_88140.f_9[iLocal_1164]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (unk_0xBBD7A91EE7E52015(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((unk_0xC1EDB61CE0A4B94E(iVar1) && !unk_0xCFC04A38F256EE06(iVar1)) && !func_87(iVar1, &iLocal_941))
				{
					unk_0xB7E6C6AE18F1EDA6(iVar1, 1, 1);
					iLocal_941[iLocal_1164] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!unk_0xCFC04A38F256EE06(iLocal_941[iLocal_1164]))
			{
				unk_0xDEA5F99894469373(iLocal_941[iLocal_1164], iLocal_950);
				unk_0x2A8F1A0BA3FCCC09(unk_0xE0BDAFA1A39552D6(), 1, 0);
				unk_0xD14E5ED9D5665519(iLocal_941[iLocal_1164], 17, 0);
				unk_0x6821306347C4E0F6(unk_0xE0BDAFA1A39552D6(), 0f);
			}
			iLocal_1164++;
		}
	}
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (unk_0xC1EDB61CE0A4B94E((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_88()
{
	if (bLocal_1129)
	{
		if (((!unk_0x1B6292EA51632C25(iLocal_940, 0) || (unk_0x1B6292EA51632C25(iLocal_940, 0) && !unk_0x046CEB8397234DA8(iLocal_939, iLocal_940))) || (unk_0x1B6292EA51632C25(iLocal_939, 0) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_939, 0))) || (unk_0xC1EDB61CE0A4B94E(iLocal_940) && unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), unk_0xF4745590D18D14B8(iLocal_940, 1)) > 250f))
		{
			bLocal_1129 = false;
		}
	}
	else if ((unk_0x1B6292EA51632C25(iLocal_940, 0) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_940, 0)) && unk_0x046CEB8397234DA8(iLocal_939, iLocal_940))
	{
		bLocal_1129 = true;
	}
}

void func_89(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55781 = 0;
	if (!Global_56005[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67875)
	{
		if (Global_67876[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67876[iVar1 /*9*/].f_1 = 1;
			Global_67876[iVar1 /*9*/].f_2 = 0f;
			if (Global_67876[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_90()
{
	struct<3> Var0;
	int iVar3;
	
	if ((unk_0xC1EDB61CE0A4B94E(Global_88140[0]) && unk_0x1B6292EA51632C25(Global_88140[0], 0)) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), Global_88140[0], 0))
	{
		unk_0xB7E6C6AE18F1EDA6(Global_88140[0], 1, 1);
		iLocal_939 = Global_88140[0];
		Global_88140[0] = 0;
	}
	if ((unk_0xC1EDB61CE0A4B94E(Global_88140[1]) && unk_0x1B6292EA51632C25(Global_88140[1], 0)) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), Global_88140[1], 0))
	{
		if (unk_0xC1EDB61CE0A4B94E(unk_0xDF984030F4851603(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0))) && unk_0x1B6292EA51632C25(unk_0x43AB2E726FCE3BF7(unk_0xDF984030F4851603(unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0))), 0))
		{
			unk_0xB7E6C6AE18F1EDA6(Global_88140[1], 1, 1);
			iLocal_940 = Global_88140[1];
			Global_88140[1] = 0;
			unk_0xB7E6C6AE18F1EDA6(Global_88140[0], 1, 1);
			iLocal_939 = Global_88140[0];
			Global_88140[0] = 0;
			bLocal_1129 = true;
		}
	}
	unk_0x18DF389F542183A3("AHPREP1", 0);
	while (!unk_0x7710127C9E7C52D8(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
	}
	unk_0x3ECE0E645B1530B3("FireMen", &iLocal_950);
	unk_0x054CBFE90FAA6840(5, joaat("player"), iLocal_950);
	unk_0x054CBFE90FAA6840(5, iLocal_950, joaat("player"));
	if (func_10(0))
	{
		unk_0xBECC89ACB4E5D4ED(joaat("s_m_y_fireman_01"));
		while (!unk_0x5C9FE32E2FF37989(joaat("s_m_y_fireman_01")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		Var0 = { 202.0504f, -1655.773f, 28.8031f };
		uLocal_1165 = unk_0x33189531E55C7E33(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
		unk_0x79D9EC458879E8B8(Var0, 20f, 1, 0, 0, 0);
		iLocal_941[0] = unk_0xB500796AAD639F82(21, joaat("s_m_y_fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, 1);
		iLocal_941[1] = unk_0xB500796AAD639F82(21, joaat("s_m_y_fireman_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, 1);
		iLocal_941[2] = unk_0xB500796AAD639F82(21, joaat("s_m_y_fireman_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, 1);
		iVar3 = 0;
		while (iVar3 <= (iLocal_941 - 1))
		{
			if (!unk_0xCFC04A38F256EE06(iLocal_941[iVar3]))
			{
				unk_0xD5FDD0DED35FFF91(iLocal_941[iVar3], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				unk_0xD14E5ED9D5665519(iLocal_941[iVar3], 17, 0);
				unk_0xDEA5F99894469373(iLocal_941[iVar3], iLocal_950);
			}
			iVar3++;
		}
		unk_0x054CBFE90FAA6840(255, joaat("player"), iLocal_950);
		unk_0x054CBFE90FAA6840(255, iLocal_950, joaat("player"));
		iLocal_1116 = -1;
		if (func_97())
		{
			func_96(354.3055f, -1722.206f, 28.259f, 109.6154f, 1, 0);
			func_93(0, -1, 1);
		}
	}
	if (!unk_0xDF916BCF4D39E8C2() && !unk_0xEC708A793EB17979())
	{
		unk_0x8EA2EEF67922F899(500);
	}
	if (func_16())
	{
		iLocal_1125 = 1;
	}
	if (!func_10(0))
	{
		unk_0x25B97FB8615971D6("AHP1_START");
	}
	iLocal_1124 = 0;
	func_91(68);
}

void func_91(int iParam0)
{
	Global_87498 = 0;
	switch (iParam0)
	{
		case 72:
			func_92(2);
			func_92(4);
			break;
		
		case 73:
			func_92(0);
			func_92(1);
			func_92(7);
			break;
		
		case 92:
			func_92(10);
			func_92(9);
			func_92(13);
			func_92(6);
			break;
		
		case 68:
			func_92(11);
			break;
		
		case 78:
			func_92(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_92(3);
			break;
		
		default:
			break;
	}
}

void func_92(int iParam0)
{
	unk_0xE27C8E42A97895CF(&Global_87498, iParam0);
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	if (func_97() && func_95())
	{
		while (Global_91305 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x7A2BC6210CE2767E(0);
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				unk_0x69B709744D56D224(unk_0x06736567F820A39E());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (unk_0xC1EDB61CE0A4B94E(iParam0))
				{
					if (unk_0x1B6292EA51632C25(iParam0, 0))
					{
						if (!unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iParam0, 0))
						{
							unk_0xE47DEDA2D353E92B(unk_0x06736567F820A39E(), iParam0, iParam1);
							unk_0xA71476EEBE45FF73(0f, 1065353216);
							unk_0x086A554C80BC6C5D(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
			}
		}
		unk_0xFDE9714F4FC95A1E();
		func_94(0);
	}
}

void func_94(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&(Global_91310.f_20), 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_91310.f_20), 13);
	}
}

bool func_95()
{
	return unk_0x7DA173D4FD42F36B(Global_91310.f_20, 13);
}

void func_96(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_97())
	{
		unk_0x8AAE4CDF72BA829A(0);
		unk_0x99BCB15F954AF579(&(Global_91310.f_20), 2);
		unk_0x7A2BC6210CE2767E(1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 0);
		}
		Global_91306 = { Param0 };
		Global_91309 = fParam3;
		Global_91305 = 1;
		if (iParam4 == 1)
		{
			unk_0xE27C8E42A97895CF(&(Global_91310.f_20), 14);
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_91310.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xE27C8E42A97895CF(&(Global_91310.f_20), 24);
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_91310.f_20), 24);
		}
		func_94(1);
	}
}

int func_97()
{
	if (Global_91310 == 10 || Global_91310 == 9)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	func_99();
	if (unk_0xC1EDB61CE0A4B94E(iLocal_939))
	{
		unk_0x768B37F1452D4834(&iLocal_939);
	}
	unk_0x8659A4920DA95096(uLocal_1165, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_99()
{
	Global_87498 = 0;
}

void func_100()
{
	int iVar0;
	
	if (unk_0x04D070195A8178CD("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101186.f_7851 || func_10(0))
	{
		if (!func_101())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_21(iVar0))
				{
					return;
				}
				unk_0xE27C8E42A97895CF(&(Global_82395[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_26();
		}
	}
}

int func_101()
{
	if (((Global_91310 == 13 || Global_91310 == 10) || Global_91310 == 11) || Global_91310 == 12)
	{
		return 0;
	}
	return 1;
}

void func_102()
{
	if (iLocal_1125 == 1)
	{
		func_14(354.3055f, -1722.206f, 28.259f, 109.6154f);
	}
}

