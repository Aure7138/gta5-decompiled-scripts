#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
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
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65[2] = { 0, 0 };
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	var uLocal_91[2] = { 0, 0 };
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<6> Local_137 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_143[24] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	struct<3> Local_152 = { 0, 0, 0 } ;
	var uLocal_155[2] = { 0, 0 };
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	struct<3> Local_160 = { 0, 0, 0 } ;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 16;
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
	int iLocal_338 = 0;
	struct<3> Local_339 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	uLocal_51 = unk_0xCFFCC3E6689F1F45();
	uLocal_52 = unk_0xA655262EB9B9A8C4();
	Local_87 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_124 = -1;
	StringCopy(&Local_137, "", 24);
	iLocal_165 = -1;
	Local_339 = { -1017.345f, -1354.196f, 4.4568f };
	Local_342 = { 2003.456f, 3071.102f, 46.0499f };
	Local_57 = { ScriptParam_0.f_1[0 /*3*/] };
	func_266();
	if (unk_0x24862A9CDC8F8874(11))
	{
		func_231();
	}
	if (func_189(Local_57, 27, iLocal_345, 0, 0))
	{
		func_186(-1);
	}
	else
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	iLocal_159 = unk_0x693EBB4F13506457();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCAA967E16BBE69CE() || iLocal_62)
		{
			if (!func_185())
			{
				if (func_184())
				{
					func_231();
				}
			}
			unk_0xBB5777EE55D3B041("RE_DD", 0);
			switch (iLocal_53)
			{
				case 0:
					if (iLocal_56)
					{
						iLocal_172 = 1;
						iLocal_53 = 1;
					}
					else
					{
						if (func_172())
						{
							func_231();
						}
						if (!bLocal_60)
						{
							func_171();
						}
						if (bLocal_60)
						{
							func_170();
						}
					}
					break;
				
				case 1:
					func_160();
					if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
					{
						func_159();
						func_156();
						if (iLocal_54 == 1 && !unk_0x95CCECA3948CFE7B(uLocal_91[1]))
						{
							func_70();
							if (func_68() || unk_0xB6900B8CB0ABBD2B(iLocal_94))
							{
								if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
								{
									if (!unk_0xB6900B8CB0ABBD2B(uLocal_91[0]))
									{
										if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
										{
											unk_0x5980997C9ACA0572(uLocal_91[0]);
										}
										unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
										unk_0x622E764F80DBF8B7(uLocal_91[0], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
										func_64(uLocal_91[0], 120000, 0);
										unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_54 == 2 || (iLocal_54 == 1 && unk_0x95CCECA3948CFE7B(uLocal_91[1])))
						{
							func_70();
							if (iLocal_55 != 9)
							{
								if (func_68() || unk_0xB6900B8CB0ABBD2B(iLocal_94))
								{
									if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
									{
										if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
										{
											if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
											{
												unk_0x5980997C9ACA0572(uLocal_91[0]);
											}
											unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
											unk_0x622E764F80DBF8B7(uLocal_91[0], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
											func_64(uLocal_91[0], 120000, 0);
											unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
										}
									}
									if (unk_0x95CCECA3948CFE7B(uLocal_91[1]))
									{
										if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
										{
											if (unk_0x5BE4C4CB01F0877F(uLocal_91[1]))
											{
												unk_0x5980997C9ACA0572(uLocal_91[1]);
											}
											unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
											unk_0x622E764F80DBF8B7(uLocal_91[1], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
											func_64(uLocal_91[1], 120000, 0);
											unk_0xF1A02DDEC7E15D6E(uLocal_91[1], 1);
										}
									}
									if (iLocal_54 == 1)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_54 == 2)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
						{
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								unk_0x9EEBFF7C6634D175(uLocal_91[0], 1f);
							}
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_91[1]))
						{
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
							{
								unk_0x9EEBFF7C6634D175(uLocal_91[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_55 != 9)
					{
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							if (unk_0xA0C23498D8E0BB93(uLocal_91[0], Local_87, 5f, 5f, 5f, 0, 1, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
									{
										if (!unk_0x5BE4C4CB01F0877F(uLocal_91[0]) && !unk_0x5BE4C4CB01F0877F(uLocal_91[1]))
										{
											unk_0x13B202E60E04C733(uLocal_91[0], func_57());
											unk_0x13B202E60E04C733(uLocal_91[1], func_57());
										}
									}
								}
								func_56(0);
								unk_0x4EDE34FBADD967A6(0);
								func_62();
								iLocal_55 = 9;
							}
						}
					}
					if (func_55())
					{
						if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
						{
							unk_0x26B3B761603F5232(&(uLocal_91[0]));
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_91[1]))
						{
							unk_0x26B3B761603F5232(&(uLocal_91[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_231();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_54 == 1 && iLocal_55 == 7) && iLocal_64 == 5) && iLocal_110)
	{
		iLocal_159 = unk_0x693EBB4F13506457();
		if (func_2())
		{
			if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
			{
				Local_160 = { unk_0x8DB48F88A836B346(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0) };
			}
		}
	}
}

int func_2()
{
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
		{
			if (iLocal_54 == 1)
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						if (unk_0x0C7EC810080F0459(uLocal_91[0], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_91[0]) && unk_0x95CCECA3948CFE7B(uLocal_91[1]))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
					{
						if (unk_0x0C7EC810080F0459(uLocal_91[0], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0) && unk_0x0C7EC810080F0459(uLocal_91[1], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
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

int func_3()
{
	if (iLocal_54 == 2)
	{
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_94))
		{
			if (!unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_94, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (unk_0x955A04DD5208F4B7(iLocal_94) && unk_0xD3A4099D2845F152(iLocal_94) < iLocal_80)
				{
					iLocal_80 = unk_0xD3A4099D2845F152(iLocal_94);
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!unk_0x5D42322C7DB888D0(iLocal_94, 0) || unk_0xA4EFBED0A0F1C60C(iLocal_94))
			{
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_4())
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							unk_0xF7F92ABBE23C8EA8(uLocal_91[0], 1193033728, 0);
							unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
						}
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							unk_0x1510D3A1E178AAEF(uLocal_91[1], uLocal_91[0], -1, 0f, 1f, 1073741824, 0);
							unk_0xF1A02DDEC7E15D6E(uLocal_91[1], 1);
						}
						return 1;
					}
				}
			}
			if (unk_0x320E5435C0472F40(iLocal_94, 0, 2) && unk_0x87D4C731B013290A(iLocal_94, unk_0xC8B93D94F8954288(), 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
					unk_0x622E764F80DBF8B7(uLocal_91[0], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
				}
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
					unk_0x622E764F80DBF8B7(uLocal_91[1], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
				}
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

int func_4()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_136)
		{
			if (func_10(&uLocal_173, "REDR2AU", &cLocal_143, &Local_137, 8, 0, 0))
			{
				iLocal_136 = 0;
			}
		}
	}
	else if ((!iLocal_136 && unk_0x2964A62922189B93()) && !func_27("REDR1_SWV"))
	{
		cLocal_143 = { func_9() };
		Local_137 = { func_8() };
		func_6();
		iLocal_136 = 1;
	}
}

void func_6()
{
	Global_14578 = 0;
	func_7();
}

void func_7()
{
	if (unk_0x2964A62922189B93())
	{
		unk_0xE9A2B98CC2F095D6();
		Global_16723 = 0;
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

struct<6> func_8()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x8F37C4B2B81C98B9();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_9()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xB518E9C8553B1D2B(0);
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
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_23();
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_16();
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
				}
			}
			if (func_14())
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_13()
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
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_14()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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

void func_16()
{
	if (func_22(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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
		Global_14413 = func_17();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_17()
{
	func_18();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_21(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_20(unk_0xC8B93D94F8954288());
			if (func_19(iVar0) && (!func_22(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_19(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_25()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_27(char* sParam0)
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (unk_0xF8D041B05C3D1FD4(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (iLocal_54 == 1)
	{
		if (unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (iLocal_54 == 1)
	{
		if (!unk_0x95CCECA3948CFE7B(uLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (!unk_0x95CCECA3948CFE7B(uLocal_91[0]) && !unk_0x95CCECA3948CFE7B(uLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	while (!func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_34(27, iLocal_345);
	func_31();
	func_231();
}

void func_31()
{
	func_32();
}

int func_32()
{
	if (func_33(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_100976.f_29464.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_100964 = iParam1;
		if (Global_100962 == 0)
		{
			if (((Global_100965 == 1 || Global_100965 == 5) || Global_100965 == 11) || Global_100965 == 25)
			{
				func_35(2);
			}
			else if ((Global_100965 == 26 || Global_100965 == 8) || Global_100965 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)
{
	Global_100962 = iParam0;
}

void func_36(int iParam0, var uParam1, var uParam2)
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
		func_40((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = uParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_37();
	}
}

void func_37()
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
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_39(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_38() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
				}
				if (!Global_55659)
				{
					func_32();
				}
			}
		}
	}
}

int func_38()
{
	return Global_25115;
}

int func_39(int iParam0, int iParam1)
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
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
	}
	return 0;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_41();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_41()
{
	return Global_1312746;
}

int func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_24879.f_150[iVar1]), iVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF8D041B05C3D1FD4(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_24879[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_100976.f_24879.f_145 < 9)
	{
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_4), sParam1, 16);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_8 = (unk_0x693EBB4F13506457() + iParam3);
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_9 = iParam5;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_11 = iParam6;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_12 = uParam2;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_13 = iParam7;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_14 = iParam8;
		Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = ((unk_0x693EBB4F13506457() + iParam3) + iParam4);
		}
		else
		{
			Global_100976.f_24879[Global_100976.f_24879.f_145 /*16*/].f_10 = -1;
		}
		Global_100976.f_24879.f_145++;
		func_47();
	}
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_100976.f_24879.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_24879.f_145)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 0))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[0])
			{
				Global_100976.f_24879.f_146[0] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 1))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[1])
			{
				Global_100976.f_24879.f_146[1] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_100976.f_24879[iVar0 /*16*/].f_11, 2))
		{
			if (Global_100976.f_24879[iVar0 /*16*/].f_12 > Global_100976.f_24879.f_146[2])
			{
				Global_100976.f_24879.f_146[2] = Global_100976.f_24879[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_48()
{
	func_18();
	switch (Global_100976.f_1770.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_24879.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_100976.f_29464.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_52()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xC4E68AF0B559FAC4(), 64);
	uVar16 = func_53(Var0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x7CBED6EFED40E7EB(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (Global_25350)
	{
		func_35(4);
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_16723 = iParam0;
}

var func_57()
{
	return unk_0x471BC3ECFB439FD6(unk_0x1A96BAEAC664567A());
}

int func_58()
{
	if (Global_100976.f_29464.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_25349;
}

void func_60()
{
	func_231();
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_62()
{
	Global_14578 = 0;
	func_63();
}

void func_63()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36527[iVar2 /*5*/] = 0;
	Global_36527[iVar2 /*5*/].f_1 = iParam0;
	Global_36527[iVar2 /*5*/].f_2 = iParam1;
	Global_36527[iVar2 /*5*/].f_3 = iParam1;
	Global_36527[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xC8B93D94F8954288())
	{
		Global_36748 = 1;
	}
	Global_36526++;
	return 1;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
		{
			return Global_36553[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_68()
{
	unk_0xEEE9859FAA1E554B(1);
	if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
	{
		return 1;
	}
	if ((unk_0x0592F98C32AC22CA(Local_152, 40f, 1) || unk_0x0592F98C32AC22CA(func_69(unk_0xA34E7C2A5118D638()), 10f, 0)) || unk_0xEC54737A42D57DA5(Local_152 - Vector(40f, 40f, 40f), Local_152 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
	{
		if (unk_0x87D4C731B013290A(uLocal_91[0], unk_0xC8B93D94F8954288(), 1) || unk_0xEE473B4B88D6F842(uLocal_91[0]))
		{
			return 1;
		}
		if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
		{
			if (unk_0x87D4C731B013290A(uLocal_91[0], unk_0x974516F979AD07BC(), 1))
			{
				return 1;
			}
		}
		if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
		{
			if (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), uLocal_91[0]) || unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), uLocal_91[0]))
			{
				if (unk_0x9AD5716183392F62(uLocal_91[0], unk_0xC8B93D94F8954288()))
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
	if (unk_0x95CCECA3948CFE7B(uLocal_91[1]))
	{
		if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
		{
			if (unk_0x87D4C731B013290A(uLocal_91[1], unk_0xC8B93D94F8954288(), 1))
			{
				return 1;
			}
			if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
			{
				if (unk_0x87D4C731B013290A(uLocal_91[1], unk_0x974516F979AD07BC(), 1))
				{
					return 1;
				}
			}
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
			{
				if (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), uLocal_91[1]) || unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), uLocal_91[1]))
				{
					if (unk_0x9AD5716183392F62(uLocal_91[1], unk_0xC8B93D94F8954288()))
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
	return 0;
}

Vector3 func_69(int iParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
}

void func_70()
{
	int iVar0;
	
	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, 1, 0) && unk_0x8EBAC9BC4005929D(Local_152, 1f)) || unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_152, 15f, 15f, 15f, 0, 1, 0))
				{
					if (unk_0x6B4865E08E90ACC5(uLocal_151))
					{
						unk_0x5356E82C1E5E0C44(&uLocal_151);
					}
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						if (!unk_0x6B4865E08E90ACC5(uLocal_155[0]))
						{
							uLocal_155[0] = func_155(uLocal_91[0], 0, 145);
							unk_0xEBA460B665086587(uLocal_155[0], 0);
						}
					}
					if (!func_185())
					{
						if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
						{
							iLocal_95 = unk_0x974516F979AD07BC();
						}
						func_154(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_145(1);
						func_144(1);
					}
					if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, 1, 0))
					{
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							func_143();
							unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x5323F488E6A1B660(uLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_123 = (unk_0x693EBB4F13506457() + 60000);
							if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
							{
								unk_0xEBA460B665086587(uLocal_155[0], 1);
							}
							iLocal_55 = 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, 1, 0) && unk_0x8EBAC9BC4005929D(Local_152, 1f)) || unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_152, 15f, 15f, 15f, 0, 1, 0))
				{
					func_142();
					if (!func_185())
					{
						if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
						{
							iLocal_95 = unk_0x974516F979AD07BC();
						}
						func_145(1);
						func_144(1);
					}
					if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, 1, 0))
					{
						func_61(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
						{
							unk_0xEBA460B665086587(uLocal_155[0], 1);
						}
						if (unk_0x6B4865E08E90ACC5(uLocal_155[1]))
						{
							unk_0xEBA460B665086587(uLocal_155[1], 1);
						}
						iLocal_123 = (unk_0x693EBB4F13506457() + 120000);
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_123 < unk_0x693EBB4F13506457())
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_94))
				{
					unk_0x3E2E609450787FFE(&uLocal_99);
					unk_0xE48D9147BC1F4CD7(0, uLocal_91[1], 7000, 2060, 4);
					unk_0xCF73E1BFE9942411(0, 2500);
					unk_0x9CEFBE395E148A32(0, iLocal_94, -1, -1, 1f, 1, 0);
					unk_0x939BC11172AA1303(uLocal_99);
					unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
					unk_0xA9351C9309E03069(&uLocal_99);
				}
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					unk_0x3E2E609450787FFE(&uLocal_99);
					unk_0xE48D9147BC1F4CD7(0, uLocal_91[0], 7000, 2060, 4);
					unk_0x81333BEA4837207C(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					unk_0x81333BEA4837207C(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
					unk_0x939BC11172AA1303(uLocal_99);
					unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
					unk_0xA9351C9309E03069(&uLocal_99);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_55 = 3;
			}
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), uLocal_91[0], 80f))
					{
						bLocal_121 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_55 = 4;
					}
				}
				else if (!unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x9BD0664D3DA3E6AE(1);
				}
				else
				{
					unk_0x9BD0664D3DA3E6AE(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_54 == 1)
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							unk_0xC1B1E9A034A63A62(0);
							iLocal_55 = 4;
						}
					}
					if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), uLocal_91[0], 80f))
						{
							bLocal_121 = true;
							unk_0xC1B1E9A034A63A62(0);
							iLocal_55 = 4;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_141();
						if (func_140())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_68, 15f, 15f, 15f, 0, 1, 0) && !unk_0xAAFE645D2696AF57(unk_0xC8B93D94F8954288()))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						if (unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), uLocal_91[0], 80f))
						{
							if (unk_0x9AD5716183392F62(uLocal_91[0], unk_0xC8B93D94F8954288()))
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
								{
									unk_0x3E2E609450787FFE(&uLocal_99);
									unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2060, 4);
									unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
									unk_0x939BC11172AA1303(uLocal_99);
									unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
									unk_0xA9351C9309E03069(&uLocal_99);
								}
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
								{
									unk_0xE48D9147BC1F4CD7(uLocal_91[1], unk_0xC8B93D94F8954288(), -1, 2060, 4);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_55 = 4;
							}
						}
					}
				}
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, 1, 0))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						unk_0x3E2E609450787FFE(&uLocal_99);
						unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2060, 4);
						unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
						unk_0x939BC11172AA1303(uLocal_99);
						unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
						unk_0xA9351C9309E03069(&uLocal_99);
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							unk_0xE48D9147BC1F4CD7(uLocal_91[1], unk_0xC8B93D94F8954288(), -1, 2060, 4);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_55 = 4;
					}
				}
				if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
				{
					if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iLocal_94, 1.5f, 1.5f, 5f, 0, 1, 0) && unk_0xAAFE645D2696AF57(unk_0xC8B93D94F8954288()))
					{
						if (func_140())
						{
							func_56(0);
						}
						func_62();
						unk_0x4EDE34FBADD967A6(0);
						if (func_61(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (unk_0x6B4865E08E90ACC5(uLocal_155[iLocal_63]))
								{
									unk_0x5356E82C1E5E0C44(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							if (!unk_0x6B4865E08E90ACC5(uLocal_158))
							{
								uLocal_158 = func_138(iLocal_94, 0, 0);
							}
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								unk_0xBA73099E237C7E5E(uLocal_91[0]);
							}
							iLocal_55 = 4;
						}
					}
				}
				if (iLocal_123 < unk_0x693EBB4F13506457())
				{
					if (func_140())
					{
						func_56(0);
					}
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1])) && unk_0x95CCECA3948CFE7B(iLocal_94))
						{
							unk_0x3E2E609450787FFE(&uLocal_99);
							unk_0xE48D9147BC1F4CD7(0, uLocal_91[1], -1, 2060, 4);
							unk_0x9CEFBE395E148A32(0, iLocal_94, -1, -1, 1f, 1, 0);
							unk_0x939BC11172AA1303(uLocal_99);
							unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
							unk_0xA9351C9309E03069(&uLocal_99);
							unk_0x3E2E609450787FFE(&uLocal_99);
							unk_0xE48D9147BC1F4CD7(0, uLocal_91[0], -1, 2060, 4);
							unk_0xC518AECFA9CF7722(0, uLocal_91[0], 0);
							unk_0x9CEFBE395E148A32(0, iLocal_94, -1, 0, 1f, 1, 0);
							unk_0x939BC11172AA1303(uLocal_99);
							unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
							unk_0xA9351C9309E03069(&uLocal_99);
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (unk_0x6B4865E08E90ACC5(uLocal_155[iLocal_63]))
								{
									unk_0x5356E82C1E5E0C44(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_121)
							{
								unk_0x9BD0664D3DA3E6AE(0);
								unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), -1, 2060, 4);
								unk_0xE48D9147BC1F4CD7(uLocal_91[1], unk_0xC8B93D94F8954288(), -1, 2060, 4);
								unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], -1, 2060, 4);
								if ((unk_0x693EBB4F13506457() + 50000) > iLocal_123 || unk_0xC354C1A3197CBF22(unk_0xA34E7C2A5118D638()))
								{
									func_6();
									if (bLocal_121)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_170++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_170++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_170++;
												}
											}
										}
									}
									else
									{
										iLocal_170++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_137())
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
								{
									unk_0x3E2E609450787FFE(&uLocal_99);
									unk_0x5323F488E6A1B660(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), -1);
									unk_0x939BC11172AA1303(uLocal_99);
									unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
									unk_0xA9351C9309E03069(&uLocal_99);
									if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
									{
										unk_0x3E2E609450787FFE(&uLocal_99);
										unk_0x5323F488E6A1B660(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										unk_0xC518AECFA9CF7722(0, uLocal_91[0], 0);
										unk_0xCF73E1BFE9942411(0, 3000);
										unk_0x81333BEA4837207C(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										unk_0x81333BEA4837207C(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										unk_0xF7F92ABBE23C8EA8(0, 1193033728, 0);
										unk_0x939BC11172AA1303(uLocal_99);
										unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
										unk_0xA9351C9309E03069(&uLocal_99);
									}
									func_136();
								}
							}
							else
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
								{
									if (unk_0xAF9BF2C76079B4BF(unk_0xC8B93D94F8954288(), uLocal_91[0], 80f))
									{
										unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), 10000, 2060, 4);
										unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], 10000, 2060, 4);
										func_6();
										unk_0x4EDE34FBADD967A6(0);
										iLocal_170++;
									}
									else
									{
										func_135(uLocal_91[0], &(uLocal_65[0]));
									}
								}
								if (!func_4())
								{
									iLocal_170++;
								}
							}
						}
						break;
					
					case 2:
						if (func_137())
						{
							iLocal_170 = 6;
						}
						else
						{
							iLocal_170++;
						}
						break;
					
					case 3:
						if (!iLocal_104)
						{
							if (unk_0x83666F9FB8FEBD4B() > 1500)
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
								{
									unk_0x3E2E609450787FFE(&uLocal_99);
									unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), 10000, 2060, 4);
									unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
									unk_0xCF73E1BFE9942411(0, 500);
									unk_0x939BC11172AA1303(uLocal_99);
									unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
									unk_0xA9351C9309E03069(&uLocal_99);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_104 = 1;
								}
							}
						}
						func_135(uLocal_91[0], &(uLocal_65[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_170++;
							}
						}
						break;
					
					case 4:
						if (!func_137())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
									if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
									{
										unk_0x5356E82C1E5E0C44(&(uLocal_155[0]));
									}
									if (unk_0x6B4865E08E90ACC5(uLocal_155[1]))
									{
										unk_0x5356E82C1E5E0C44(&(uLocal_155[1]));
									}
									if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
									{
										unk_0x0782F0CAEA719452(iLocal_94, 1);
										if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
										{
											unk_0x9CEFBE395E148A32(uLocal_91[0], iLocal_94, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_170++;
								}
							}
						}
						else
						{
							if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
							{
								unk_0x5356E82C1E5E0C44(&(uLocal_155[0]));
							}
							if (unk_0x6B4865E08E90ACC5(uLocal_155[1]))
							{
								unk_0x5356E82C1E5E0C44(&(uLocal_155[1]));
							}
							iLocal_170++;
						}
						break;
					
					case 5:
						if (func_137())
						{
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								if (!unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
								{
									unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
									unk_0x13B202E60E04C733(uLocal_91[0], func_57());
									unk_0xCB56FE462615766F(uLocal_91[0], 1);
									unk_0x64CD20398FAC9617(uLocal_91[0], 0);
								}
								unk_0x6CCF5F545348D54E(255, uLocal_100, joaat("player"));
								func_134();
							}
							if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
							{
								if (unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0) != iLocal_94)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_55 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_135(uLocal_91[0], &(uLocal_65[0]));
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							if (func_137())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_170 = 10;
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 7:
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							if (func_137())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_170 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 10:
						if (func_137())
						{
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								if (!unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
								{
									unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
									unk_0x13B202E60E04C733(uLocal_91[0], func_57());
									unk_0xCB56FE462615766F(uLocal_91[0], 1);
									unk_0x64CD20398FAC9617(uLocal_91[0], 0);
								}
								unk_0x6CCF5F545348D54E(255, uLocal_100, joaat("player"));
								func_134();
							}
							iLocal_170++;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 11:
						iLocal_55 = 7;
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (unk_0xAF9BF2C76079B4BF(uLocal_91[0], unk_0xC8B93D94F8954288(), 50f))
								{
									unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], -1, 2060, 4);
									unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), -1, 2060, 4);
									unk_0xE48D9147BC1F4CD7(uLocal_91[1], unk_0xC8B93D94F8954288(), -1, 2060, 4);
									if (func_140())
									{
										func_56(0);
									}
									func_6();
									unk_0x4EDE34FBADD967A6(0);
									if (func_61(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_170++;
									}
								}
								else
								{
									func_135(uLocal_91[0], &(uLocal_65[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							unk_0x3E2E609450787FFE(&uLocal_99);
							unk_0xCF73E1BFE9942411(0, 500);
							unk_0x939BC11172AA1303(uLocal_99);
							unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
							unk_0xA9351C9309E03069(&uLocal_99);
							unk_0xC1B1E9A034A63A62(0);
							iLocal_170++;
						}
						break;
					
					case 2:
						func_135(uLocal_91[0], &(uLocal_65[0]));
						if (!unk_0xAAFE645D2696AF57(unk_0xC8B93D94F8954288()))
						{
							if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
							{
								unk_0x0782F0CAEA719452(iLocal_94, 1);
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 8000)
						{
							if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
							{
								unk_0x5356E82C1E5E0C44(&(uLocal_155[0]));
							}
							if (unk_0x6B4865E08E90ACC5(uLocal_155[1]))
							{
								unk_0x5356E82C1E5E0C44(&(uLocal_155[1]));
							}
							if (!unk_0x6B4865E08E90ACC5(uLocal_158))
							{
								if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
								{
									uLocal_158 = func_138(iLocal_94, 0, 0);
									unk_0x0782F0CAEA719452(iLocal_94, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 20f, 20f, 20f, 0, 1, 0) && unk_0x83666F9FB8FEBD4B() > 9500)
								{
									iVar0 = unk_0x531444754C426278(0, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
										}
									}
									else if (func_61(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
							}
						}
						if (!unk_0xB6900B8CB0ABBD2B(iLocal_94))
						{
							if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_94, 1))
							{
								iLocal_55 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 1)
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_94))
				{
					if (unk_0x83666F9FB8FEBD4B() > 50000 || unk_0xC0ADAF0814175B68(iLocal_94, -1) == uLocal_91[0])
					{
						if (func_61(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (unk_0x5D42322C7DB888D0(iLocal_94, 0) && !unk_0xA4EFBED0A0F1C60C(iLocal_94))
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
								{
									if (unk_0x74CAAD9E721B315D(iLocal_94, -1) && unk_0x0C7EC810080F0459(uLocal_91[0], iLocal_94, 0))
									{
										unk_0x2798F59E60097FDE(uLocal_91[0], iLocal_94);
										iLocal_55 = 2;
									}
									else if (unk_0xC0ADAF0814175B68(iLocal_94, -1) == uLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (unk_0xC0ADAF0814175B68(iLocal_94, -1) == unk_0xC8B93D94F8954288())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_64(uLocal_91[0], 120000, 0);
										unk_0xF7F92ABBE23C8EA8(uLocal_91[0], 1193033728, 0);
										unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
										unk_0x4EDE34FBADD967A6(0);
										func_60();
									}
								}
							}
							else if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								func_64(uLocal_91[0], 120000, 0);
								unk_0xF7F92ABBE23C8EA8(uLocal_91[0], 1193033728, 0);
								unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
								unk_0x4EDE34FBADD967A6(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 60000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
						{
							if (unk_0x74CAAD9E721B315D(iLocal_94, -1))
							{
								if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
								{
									unk_0x3E2E609450787FFE(&uLocal_99);
									unk_0xD1FE26E80A6E2C00(0);
									unk_0x9CEFBE395E148A32(0, iLocal_94, -1, -1, 1f, 1, 0);
									unk_0x939BC11172AA1303(uLocal_99);
									unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
									unk_0xA9351C9309E03069(&uLocal_99);
								}
							}
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
							{
								unk_0x3E2E609450787FFE(&uLocal_99);
								unk_0xD1FE26E80A6E2C00(0);
								unk_0x9CEFBE395E148A32(0, iLocal_94, -1, 0, 1f, 1, 0);
								unk_0x939BC11172AA1303(uLocal_99);
								unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
								unk_0xA9351C9309E03069(&uLocal_99);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_54 == 1)
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					if (!unk_0xB6900B8CB0ABBD2B(iLocal_94))
					{
						if (unk_0x0C7EC810080F0459(uLocal_91[0], iLocal_94, 0))
						{
							if (unk_0x090C65D5190A249D(uLocal_91[0], 355471868) != 1 && unk_0x090C65D5190A249D(uLocal_91[0], 355471868) != 0)
							{
								unk_0x62C4DFB4097A1725(iLocal_94, 5f);
								unk_0x792D2AFDA916A34F(iLocal_94, 1);
								unk_0x3E2E609450787FFE(&uLocal_99);
								unk_0x52521828021B7DC5(0, iLocal_94, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x52521828021B7DC5(0, iLocal_94, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x52521828021B7DC5(0, iLocal_94, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x939BC11172AA1303(uLocal_99);
								unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
								unk_0xA9351C9309E03069(&uLocal_99);
								unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
					{
						if (unk_0x465DC424E3211BBE(uLocal_91[0], iLocal_94) && unk_0x465DC424E3211BBE(uLocal_91[1], iLocal_94))
						{
							unk_0x792D2AFDA916A34F(iLocal_94, 1);
							unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
							unk_0x1A95AE7201CE6376(uLocal_91[1], -1);
							unk_0xF1A02DDEC7E15D6E(uLocal_91[1], 1);
							iLocal_55 = 5;
						}
						if (!iLocal_101)
						{
							if (unk_0x465DC424E3211BBE(uLocal_91[0], iLocal_94) && !unk_0x465DC424E3211BBE(uLocal_91[1], iLocal_94))
							{
								unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
								unk_0x1A95AE7201CE6376(uLocal_91[0], -1);
							}
							if (!unk_0x465DC424E3211BBE(uLocal_91[0], iLocal_94) && unk_0x465DC424E3211BBE(uLocal_91[1], iLocal_94))
							{
								unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
								unk_0x1A95AE7201CE6376(uLocal_91[1], -1);
							}
							iLocal_101 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
					unk_0x3E2E609450787FFE(&uLocal_99);
					unk_0xAC59C2795E065D27(0, iLocal_94, unk_0xCC31DB73C65552D8(iLocal_94, 0f, 2f, 0f), 10f, 0, iLocal_98, 262144, 5f, -1f);
					unk_0x54743ED61A1D8CC0(0, iLocal_94, 24, 500);
					unk_0x54743ED61A1D8CC0(0, iLocal_94, 9, 1500);
					unk_0x54743ED61A1D8CC0(0, iLocal_94, 24, 500);
					unk_0x54743ED61A1D8CC0(0, iLocal_94, 11, 1500);
					unk_0x52521828021B7DC5(0, iLocal_94, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					unk_0x939BC11172AA1303(uLocal_99);
					unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
					unk_0xA9351C9309E03069(&uLocal_99);
					unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
				}
			}
			iLocal_55 = 6;
			break;
		
		case 6:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				if (unk_0x090C65D5190A249D(uLocal_91[0], 242628503) == 1)
				{
					if (unk_0xCD88F418C186FA19(uLocal_91[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_54 == 1)
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					if (!unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[1], 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x459A6F82E024C891(&(uLocal_91[1]));
					}
				}
				switch (iLocal_64)
				{
					case 0:
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							if (!unk_0x6B4865E08E90ACC5(uLocal_155[0]))
							{
								uLocal_155[0] = func_155(uLocal_91[0], 0, 145);
							}
							iLocal_64++;
							unk_0xC1B1E9A034A63A62(0);
						}
						break;
					
					case 1:
						if (unk_0x83666F9FB8FEBD4B() > 1000)
						{
							if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
							{
								if (func_137())
								{
									if (unk_0x5D42322C7DB888D0(unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288()), 0))
									{
										fLocal_164 = func_133(unk_0xC8B93D94F8954288(), uLocal_91[0], 1);
										iLocal_64++;
									}
								}
								else if (!iLocal_119)
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_119 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_132();
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							if (func_137())
							{
								if (!iLocal_118)
								{
									if (func_133(unk_0xC8B93D94F8954288(), uLocal_91[0], 1) > (fLocal_164 + 5f))
									{
										if (func_61(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_118 = 1;
										}
									}
								}
							}
							else if (!iLocal_119)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_119 = 1;
								}
							}
						}
						if (func_2())
						{
							if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
							{
								unk_0x0782F0CAEA719452(iLocal_94, 1);
							}
							if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
							{
								unk_0x5356E82C1E5E0C44(&(uLocal_155[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!unk_0x6B4865E08E90ACC5(uLocal_103))
								{
									uLocal_103 = func_130(Local_87, 0);
									unk_0x31FDDAFCCFEFA478(uLocal_103, 269);
									func_128();
								}
							}
							iLocal_62 = 1;
							iLocal_64++;
						}
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							if (func_133(unk_0xC8B93D94F8954288(), uLocal_91[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							unk_0x4EDE34FBADD967A6(1500);
							unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = unk_0x693EBB4F13506457();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_127();
						func_126();
						func_132();
						if (!iLocal_110)
						{
							if ((unk_0x693EBB4F13506457() - iLocal_171) > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = unk_0x693EBB4F13506457();
										iLocal_110 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_109 && !bLocal_108)
							{
								func_125();
							}
							else
							{
								func_122();
								func_121();
								unk_0xE3B1382567189443(1);
							}
						}
						if (func_120(Local_81))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_119())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							if (unk_0xA0C23498D8E0BB93(uLocal_91[0], Local_81, Global_22, 1, 1, 0))
							{
								if (unk_0x6B4865E08E90ACC5(uLocal_102))
								{
									unk_0x5356E82C1E5E0C44(&uLocal_102);
								}
								if (unk_0x6B4865E08E90ACC5(uLocal_103))
								{
									unk_0x5356E82C1E5E0C44(&uLocal_103);
								}
								iLocal_55 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!unk_0xB6900B8CB0ABBD2B(iLocal_94))
						{
							if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_94, 1))
							{
								if (!unk_0x6B4865E08E90ACC5(uLocal_155[0]))
								{
									uLocal_155[0] = func_155(uLocal_91[0], 0, 145);
								}
								if (!unk_0x6B4865E08E90ACC5(uLocal_155[1]))
								{
									uLocal_155[1] = func_155(uLocal_91[1], 0, 145);
								}
								if (!func_4())
								{
									unk_0xC1B1E9A034A63A62(0);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0xB6900B8CB0ABBD2B(iLocal_94))
						{
							unk_0xD1FE26E80A6E2C00(uLocal_91[0]);
							unk_0x9CEFBE395E148A32(uLocal_91[0], iLocal_94, 30000, 2, 2f, 1, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_64++;
						break;
					
					case 2:
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]) && !unk_0xB6900B8CB0ABBD2B(iLocal_94))
						{
							unk_0x3E2E609450787FFE(&uLocal_99);
							unk_0xD1FE26E80A6E2C00(0);
							unk_0x558AAB5A28942470(0, iLocal_94, 1.5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							unk_0x9CEFBE395E148A32(0, iLocal_94, 30000, 1, 2f, 1, 0);
							unk_0x939BC11172AA1303(uLocal_99);
							unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
							unk_0xA9351C9309E03069(&uLocal_99);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_64++;
						break;
					
					case 3:
						func_127();
						func_126();
						if (!iLocal_117)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_117 = 1;
								}
							}
						}
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
							{
								if (!unk_0xB6900B8CB0ABBD2B(uLocal_91[0]) && !unk_0xB6900B8CB0ABBD2B(uLocal_91[1]))
								{
									if (unk_0x0C7EC810080F0459(uLocal_91[0], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0) && unk_0x0C7EC810080F0459(uLocal_91[1], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
									{
										unk_0x6CCF5F545348D54E(255, uLocal_100, joaat("player"));
										func_134();
										iLocal_63 = 0;
										while (iLocal_63 <= (iLocal_90 - 1))
										{
											if (unk_0x6B4865E08E90ACC5(uLocal_155[iLocal_63]))
											{
												unk_0x5356E82C1E5E0C44(&(uLocal_155[iLocal_63]));
											}
											iLocal_63++;
										}
										if (unk_0x6B4865E08E90ACC5(uLocal_158))
										{
											unk_0x5356E82C1E5E0C44(&uLocal_158);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!unk_0x6B4865E08E90ACC5(uLocal_103))
											{
												uLocal_103 = func_130(Local_87, 0);
												unk_0x31FDDAFCCFEFA478(uLocal_103, 269);
												func_128();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_64++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_64++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_64++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_127();
						func_126();
						if (!func_4())
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
								unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
								iLocal_171 = unk_0x693EBB4F13506457();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_127();
						if (iLocal_346 == 0 || iLocal_346 == 9)
						{
							func_126();
						}
						if ((unk_0x693EBB4F13506457() - iLocal_171) > 9000)
						{
							func_113();
						}
						if (iLocal_346 == 9 && ((unk_0x693EBB4F13506457() - iLocal_347) > 6000 && (unk_0x693EBB4F13506457() - iLocal_347) < 6500))
						{
							func_61(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_120(Local_81))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_119())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!unk_0xB6900B8CB0ABBD2B(iLocal_94))
						{
							if ((!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1])) && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_94, 0))
							{
								if (unk_0xA0C23498D8E0BB93(uLocal_91[0], Local_81, Global_22, 1, 1, 0) && unk_0xA0C23498D8E0BB93(uLocal_91[1], Local_81, Global_22, 0, 1, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 6:
						if (unk_0x6B4865E08E90ACC5(uLocal_102))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_102);
						}
						if (unk_0x6B4865E08E90ACC5(uLocal_103))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_103);
						}
						iLocal_55 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_63 = 0;
			while (iLocal_63 <= (iLocal_90 - 1))
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[iLocal_63]))
				{
					unk_0xAAD662D7E0D59F4C(uLocal_91[iLocal_63], 0);
				}
				iLocal_63++;
			}
			if (iLocal_54 == 1)
			{
				if (func_112(1, 0, 1) && iLocal_124 == -1)
				{
					func_6();
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						unk_0x5C384485B80ABDBC(unk_0x974516F979AD07BC(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
						else
						{
							iLocal_124 = 1;
						}
					}
					else
					{
						iLocal_124 = 2;
					}
				}
				if (iLocal_124 == 0)
				{
					func_111();
				}
				if (iLocal_124 == 1)
				{
					func_110();
				}
				if (iLocal_124 == 2)
				{
					func_109();
				}
				if (bLocal_130)
				{
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
					func_30();
				}
			}
			if (iLocal_54 == 2)
			{
				if (func_112(1, 0, 1) && iLocal_124 == -1)
				{
					func_62();
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						unk_0x5C384485B80ABDBC(unk_0x974516F979AD07BC(), (10.5f - 4f), 2, 0);
						unk_0xB28872CD570B6AE9(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						unk_0xB28872CD570B6AE9(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_102(1, 1, 1, 0);
					while (func_4())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (func_2())
					{
						if (unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
					}
				}
				if (iLocal_124 == 0)
				{
					func_99();
				}
				else if (iLocal_124 == 1)
				{
					func_98();
				}
				else if (iLocal_124 == 2)
				{
					func_71();
				}
				if (bLocal_130)
				{
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()
{
	switch (iLocal_126)
	{
		case 0:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				unk_0x5980997C9ACA0572(uLocal_91[0]);
				unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), 10000, 2060, 4);
				unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], 10000, 2060, 4);
			}
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
			{
				unk_0x5980997C9ACA0572(uLocal_91[0]);
				unk_0xE48D9147BC1F4CD7(uLocal_91[1], unk_0xC8B93D94F8954288(), 10000, 2060, 4);
			}
			func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126++;
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					unk_0x6094B3418D5AE59D(uLocal_91[0], Local_84, 1f, -1, 1193033728, 1056964608);
					iLocal_125 = unk_0x693EBB4F13506457() + 500;
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					unk_0x81333BEA4837207C(uLocal_91[1], Local_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_100976.f_32519[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_73(Global_100976.f_32519[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x5F0618A5FDAD55C4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x071958EFED9481F5(iVar1, iVar0, 1);
	}
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_80(5))
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xFD88B4E9AD4F4CC0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
	}
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_2[Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_100976.f_25033.f_233[iVar2 /*69*/]++;
		Global_100976.f_25033.f_233[iVar2 /*69*/].f_1++;
		if (Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_100976.f_25033.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_75(iParam0);
	if (Global_35700 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)
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
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_100976.f_25033[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_100976.f_25033.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_100976.f_25033.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_100976.f_25033.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_100976.f_25033.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_100976.f_25033.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_100976.f_25033.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_100976.f_25033.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_100976.f_25033.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_100976.f_25033[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_100976.f_25033.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_100976.f_25033.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_100976.f_25033.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_100976.f_25033.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_100976.f_25033.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_100976.f_25033.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_100976.f_25033.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_100976.f_25033.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x071958EFED9481F5(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x071958EFED9481F5(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x071958EFED9481F5(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_76(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0) || unk_0xDCC86F723E82125E(Global_2097152[func_78() /*10270*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x77621132305B133B(&(Global_100976.f_25033.f_471), iParam0);
		unk_0x77621132305B133B(&(Global_2097152[func_78() /*10270*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x12F4A48D84A3989D("COUP_RED");
		unk_0xCE59E3E42586D52D(func_77(iParam0));
		unk_0x5EAB76FB4193096C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_77(int iParam0)
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

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_80(int iParam0)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_25033.f_471, iParam0);
	}
	return unk_0xDCC86F723E82125E(Global_2097152[func_78() /*10270*/].f_7698.f_10, iParam0);
}

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xE7748C036820596E(27))
	{
		return 0;
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5F0618A5FDAD55C4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x071958EFED9481F5(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_22(14) && !func_94(iParam0))
	{
		return 0;
	}
	if (unk_0xE7748C036820596E(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_93(&Global_2559690))
	{
		if (func_91(&Global_2559690, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_2559690, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x345CE5A66E49ED43(iParam0))
		{
			return 0;
		}
		if (unk_0xE7748C036820596E(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xE7748C036820596E(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE7748C036820596E(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_2559689 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_72;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_94(int iParam0)
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

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5F0618A5FDAD55C4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x071958EFED9481F5(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0x5F0618A5FDAD55C4(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x071958EFED9481F5(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		unk_0x5F0618A5FDAD55C4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0x5F0618A5FDAD55C4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

void func_98()
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (unk_0xF624ACE12DE97FE9(iVar0))
				{
					if (unk_0x5D42322C7DB888D0(iVar0, 0))
					{
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
							unk_0x5980997C9ACA0572(uLocal_91[0]);
						}
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
							unk_0x5980997C9ACA0572(uLocal_91[1]);
						}
					}
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
			{
				unk_0x3E2E609450787FFE(&uLocal_99);
				unk_0xE5F6BE3F8E937ACE(0, 0, 0);
				unk_0x81333BEA4837207C(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x939BC11172AA1303(uLocal_99);
				unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
				unk_0xA9351C9309E03069(&uLocal_99);
				iLocal_125 = unk_0x693EBB4F13506457() + 1500;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					unk_0x81333BEA4837207C(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = unk_0x693EBB4F13506457() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = unk_0x693EBB4F13506457() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = unk_0x693EBB4F13506457() + 750;
					iLocal_126 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						unk_0x81333BEA4837207C(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = unk_0x693EBB4F13506457() + 3500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						unk_0x81333BEA4837207C(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = unk_0x693EBB4F13506457() + 3500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_126++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_99()
{
	unk_0xC5E066210BF7DEBB();
	switch (iLocal_126)
	{
		case 0:
			unk_0xB1DF6C0157E453DE(0);
			unk_0xB7709513BF7C1AC0(0);
			if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
			{
				if (unk_0xF624ACE12DE97FE9(iLocal_94))
				{
					if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
					{
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
						{
							unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
							unk_0x5980997C9ACA0572(uLocal_91[0]);
							unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], 4000, 2060, 4);
						}
						if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
						{
							unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
							unk_0x5980997C9ACA0572(uLocal_91[1]);
						}
					}
					StringCopy(&cLocal_143, "", 24);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
			{
				uLocal_128 = unk_0x785B53D5654A2FFD(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				uLocal_129 = unk_0x785B53D5654A2FFD(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				unk_0xB61A035EB3575B09(uLocal_128, "HAND_SHAKE", 0.3f);
				unk_0xB61A035EB3575B09(uLocal_129, "HAND_SHAKE", 0.3f);
				unk_0xB306DBE9AFBD23A6(uLocal_129, uLocal_128, 2500, 0, 0);
				unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
				unk_0x98371F41D43CDFA9(Local_81, 8f, 1, 0, 0, 0);
				unk_0xC76B5C68AB6DC7DF(iLocal_94, 1120.551f, 2647.307f, 36.9963f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(iLocal_94, 179.7675f);
				unk_0xF18809B65D87E197(iLocal_94);
				iLocal_125 = unk_0x693EBB4F13506457() + 2500;
				iLocal_126++;
			}
			break;
		
		case 2:
			if (iLocal_125 - 500) < unk_0x693EBB4F13506457()
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					if (unk_0x277ECDA23D8CCEB4(uLocal_91[1], 0))
					{
						unk_0x3E2E609450787FFE(&uLocal_99);
						unk_0x81333BEA4837207C(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
						unk_0x939BC11172AA1303(uLocal_99);
						unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
						unk_0xA9351C9309E03069(&uLocal_99);
						unk_0xF1A02DDEC7E15D6E(uLocal_91[1], 1);
					}
				}
			}
			if (iLocal_125 - 1000) < unk_0x693EBB4F13506457()
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					if (unk_0x277ECDA23D8CCEB4(uLocal_91[0], 0))
					{
						unk_0x3E2E609450787FFE(&uLocal_99);
						unk_0x81333BEA4837207C(0, Local_84 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 1193033728);
						unk_0x939BC11172AA1303(uLocal_99);
						unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
						unk_0xA9351C9309E03069(&uLocal_99);
						unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
					}
				}
			}
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				unk_0xF24FE6EB928DD893(uLocal_128, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_129, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				unk_0xB306DBE9AFBD23A6(uLocal_129, uLocal_128, 5000, 0, 0);
				unk_0x11592AACD6BAEC7F();
				iLocal_125 = unk_0x693EBB4F13506457() + 6000;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				unk_0xF24FE6EB928DD893(uLocal_128, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_129, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0xB306DBE9AFBD23A6(uLocal_129, uLocal_128, 1500, 1, 1);
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					unk_0xC76B5C68AB6DC7DF(uLocal_91[0], 1141.156f, 2643.205f, 37.1487f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(uLocal_91[0], 262.7369f);
					unk_0xC76B5C68AB6DC7DF(uLocal_91[1], 1140.152f, 2644.149f, 37.1487f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(uLocal_91[1], 262.1522f);
				}
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					unk_0xE5F6BE3F8E937ACE(unk_0xC8B93D94F8954288(), 0, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_125 = unk_0x693EBB4F13506457() + 1700;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = unk_0x693EBB4F13506457() + 5500;
						iLocal_126++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = unk_0x693EBB4F13506457() + 5500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			unk_0x11592AACD6BAEC7F();
			unk_0xEE8A34E761BB8EB0(unk_0xC8B93D94F8954288(), 0);
			func_102(0, 1, 1, 0);
			unk_0x26B3B761603F5232(&(uLocal_91[0]));
			unk_0x26B3B761603F5232(&(uLocal_91[1]));
			if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
			{
				unk_0x0782F0CAEA719452(iLocal_94, 7);
			}
			if (iLocal_131)
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_94))
				{
					unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
					unk_0x4A6381DCF16569D3(iLocal_94, 1);
					unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
				}
			}
			else
			{
				unk_0xCEDE7EE5970B48B8(0, 0, 3, 0);
			}
			unk_0x7D1795B1E14EDFFD(uLocal_128, 0);
			unk_0x8C67D2FDE360FBCA(0);
			unk_0x0F9FDCEB321235AB(-7f, 1065353216);
			unk_0xB1DF6C0157E453DE(1);
			unk_0xB7709513BF7C1AC0(1);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			func_72(func_17(), 1, 40, 0, 1);
			bLocal_130 = true;
	}
	if (iLocal_126 != 0)
	{
		if (func_100(1000))
		{
			func_62();
			iLocal_131 = 1;
			iLocal_126 = 7;
		}
	}
}

int func_100(int iParam0)
{
	if (unk_0xB66DD474AA9E764E())
	{
		if ((unk_0x693EBB4F13506457() - Global_28) > iParam0)
		{
			Global_27 = unk_0x693EBB4F13506457();
		}
		Global_28 = unk_0x693EBB4F13506457();
		if ((unk_0x693EBB4F13506457() - Global_27) > iParam0)
		{
			if (func_101())
			{
				Global_27 = unk_0x693EBB4F13506457();
				return 1;
			}
		}
	}
	return 0;
}

int func_101()
{
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_102(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_108(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_14())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_107(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_108(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_107(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_103(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_103(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_104()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_105(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_106(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_106(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_107(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_108(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

void func_109()
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					unk_0x5980997C9ACA0572(uLocal_91[0]);
					unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), 10000, 2060, 4);
					unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], 10000, 2060, 4);
				}
				if (bLocal_108)
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_126++;
			}
			break;
		
		case 1:
			iLocal_125 = unk_0x693EBB4F13506457() + 3000;
			iLocal_126++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				unk_0x3E2E609450787FFE(&uLocal_99);
				unk_0xE5F6BE3F8E937ACE(0, 0, 0);
				unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 1800);
				unk_0x81333BEA4837207C(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x5323F488E6A1B660(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x939BC11172AA1303(uLocal_99);
				unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
				unk_0xA9351C9309E03069(&uLocal_99);
				unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
				iLocal_125 = unk_0x693EBB4F13506457() + 2000;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_110()
{
	int iVar0;
	
	switch (iLocal_126)
	{
		case 0:
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (unk_0xF624ACE12DE97FE9(iVar0) && !func_4())
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
						unk_0x5980997C9ACA0572(uLocal_91[0]);
						unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), 10000, 2060, 4);
						unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			iLocal_126++;
			break;
		
		case 3:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				unk_0x3E2E609450787FFE(&uLocal_99);
				unk_0xE5F6BE3F8E937ACE(0, 0, 4194304);
				unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 1800);
				unk_0x81333BEA4837207C(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x5323F488E6A1B660(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x939BC11172AA1303(uLocal_99);
				unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
				unk_0xA9351C9309E03069(&uLocal_99);
				unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
			}
			func_64(uLocal_91[0], 120000, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			iLocal_125 = unk_0x693EBB4F13506457() + 3000;
			iLocal_126++;
			break;
		
		case 4:
			iLocal_125 = unk_0x693EBB4F13506457() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 5:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				iLocal_126++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_111()
{
	switch (iLocal_126)
	{
		case 0:
			if (unk_0x5D42322C7DB888D0(iLocal_94, 0))
			{
				if (unk_0xF624ACE12DE97FE9(iLocal_94) && !func_4())
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
						unk_0x5980997C9ACA0572(uLocal_91[0]);
						unk_0xE48D9147BC1F4CD7(uLocal_91[0], unk_0xC8B93D94F8954288(), 10000, 2060, 4);
						unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				unk_0x3E2E609450787FFE(&uLocal_99);
				unk_0xE5F6BE3F8E937ACE(0, 0, 4194304);
				unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 1800);
				unk_0x81333BEA4837207C(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x5323F488E6A1B660(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x939BC11172AA1303(uLocal_99);
				unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
				unk_0xA9351C9309E03069(&uLocal_99);
				unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
				func_64(uLocal_91[0], 120000, 0);
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				iLocal_125 = unk_0x693EBB4F13506457() + 3000;
				iLocal_126++;
			}
			break;
		
		case 3:
			iLocal_125 = unk_0x693EBB4F13506457() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < unk_0x693EBB4F13506457())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			iLocal_126++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6DAFE4284D2E6AD0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (bParam0)
		{
			if (unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x3E4CBCCFB5F133F1(iVar0) < 0.95f || unk_0x3E4CBCCFB5F133F1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = unk_0xBFFCA1BD025B90B2();
		if (iVar1 != 0)
		{
			iVar2 = unk_0xA9B6C2A8F9FE269A(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_118(64) || unk_0x0139E142C27412BC(0, 86)) || unk_0x0139E142C27412BC(0, 71)) || unk_0x0139E142C27412BC(0, 72)) || unk_0x0139E142C27412BC(0, 76)) || unk_0x0139E142C27412BC(0, 73)) || unk_0x0139E142C27412BC(0, 68)) || unk_0x0139E142C27412BC(0, 75)) || iVar0)
		{
			unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
		}
	}
	switch (iLocal_346)
	{
		case 0:
			if (func_117())
			{
				unk_0xE48D9147BC1F4CD7(uLocal_91[0], uLocal_91[1], -1, 2060, 4);
				unk_0xE48D9147BC1F4CD7(uLocal_91[1], uLocal_91[0], -1, 2060, 4);
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					unk_0x3E2E609450787FFE(&uLocal_99);
					unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x939BC11172AA1303(uLocal_99);
					unk_0xBFE865E3B513451B(uLocal_91[0], uLocal_99);
					unk_0xA9351C9309E03069(&uLocal_99);
					unk_0x3E2E609450787FFE(&uLocal_99);
					unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x939BC11172AA1303(uLocal_99);
					unk_0xBFE865E3B513451B(uLocal_91[1], uLocal_99);
					unk_0xA9351C9309E03069(&uLocal_99);
					iLocal_347 = unk_0x693EBB4F13506457();
					iLocal_346++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_347 = unk_0x693EBB4F13506457();
				iLocal_346++;
			}
			break;
		
		case 2:
			if (func_117())
			{
				if ((unk_0x693EBB4F13506457() - iLocal_347) > 5000)
				{
					if (func_61(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = unk_0x693EBB4F13506457();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 3:
			if ((unk_0x693EBB4F13506457() - iLocal_347) > 15000)
			{
				if (func_117())
				{
					unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		
		case 4:
			if (func_117())
			{
				func_115();
				if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						unk_0x5323F488E6A1B660(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_347 = unk_0x693EBB4F13506457();
						iLocal_346++;
					}
				}
			}
			else if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
			{
				unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
				unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
		
		case 5:
			if (func_117())
			{
				func_115();
				func_114();
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0x275BEBE583A163B5(uLocal_91[1], 0), 0))
				{
					if ((unk_0x693EBB4F13506457() - iLocal_347) > 15000)
					{
						bVar3 = false;
						iVar4 = unk_0xBFFCA1BD025B90B2();
						if (iVar4 != 0)
						{
							iVar5 = unk_0xA9B6C2A8F9FE269A(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							unk_0x3E2E609450787FFE(&uLocal_99);
							unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x5323F488E6A1B660(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x939BC11172AA1303(uLocal_99);
							unk_0xBFE865E3B513451B(unk_0xC8B93D94F8954288(), uLocal_99);
							unk_0xA9351C9309E03069(&uLocal_99);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = unk_0x693EBB4F13506457();
								iLocal_346++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = unk_0x693EBB4F13506457();
								iLocal_346++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = unk_0x693EBB4F13506457() + 14000;
								iLocal_346++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_115();
			func_114();
			if ((unk_0x693EBB4F13506457() - iLocal_347) > 5000 && func_117())
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0x275BEBE583A163B5(uLocal_91[1], 0), 0))
				{
					if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x5323F488E6A1B660(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_346++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_115();
			if (func_117())
			{
				if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						unk_0x3A2304A561B7D162(unk_0x275BEBE583A163B5(uLocal_91[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_347 = unk_0x693EBB4F13506457();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 8:
			func_115();
			if (func_117())
			{
				if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), unk_0x275BEBE583A163B5(uLocal_91[1], 0), 0))
				{
					if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x5323F488E6A1B660(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_346 = 6;
						}
					}
				}
			}
			if ((unk_0x693EBB4F13506457() - iLocal_347) > 10000)
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
				{
					unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
					unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
					iLocal_347 = unk_0x693EBB4F13506457();
					iLocal_346++;
				}
			}
			break;
	}
}

void func_114()
{
	if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
	{
		if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(uLocal_91[0], 0), 0))
		{
			if (unk_0xCD61E9D5CABC7E35(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && unk_0x853B39ECA83DA242(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					unk_0x3A2304A561B7D162(unk_0x275BEBE583A163B5(uLocal_91[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x90EA80826C00FB10(-1, "SUSPENSION_SCRIPT_FORCE", unk_0x275BEBE583A163B5(uLocal_91[0], 0), 0, 0, 0);
				}
			}
		}
	}
}

void func_115()
{
	unk_0x5B53B03A14798328();
	func_116();
}

void func_116()
{
	Global_17118.f_134 = 1;
}

int func_117()
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
	{
		if (unk_0x277ECDA23D8CCEB4(uLocal_91[1], 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(uLocal_91[1], 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
				{
					if (unk_0x0C7EC810080F0459(uLocal_91[0], iVar0, 0))
					{
						if (unk_0xC0ADAF0814175B68(iVar0, 2) == uLocal_91[0] && unk_0xC0ADAF0814175B68(iVar0, 1) == uLocal_91[1])
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

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x01153D747C13A17C(2, 195) - 128);
	iVar1 = (unk_0x01153D747C13A17C(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (func_17() == 2)
	{
		if (func_59())
		{
			if (unk_0x4F982ED5336EA899(-1014.154f, 4881.411f, 245.0001f, unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A()), 0), 1) < 400f)
			{
				if (!Global_25354)
				{
					unk_0x233432976E597324("AC_EN_ROUTE_CULT");
					Global_25354 = 1;
					if (!Global_25353)
					{
						Global_25353 = 1;
						return 1;
					}
				}
			}
			else if (Global_25354)
			{
				unk_0x233432976E597324("AC_LEFT_AREA");
				Global_25354 = 0;
			}
		}
	}
	return 0;
}

int func_120(struct<3> Param0)
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_25352)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Param0) > (fLocal_47 + 200f) || unk_0x4F982ED5336EA899(-1014.154f, 4881.411f, 245.0001f, unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A()), 0), 1) < 400f)
			{
				Global_25352 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_121()
{
	if (!bLocal_108)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_110 && !iLocal_134) && (unk_0x693EBB4F13506457() - iLocal_171) > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_134 = 1;
				}
			}
		}
	}
	if (iLocal_134 && !iLocal_135)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_149 = unk_0x693EBB4F13506457() + 6000;
			iLocal_135 = 1;
		}
	}
	if (!bLocal_108)
	{
		if ((iLocal_134 && !iLocal_133) && iLocal_149 < unk_0x693EBB4F13506457())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_135 = 0;
					iLocal_133 = 1;
				}
			}
		}
	}
	else if ((bLocal_108 && !iLocal_132) && iLocal_149 < unk_0x693EBB4F13506457())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_135 = 0;
				iLocal_132 = 1;
			}
		}
	}
}

void func_122()
{
	if (func_2() && iLocal_111 < 2)
	{
		if ((unk_0x488FA6260E4D6D80(unk_0xA34E7C2A5118D638()) > 0 && unk_0x488FA6260E4D6D80(unk_0xA34E7C2A5118D638()) < 100) || unk_0x955A04DD5208F4B7(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 += 6;
			}
		}
		func_123(Local_160, (unk_0x693EBB4F13506457() - iLocal_159));
	}
	if (iLocal_163 > 17)
	{
		iLocal_109 = 1;
	}
}

void func_123(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_2())
	{
		if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
		{
			Var0 = { unk_0x8DB48F88A836B346(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_124(Var3, iParam3) };
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
		{
			if (!unk_0xA4D2826AAFA337FD(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = unk_0x693EBB4F13506457() + 400;
				}
				else if (iLocal_165 < unk_0x693EBB4F13506457())
				{
					iLocal_163 += 3;
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}
	if (Var3.f_1 > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_1 < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 > 0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 < -0.025f)
	{
		iLocal_163++;
		if (!func_27("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_124(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam3));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam3));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam3));
	return Var0;
}

void func_125()
{
	float fVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
					{
						unk_0x3440777B8DAAC4C1(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					iLocal_111++;
				}
				break;
			
			case 1:
				if (unk_0xC9D9444186B5A374() > 3000 || !func_4())
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
						unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_111++;
					}
				}
				break;
			
			case 2:
				if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
					fVar0 = unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_1", sLocal_114);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_105)
						{
							unk_0xB1770482EB31C195("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_105 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_106)
						{
							unk_0xB1770482EB31C195("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_106 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_107)
						{
							unk_0xB1770482EB31C195("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_107 = 1;
						}
					}
					if (unk_0x853B39ECA83DA242(uLocal_91[0], "random@drunk_driver_1", sLocal_114) > 0.8f)
					{
						iLocal_111++;
					}
				}
				break;
			
			case 3:
				if (!unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
				}
				if (func_61(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_105 = 0;
					iLocal_111++;
				}
				break;
			
			case 4:
				unk_0x7A2D5FC5F94932AA(uLocal_112);
				bLocal_108 = true;
				break;
			}
	}
}

void func_126()
{
	if (unk_0x2EE26A43F82C8F1B(unk_0xC8B93D94F8954288()))
	{
		if (!iLocal_168)
		{
			iLocal_166 = unk_0x693EBB4F13506457();
			iLocal_168 = 1;
		}
		else
		{
			iLocal_167 = unk_0x693EBB4F13506457();
		}
	}
	else
	{
		iLocal_167 = 0;
		iLocal_168 = 0;
		iLocal_169 = 0;
	}
	if ((iLocal_167 - iLocal_166) > 50000 && !iLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_169 = 1;
	}
	if ((iLocal_167 - iLocal_166) > 60000 && iLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
		{
			unk_0xF7F92ABBE23C8EA8(uLocal_91[0], 1193033728, 0);
			func_64(uLocal_91[0], 120000, 0);
			unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
			if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
			{
				unk_0x5980997C9ACA0572(uLocal_91[0]);
			}
			unk_0x558AAB5A28942470(uLocal_91[1], uLocal_91[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			func_64(uLocal_91[1], 120000, 0);
			unk_0xF1A02DDEC7E15D6E(uLocal_91[1], 1);
			if (unk_0x5BE4C4CB01F0877F(uLocal_91[1]))
			{
				unk_0x5980997C9ACA0572(uLocal_91[1]);
			}
		}
		func_60();
	}
}

void func_127()
{
	if (iLocal_54 == 1)
	{
		if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
		{
			if (!unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_137() || unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
				{
					unk_0x13B202E60E04C733(uLocal_91[0], func_57());
					unk_0xCB56FE462615766F(uLocal_91[0], 1);
					unk_0x64CD20398FAC9617(uLocal_91[0], 0);
				}
			}
			else if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
			{
				unk_0x5980997C9ACA0572(uLocal_91[0]);
			}
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (unk_0x0C7EC810080F0459(uLocal_91[0], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
				{
					if ((!unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3) && !unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3)) && !unk_0xC0AE63CA97F3FF6A(uLocal_91[0]))
					{
						unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_140())
					{
						func_56(0);
						iLocal_120 = 0;
					}
				}
				else if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					unk_0x38D45164B542F486(uLocal_91[0], 0, 0);
				}
			}
			else
			{
				if (unk_0x277ECDA23D8CCEB4(uLocal_91[0], 0))
				{
					if (unk_0xCD61E9D5CABC7E35(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
					{
						unk_0x38D45164B542F486(uLocal_91[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_120)
				{
					func_56(1);
					iLocal_120 = 1;
				}
			}
			if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 8f, 8f, 8f, 0, 1, 0) || unk_0x9A8EC8D5B69E3842(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x6B4865E08E90ACC5(uLocal_155[0]))
				{
					unk_0x5356E82C1E5E0C44(&(uLocal_155[0]));
				}
				if (!unk_0x6B4865E08E90ACC5(uLocal_102))
				{
					uLocal_102 = func_130(Local_81, 1);
				}
			}
			else
			{
				if (!unk_0x6B4865E08E90ACC5(uLocal_155[0]))
				{
					uLocal_155[0] = func_155(uLocal_91[0], 0, 145);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_102))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_102);
				}
			}
		}
	}
	if (iLocal_54 == 2)
	{
		if ((!unk_0xB6900B8CB0ABBD2B(iLocal_94) && !unk_0x2DC9BA2299B45EA6(uLocal_91[0])) && !unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
		{
			if (!unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 150f, 150f, 150f, 0, 1, 0) || !unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
					{
						if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
						{
							unk_0x5980997C9ACA0572(uLocal_91[0]);
						}
						unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
						unk_0x622E764F80DBF8B7(uLocal_91[0], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
						func_64(uLocal_91[0], 120000, 0);
						unk_0xF1A02DDEC7E15D6E(uLocal_91[0], 1);
					}
				}
				if (unk_0x95CCECA3948CFE7B(uLocal_91[1]))
				{
					if (!unk_0x2DC9BA2299B45EA6(uLocal_91[1]))
					{
						if (unk_0x5BE4C4CB01F0877F(uLocal_91[1]))
						{
							unk_0x5980997C9ACA0572(uLocal_91[1]);
						}
						unk_0x5124C5FA52D2AF3E(uLocal_91[1]);
						unk_0x622E764F80DBF8B7(uLocal_91[1], unk_0xC8B93D94F8954288(), 250f, -1, 0, 0);
						func_64(uLocal_91[1], 120000, 0);
						unk_0xF1A02DDEC7E15D6E(uLocal_91[1], 1);
					}
				}
				func_60();
			}
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_94, 0))
			{
				if (unk_0x0C7EC810080F0459(uLocal_91[0], iLocal_94, 0) && unk_0x0C7EC810080F0459(uLocal_91[1], iLocal_94, 0))
				{
					if (func_140())
					{
						func_56(0);
						iLocal_120 = 0;
					}
					if (!unk_0x6B4865E08E90ACC5(uLocal_102))
					{
						uLocal_102 = func_130(Local_81, 1);
					}
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_158))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_158);
				}
			}
			else
			{
				if ((func_4() && !iLocal_120) && iLocal_64 > 3)
				{
					func_56(1);
					iLocal_120 = 1;
				}
				if (!unk_0x6B4865E08E90ACC5(uLocal_158))
				{
					uLocal_158 = func_138(iLocal_94, 0, 0);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_102))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_102);
				}
			}
		}
	}
}

void func_128()
{
	if (func_17() == 2)
	{
		if (!Global_25351)
		{
			func_129("CULT_BLIP_HELP", -1);
			Global_25351 = 1;
		}
	}
}

void func_129(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

var func_130(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0x3734DA1F207E7166(uVar0, func_131(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
	unk_0x706ABF1139F36482(uVar0, iParam3);
	return uVar0;
}

float func_131(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_132()
{
	if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
		{
			if (!func_137())
			{
				if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
				{
					unk_0x5980997C9ACA0572(uLocal_91[0]);
				}
				if (unk_0x090C65D5190A249D(uLocal_91[0], 1227113341) != 1 && unk_0x090C65D5190A249D(uLocal_91[0], 1227113341) != 0)
				{
					unk_0x1510D3A1E178AAEF(uLocal_91[0], unk_0xC8B93D94F8954288(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x277ECDA23D8CCEB4(uLocal_91[0], 0))
				{
					unk_0xE5F6BE3F8E937ACE(uLocal_91[0], 0, 0);
				}
				if (!iLocal_122)
				{
					if (!func_4())
					{
						func_61(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_122 = 1;
					}
				}
			}
			else
			{
				iLocal_122 = 0;
				if (unk_0x090C65D5190A249D(uLocal_91[0], 1227113341) == 1 && unk_0x090C65D5190A249D(uLocal_91[0], 1227113341) == 0)
				{
					unk_0x5124C5FA52D2AF3E(uLocal_91[0]);
				}
			}
		}
		else if (!unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
		{
			unk_0x13B202E60E04C733(uLocal_91[0], func_57());
			unk_0xCB56FE462615766F(uLocal_91[0], 1);
			unk_0x64CD20398FAC9617(uLocal_91[0], 0);
		}
	}
}

float func_133(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(uParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

void func_134()
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_25349 = 1;
		}
	}
}

void func_135(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x2DC9BA2299B45EA6(iParam0))
			{
				unk_0x3E2E609450787FFE(&uLocal_99);
				unk_0xD1FE26E80A6E2C00(0);
				unk_0xE48D9147BC1F4CD7(0, unk_0xC8B93D94F8954288(), -1, 2060, 4);
				unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), -1);
				unk_0x939BC11172AA1303(uLocal_99);
				unk_0xBFE865E3B513451B(iParam0, uLocal_99);
				unk_0xA9351C9309E03069(&uLocal_99);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x2DC9BA2299B45EA6(iParam0))
			{
				if (unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DC9BA2299B45EA6(iParam0))
			{
				if (!unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_136()
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_170++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_170++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_170++;
		}
	}
}

int func_137()
{
	int iVar0;
	
	if (iLocal_54 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_54 == 2)
	{
		iVar0 = 2;
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (unk_0x5D42322C7DB888D0(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
		{
			if ((((((!unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()) && !unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288())) && !unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288())) && !unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288())) && !unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288())) && !unk_0x317B32CC600C880A(unk_0xC8B93D94F8954288())) && !unk_0x65C04D5A473900A3(unk_0xC8B93D94F8954288(), joaat("rhino")))
			{
				if (unk_0x7EFD275DF858497F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		if (unk_0x5D42322C7DB888D0(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288()), 0))
		{
			if (((((!unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288()))) && !unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288())))) && !unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288())))) && !unk_0x9DABB329596B1BD6(unk_0x6D5BB810CC209E15(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288())))) && !unk_0xC9E810FB9A83EF58(unk_0x6D5BB810CC209E15(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288())))) && unk_0x6D5BB810CC209E15(unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_138(int iParam0, bool bParam1, bool bParam2)
{
	return func_139(iParam0, !bParam1, bParam2);
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_131(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_131(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_131(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_140()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_141()
{
	if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
	{
		if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_115)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
			if (!iLocal_116)
			{
				if (func_61(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_142()
{
	if (unk_0x6B4865E08E90ACC5(uLocal_151))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_151);
	}
	iLocal_63 = 0;
	while (iLocal_63 <= (iLocal_90 - 1))
	{
		if (!unk_0x6B4865E08E90ACC5(uLocal_155[iLocal_63]))
		{
			uLocal_155[iLocal_63] = func_155(uLocal_91[iLocal_63], 0, 145);
			unk_0xEBA460B665086587(uLocal_155[iLocal_63], 0);
		}
		iLocal_63++;
	}
}

void func_143()
{
	unk_0x23F5D6D803B5B903();
	Global_16704 = 0;
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100032, unk_0xC4E68AF0B559FAC4(), 24);
		Global_100026 = 1;
	}
	else
	{
		StringCopy(&Global_100032, "NULL", 24);
		Global_100026 = 0;
	}
}

int func_145(int iParam0)
{
	if (func_148())
	{
		Global_100966 = 1;
		Global_100963 = unk_0x693EBB4F13506457();
		if (func_43(Global_100965))
		{
			func_146(0);
		}
		unk_0x4968FFFAEFDFD625(1, "RE_TITLE");
		if (iParam0 && func_43(Global_100965))
		{
			unk_0x837755F6FCE9B0E2();
		}
		return 1;
	}
	return 0;
}

void func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_100976.f_29464.f_2 < 3)
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_129(func_147(iParam0), -1);
					Global_100976.f_29464.f_2++;
					unk_0x59A0729D503ED758(&Global_100972, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xDCC86F723E82125E(Global_100972, 1))
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_129(func_147(iParam0), -1);
					Global_100976.f_29464.f_3++;
					unk_0x59A0729D503ED758(&Global_100972, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xDCC86F723E82125E(Global_100972, 2))
			{
				if (!unk_0xB5AB8AD14244C87F())
				{
					func_129(func_147(iParam0), -1);
					Global_100976.f_29464.f_4++;
					unk_0x59A0729D503ED758(&Global_100972, 2);
				}
			}
			break;
	}
}

char* func_147(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_148()
{
	switch (func_149(&Global_25174, 0, 5, 0, unk_0x46CF50E0E5A24635()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_149(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_153(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0x9B5503F5CD2CEB12(unk_0x1A96BAEAC664567A(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBD11A7205F364E1A(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_151(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_150(uParam0, iParam4);
		}
	}
	return 2;
}

void func_150(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_35700);
}

int func_152(int iParam0, int iParam1)
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

int func_153(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_154(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16705 = 1;
	Global_16709 = 0;
	Global_16707 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

var func_155(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_139(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6B4865E08E90ACC5(uVar0)) && unk_0xF2831232D38CD691(&(Global_100976.f_32519[iParam2 /*29*/].f_3)))
	{
		unk_0x8755DAC584918BF9(uVar0, &(Global_100976.f_32519[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_156()
{
	if (func_158())
	{
		sLocal_113 = "drunk_idle_van";
		sLocal_114 = "vomit_van";
	}
	else if (func_157())
	{
		sLocal_113 = "drunk_idle_low";
		sLocal_114 = "vomit_low";
	}
	else
	{
		sLocal_113 = "drunk_idle";
		sLocal_114 = "vomit_outside";
	}
}

int func_157()
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(uLocal_91[0], 0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(uLocal_91[0], 0)))
		{
			iVar0 = unk_0x38E553FFEC2B7BCC(unk_0x275BEBE583A163B5(uLocal_91[0], 0));
			if (((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(uLocal_91[0], 0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(uLocal_91[0], 0)))
		{
			iVar0 = unk_0x38E553FFEC2B7BCC(unk_0x275BEBE583A163B5(uLocal_91[0], 0));
			if ((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_159()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		iVar0 = unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288());
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			iVar1 = unk_0xC0ADAF0814175B68(iVar0, 0);
			if (!unk_0x2DC9BA2299B45EA6(iVar1))
			{
				if (iVar1 != unk_0xC8B93D94F8954288())
				{
					if (unk_0xD28A89C669EAD2E4(iVar1))
					{
						if (!unk_0xF0F36915A8ADB923(iVar1, unk_0xC8B93D94F8954288()))
						{
							unk_0xE48D9147BC1F4CD7(iVar1, unk_0xC8B93D94F8954288(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_160()
{
	if (!iLocal_61)
	{
		func_162(39, 1);
		func_162(40, 1);
		func_162(41, 1);
		func_162(42, 1);
		func_162(43, 1);
		func_162(44, 1);
		unk_0x98371F41D43CDFA9(Local_68, 8f, 1, 0, 0, 0);
		unk_0x8738B068D97CDC64(Local_68 - Vector(8f, 8f, 8f), Local_68 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		unk_0xE6D99A6809A1F8CE(Local_76 - Vector(10f, 15f, 15f), Local_76 + Vector(10f, 15f, 15f), 0, 1);
		unk_0xE6D99A6809A1F8CE(Local_81 - Vector(10f, 15f, 15f), Local_81 + Vector(10f, 15f, 15f), 0, 1);
		unk_0x59A0729D503ED758(&uLocal_150, 5);
		if (func_17() == 0)
		{
			func_161(&uLocal_173, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_161(&uLocal_173, 1, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_161(&uLocal_173, 2, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
		}
		unk_0x4A606A8BE6924115("rghDrunkPeds", &uLocal_100);
		iLocal_94 = unk_0xD53B4DCC7B2C8551(iLocal_98, Local_76, fLocal_79, 1, 1);
		unk_0x3F6DAED48C8A6943(iLocal_94);
		unk_0xF18809B65D87E197(iLocal_94);
		unk_0xB7FAA1C591A4664F(iLocal_98, 1);
		unk_0x0782F0CAEA719452(iLocal_94, 3);
		unk_0x48B4BE828B448C49(iLocal_94, 1);
		iLocal_80 = unk_0xD3A4099D2845F152(iLocal_94);
		uLocal_91[0] = unk_0x71DD988C1B903F5D(26, iLocal_96, Local_68, fLocal_71, 1, 1);
		unk_0xAAD662D7E0D59F4C(uLocal_91[0], 1);
		unk_0xCBD60E398042F554(uLocal_91[0], uLocal_100);
		unk_0xC778754E36F3FFD6(uLocal_91[0], 185, 1);
		unk_0xF36EA652E4A6CED0(uLocal_91[0], 65536, 1);
		unk_0x4BBD72565A0AF033(iLocal_96);
		unk_0x63E00E88AE3C86A3(uLocal_91[0], 1);
		uLocal_91[1] = unk_0x71DD988C1B903F5D(26, iLocal_97, Local_72, fLocal_75, 1, 1);
		unk_0xAAD662D7E0D59F4C(uLocal_91[1], 1);
		unk_0xCBD60E398042F554(uLocal_91[1], uLocal_100);
		unk_0xC778754E36F3FFD6(uLocal_91[1], 185, 1);
		unk_0xF36EA652E4A6CED0(uLocal_91[1], 65536, 1);
		unk_0x63E00E88AE3C86A3(uLocal_91[1], 1);
		unk_0x6CCF5F545348D54E(5, uLocal_100, joaat("player"));
		unk_0x4BBD72565A0AF033(iLocal_97);
		if (iLocal_54 == 1)
		{
			unk_0x5323F488E6A1B660(uLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x5323F488E6A1B660(uLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x9740820061E05C06(uLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			unk_0x9740820061E05C06(uLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			unk_0x8C245572EDB27776(uLocal_91[0], 0, 1, 2, 0);
			unk_0x8C245572EDB27776(uLocal_91[0], 3, 0, 1, 0);
			unk_0x8C245572EDB27776(uLocal_91[0], 4, 0, 1, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 0, 1, 1, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 3, 0, 0, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 4, 0, 1, 0);
			unk_0x3440777B8DAAC4C1(iLocal_94, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[0], 206, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[0], 299, 1);
			unk_0x58F516BB5E324590(uLocal_91[0], 0);
			unk_0xB7F5BF6BE1CE7627(uLocal_91[0], "REDR1Drunk1_AI_Drunk");
			unk_0xB7F5BF6BE1CE7627(uLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_161(&uLocal_173, 3, uLocal_91[0], "REDR1Drunk1", 0, 1);
			func_161(&uLocal_173, 4, uLocal_91[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_54 == 2)
		{
			unk_0x8738B068D97CDC64(Local_81 - Vector(10f, 50f, 30f), Local_81 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			unk_0x0CE9795408B4B974(iLocal_94, 1);
			unk_0x8C245572EDB27776(uLocal_91[1], 0, 0, 0, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 2, 0, 2, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 3, 1, 1, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 4, 1, 2, 0);
			unk_0x8C245572EDB27776(uLocal_91[1], 8, 0, 0, 0);
			unk_0xC778754E36F3FFD6(uLocal_91[0], 134, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[1], 134, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[0], 26, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[1], 26, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[0], 206, 1);
			unk_0xC778754E36F3FFD6(uLocal_91[1], 206, 1);
			unk_0x58F516BB5E324590(uLocal_91[0], 0);
			unk_0x58F516BB5E324590(uLocal_91[1], 0);
			unk_0xFCA99C3640D1F1B5(uLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0xE48D9147BC1F4CD7(uLocal_91[0], uLocal_91[1], -1, 2060, 4);
			unk_0xFCA99C3640D1F1B5(uLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x8EB9A60FB4C37A34(uLocal_91[1], 0);
			unk_0xE48D9147BC1F4CD7(uLocal_91[1], uLocal_91[0], -1, 2060, 4);
			unk_0x9740820061E05C06(uLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			unk_0x9740820061E05C06(uLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			unk_0xB7F5BF6BE1CE7627(uLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0xB7F5BF6BE1CE7627(uLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_161(&uLocal_173, 3, uLocal_91[0], "REDR2DrunkM", 0, 1);
			func_161(&uLocal_173, 4, uLocal_91[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_61 = 1;
	}
}

void func_161(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

void func_162(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_169(iParam0, 2, 1))
		{
			func_168(iParam0, 2, 1);
		}
	}
	else if (func_169(iParam0, 2, 1))
	{
		func_163(iParam0, 2, 1);
	}
}

void func_163(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x77621132305B133B(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_38() == 0)
		{
			uVar0 = func_166(func_167(iParam0), -1, 0);
			unk_0x77621132305B133B(&uVar0, iParam1);
			func_164(func_167(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_165(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, iParam3);
	}
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_165(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3693;
			break;
		
		default:
			break;
	}
	return 3790;
}

void func_168(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_38() == 0)
		{
			uVar0 = func_166(func_167(iParam0), -1, 0);
			unk_0x59A0729D503ED758(&uVar0, iParam1);
			func_164(func_167(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

int func_169(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_38() == 0)
		{
			return unk_0xDCC86F723E82125E(func_166(func_167(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_170()
{
	unk_0x7567CEA8E6B5340B(iLocal_96);
	unk_0x7567CEA8E6B5340B(iLocal_98);
	unk_0x7567CEA8E6B5340B(iLocal_97);
	if (iLocal_54 == 1)
	{
		unk_0x8CBF0FAEA6BA6D37();
		unk_0xC0E8B67A4385D37D("random@drunk_driver_1");
		unk_0x2A06B47BBED4FB70("MOVE_M@DRUNK@VERYDRUNK");
		unk_0xC4C141A321D45FD8("Taxi_Vomit", 0);
	}
	else if (iLocal_54 == 2)
	{
		unk_0xC0E8B67A4385D37D("random@drunk_driver_2");
		unk_0xC0E8B67A4385D37D("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0xC0E8B67A4385D37D("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0x2A06B47BBED4FB70("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0x0845149A26DABBA5(iLocal_96) && unk_0x0845149A26DABBA5(iLocal_98)) && unk_0xB8DD164B85EDF0BC("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0x0845149A26DABBA5(iLocal_97))
	{
		if (iLocal_54 == 1)
		{
			if (((unk_0xB6161F3A3EDA5AA1() && unk_0xF9B86DC1728F1339("random@drunk_driver_1")) && unk_0xB8DD164B85EDF0BC("MOVE_M@DRUNK@VERYDRUNK")) && unk_0xC4C141A321D45FD8("CONSTRUCTION_ACCIDENT_1", 0))
			{
				iLocal_56 = 1;
			}
		}
		else if (iLocal_54 == 2)
		{
			if ((unk_0xF9B86DC1728F1339("random@drunk_driver_2") && unk_0xF9B86DC1728F1339("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0xF9B86DC1728F1339("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_56 = 1;
			}
		}
	}
	else
	{
		unk_0x7567CEA8E6B5340B(iLocal_96);
		unk_0x7567CEA8E6B5340B(iLocal_98);
		unk_0x7567CEA8E6B5340B(iLocal_97);
		if (iLocal_54 == 1)
		{
			unk_0x8CBF0FAEA6BA6D37();
			unk_0xC0E8B67A4385D37D("random@drunk_driver_1");
			unk_0x2A06B47BBED4FB70("MOVE_M@DRUNK@VERYDRUNK");
			unk_0xC4C141A321D45FD8("Taxi_Vomit", 0);
		}
		else if (iLocal_54 == 2)
		{
			unk_0xC0E8B67A4385D37D("random@drunk_driver_2");
			unk_0xC0E8B67A4385D37D("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0xC0E8B67A4385D37D("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0x2A06B47BBED4FB70("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_171()
{
	if (iLocal_54 == 1)
	{
		Local_152 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_beachvesp_01");
		iLocal_97 = joaat("a_m_y_beachvesp_02");
		Local_68 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_71 = 247.8087f;
		Local_72 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_75 = 66.3861f;
		Local_76 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_79 = 76.9418f;
		iLocal_98 = joaat("baller2");
		Local_81 = { 160.8892f, -111.4167f, 61.2999f };
		Local_84 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_60 = true;
	}
	if (iLocal_54 == 2)
	{
		Local_152 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_90 = 2;
		iLocal_96 = joaat("a_m_y_genstreet_01");
		iLocal_97 = joaat("a_f_y_hipster_03");
		Local_68 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_71 = 252.0142f;
		Local_72 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_75 = 86.1102f;
		Local_76 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_79 = 299.4672f;
		iLocal_98 = joaat("emperor");
		Local_81 = { 1120.551f, 2647.307f, 36.9963f };
		Local_84 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_60 = true;
	}
}

int func_172()
{
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_179())
	{
		return 1;
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_173(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (func_19(func_17()))
		{
			iVar36 = func_48();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xDCC86F723E82125E(Global_100976.f_17208[iVar32 /*6*/], 2) && !unk_0xDCC86F723E82125E(Global_100976.f_17208[iVar32 /*6*/], 3))
				{
					func_174(iVar32, &Var0);
					fVar35 = unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_174(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_175(uParam1, "Abigail1", func_177(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 1:
			func_175(uParam1, "Abigail2", func_177(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 2:
			func_175(uParam1, "Barry1", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 3:
			func_175(uParam1, "Barry2", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 4:
			func_175(uParam1, "Barry3", func_177(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 5:
			func_175(uParam1, "Barry3A", func_177(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 6:
			func_175(uParam1, "Barry3C", func_177(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 7:
			func_175(uParam1, "Barry4", func_177(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_176(iParam0), 0, 0);
			break;
		
		case 8:
			func_175(uParam1, "Dreyfuss1", func_177(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 9:
			func_175(uParam1, "Epsilon1", func_177(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 10:
			func_175(uParam1, "Epsilon2", func_177(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 11:
			func_175(uParam1, "Epsilon3", func_177(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 12:
			func_175(uParam1, "Epsilon4", func_177(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 13:
			func_175(uParam1, "Epsilon5", func_177(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 14:
			func_175(uParam1, "Epsilon6", func_177(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 15:
			func_175(uParam1, "Epsilon7", func_177(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 16:
			func_175(uParam1, "Epsilon8", func_177(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 17:
			func_175(uParam1, "Extreme1", func_177(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 18:
			func_175(uParam1, "Extreme2", func_177(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 19:
			func_175(uParam1, "Extreme3", func_177(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 20:
			func_175(uParam1, "Extreme4", func_177(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 21:
			func_175(uParam1, "Fanatic1", func_177(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 22:
			func_175(uParam1, "Fanatic2", func_177(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 23:
			func_175(uParam1, "Fanatic3", func_177(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_176(iParam0), 0, 1);
			break;
		
		case 24:
			func_175(uParam1, "Hao1", func_177(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_176(iParam0), 0, 1);
			break;
		
		case 25:
			func_175(uParam1, "Hunting1", func_177(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 26:
			func_175(uParam1, "Hunting2", func_177(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 27:
			func_175(uParam1, "Josh1", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 28:
			func_175(uParam1, "Josh2", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 29:
			func_175(uParam1, "Josh3", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 30:
			func_175(uParam1, "Josh4", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 31:
			func_175(uParam1, "Maude1", func_177(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 32:
			func_175(uParam1, "Minute1", func_177(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 33:
			func_175(uParam1, "Minute2", func_177(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 34:
			func_175(uParam1, "Minute3", func_177(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 35:
			func_175(uParam1, "MrsPhilips1", func_177(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 36:
			func_175(uParam1, "MrsPhilips2", func_177(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 37:
			func_175(uParam1, "Nigel1", func_177(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 38:
			func_175(uParam1, "Nigel1A", func_177(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 39:
			func_175(uParam1, "Nigel1B", func_177(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 40:
			func_175(uParam1, "Nigel1C", func_177(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 41:
			func_175(uParam1, "Nigel1D", func_177(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 42:
			func_175(uParam1, "Nigel2", func_177(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 43:
			func_175(uParam1, "Nigel3", func_177(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 44:
			func_175(uParam1, "Omega1", func_177(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 45:
			func_175(uParam1, "Omega2", func_177(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 46:
			func_175(uParam1, "Paparazzo1", func_177(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 47:
			func_175(uParam1, "Paparazzo2", func_177(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 48:
			func_175(uParam1, "Paparazzo3", func_177(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 49:
			func_175(uParam1, "Paparazzo3A", func_177(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 50:
			func_175(uParam1, "Paparazzo3B", func_177(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 51:
			func_175(uParam1, "Paparazzo4", func_177(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 52:
			func_175(uParam1, "Rampage1", func_177(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 54:
			func_175(uParam1, "Rampage3", func_177(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 55:
			func_175(uParam1, "Rampage4", func_177(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 56:
			func_175(uParam1, "Rampage5", func_177(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 53:
			func_175(uParam1, "Rampage2", func_177(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 57:
			func_175(uParam1, "TheLastOne", func_177(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 58:
			func_175(uParam1, "Tonya1", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 59:
			func_175(uParam1, "Tonya2", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 60:
			func_175(uParam1, "Tonya3", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 61:
			func_175(uParam1, "Tonya4", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 62:
			func_175(uParam1, "Tonya5", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_175(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_176(int iParam0)
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

struct<2> func_177(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_178(iParam0) };
	if (unk_0xB8A06E7E729EED0A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_178(int iParam0)
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

int func_179()
{
	if (func_182() && !func_183())
	{
		return 1;
	}
	if (func_181() && func_180())
	{
		return 1;
	}
	return 0;
}

bool func_180()
{
	return Global_100694 > 0;
}

int func_181()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_183()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x9EAC4A2F633474B9() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_184()
{
	if (!func_151(5))
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_185()
{
	if ((Global_100965 == func_52() && unk_0x0C5B2801849FF3C3()) && Global_100966)
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_188(iParam0);
	unk_0x0FC823641743BB61(0);
	unk_0xDE3A07FF40453D42(1);
	Global_100962 = 0;
	func_187();
}

void func_187()
{
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			unk_0xB7FAA1C591A4664F(unk_0x6D5BB810CC209E15(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)), 1);
		}
		unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
	}
}

void func_188(int iParam0)
{
	Global_100965 = iParam0;
}

int func_189(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_137788)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			Var1 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x3A5C3B481EEBA95F(unk_0xC8B93D94F8954288())) > 1369f && !func_183())
			{
				return 0;
			}
		}
		if (!Global_100976.f_7719)
		{
			return 0;
		}
		if (func_33(0))
		{
			return 0;
		}
		if (func_179())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_100965 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_173(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_228(iParam3))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_227(func_17()) == 4 || func_227(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_226(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_100976.f_29464.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x693EBB4F13506457() - Global_100967) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_224())
		{
			return 0;
		}
		if (unk_0x19959F2595D26484())
		{
			return 0;
		}
		if (unk_0x0C5B2801849FF3C3())
		{
			return 0;
		}
		if (!func_215(4))
		{
			return 0;
		}
		if (!func_151(5))
		{
			return 0;
		}
		if (func_214(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x8F89BA1339F45476(unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288())))
		{
			if ((unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(377.153f, -717.567f, 10.0536f) || unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(320.9934f, 265.2515f, 82.1221f)) || unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x2F748CE5313AA2BB(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_214(0, 0))
		{
			return 0;
		}
		if (Global_25261)
		{
			return 0;
		}
		if (func_228(30) && !func_214(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_100976.f_1770.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_100976.f_1770.f_539.f_1524[iVar4];
				if (func_213(iVar8))
				{
					if (func_191(iVar4))
					{
						if (!func_190(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var5) < (210f * 210f))
							{
								if (func_17() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_190(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_100976.f_1770.f_539.f_1524[iParam0];
	return func_192(iVar0);
}

int func_192(int iParam0)
{
	return func_193(iParam0, 1);
}

int func_193(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_213(iParam0))
	{
		return 0;
	}
	func_194(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_195(func_206(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_195(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_205(iParam0, iParam1))
	{
		iVar0 = func_204(iParam1);
		iVar1 = func_202(iParam0);
		iVar2 = (func_202(iParam0) - func_202(iParam1));
		iVar3 = (func_204(iParam0) - func_204(iParam1));
		iVar4 = (func_201(iParam0) - func_201(iParam1));
		iVar5 = (func_200(iParam0) - func_200(iParam1));
		iVar6 = (func_199(iParam0) - func_199(iParam1));
		iVar7 = (func_198(iParam0) - func_198(iParam1));
	}
	else
	{
		iVar0 = func_204(iParam0);
		iVar1 = func_202(iParam1);
		iVar2 = (func_202(iParam1) - func_202(iParam0));
		iVar3 = (func_204(iParam1) - func_204(iParam0));
		iVar4 = (func_201(iParam1) - func_201(iParam0));
		iVar5 = (func_200(iParam1) - func_200(iParam0));
		iVar6 = (func_199(iParam1) - func_199(iParam0));
		iVar7 = (func_198(iParam1) - func_198(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_197(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_196(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_196(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_199(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_200(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_201(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_202(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_203(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_203(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_204(int iParam0)
{
	return iParam0 & 15;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_213(iParam1) || !func_213(iParam0))
	{
		return 1;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	var uVar0;
	
	func_212(&uVar0, unk_0x4C374828FD653ECC());
	func_211(&uVar0, unk_0x44AD07D9D178F321());
	func_210(&uVar0, unk_0x342FDFC48311CCCE());
	func_209(&uVar0, unk_0x818078CDB71D3E9C());
	func_208(&uVar0, unk_0x49D01BEA8D03E892());
	func_207(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_207(var uParam0, int iParam1)
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

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_209(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_204(*uParam0);
	iVar1 = func_202(*uParam0);
	if (iParam1 < 1 || iParam1 > func_197(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_213(int iParam0)
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
	iVar0 = func_198(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_199(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_200(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_202(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_204(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_201(iParam0);
	if (iVar5 < 1 || iVar5 > func_197(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_214(int iParam0, int iParam1)
{
	if (unk_0xDCC86F723E82125E(Global_100976.f_29464.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_223()) || Global_100023) || Global_25117) || func_222()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || func_218()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_223()) || Global_25117) || func_222()) || func_24(8, -1)) || func_219()) || func_221()) || func_220()) || func_218()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_223()) || Global_100023) || Global_25117) || func_222()) || func_24(8, -1)) || func_219()) || func_221()) || func_220()) || func_218()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_223()) || Global_100023) || Global_25117) || func_222()) || func_24(8, -1)) || func_221()) || func_220()) || func_218()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_223() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_24(8, -1)) || func_218()) || func_217()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_221()) || func_220()) || func_217()) || func_216())
						{
							return 0;
						}
						if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
						{
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_223()) || Global_25117) || func_222()) || func_24(8, -1)) || func_220()) || func_219()) || func_218()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_223()) || func_220()) || Global_100023) || Global_25117) || func_222()) || Global_36750) || func_24(8, -1)) || func_219()) || func_217()) || func_218()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_223()) || Global_100023) || Global_25117) || func_222()) || func_24(8, -1)) || func_219()) || func_217()) || func_221()) || func_220()) || func_218())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_216()
{
	return Global_91145.f_1;
}

int func_217()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_218()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_220()
{
	return Global_91158.f_297 > 0;
}

bool func_221()
{
	return Global_91158.f_296 > 0;
}

var func_222()
{
	return Global_1315911;
}

int func_223()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_224()
{
	func_16();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_205(func_206(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_227(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_100976.f_6322.f_919[iParam0];
}

bool func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xDCC86F723E82125E(Global_100976.f_29464, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xDCC86F723E82125E(Global_100976.f_29464.f_1, iVar0);
	}
	return bVar1;
}

int func_229()
{
	int iVar0;
	
	if (Global_25265)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC0ADAF0814175B68(iVar0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar0, 0);
					unk_0x1F071A4E400AAE0A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_231()
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if ((unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
		}
	}
	if (iLocal_172)
	{
		func_265(0);
		if (Global_25353)
		{
			unk_0x233432976E597324("AC_STOP");
		}
		func_264();
		func_6();
		unk_0x9BD0664D3DA3E6AE(0);
		unk_0x80D8D1CE9B26E9A3();
		unk_0xE6D99A6809A1F8CE(Local_76 - Vector(10f, 15f, 15f), Local_76 + Vector(10f, 15f, 15f), 1, 1);
		unk_0xE6D99A6809A1F8CE(Local_81 - Vector(10f, 15f, 15f), Local_81 + Vector(10f, 15f, 15f), 1, 1);
		func_144(0);
		if (!unk_0xB6900B8CB0ABBD2B(unk_0x974516F979AD07BC()))
		{
			if (!unk_0xD28A89C669EAD2E4(unk_0x974516F979AD07BC()))
			{
				unk_0xFD816D0E738EB817(unk_0x974516F979AD07BC(), 1, 0);
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iLocal_95))
		{
			if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_95, 0) && func_133(unk_0xC8B93D94F8954288(), iLocal_95, 1) > 50f)
			{
				func_243(iLocal_95, 0, 145);
			}
		}
		if (unk_0x95CCECA3948CFE7B(uLocal_91[0]))
		{
			if (!unk_0x2DC9BA2299B45EA6(uLocal_91[0]))
			{
				unk_0xC778754E36F3FFD6(uLocal_91[0], 317, 1);
				if (!unk_0x277ECDA23D8CCEB4(uLocal_91[0], 0))
				{
					unk_0x0DD14A17813B744B(uLocal_91[0]);
				}
				if (unk_0x5BE4C4CB01F0877F(uLocal_91[0]))
				{
					unk_0x5980997C9ACA0572(uLocal_91[0]);
				}
			}
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (unk_0x95CCECA3948CFE7B(uLocal_91[iLocal_63]))
			{
				if (!unk_0x2DC9BA2299B45EA6(uLocal_91[iLocal_63]))
				{
					unk_0xC778754E36F3FFD6(uLocal_91[iLocal_63], 317, 1);
					if (!unk_0x277ECDA23D8CCEB4(uLocal_91[iLocal_63], 0))
					{
						unk_0x0DD14A17813B744B(uLocal_91[iLocal_63]);
					}
					unk_0x58F516BB5E324590(uLocal_91[iLocal_63], 1);
					unk_0x6CCF5F545348D54E(255, uLocal_100, joaat("player"));
					unk_0xAAD662D7E0D59F4C(uLocal_91[iLocal_63], 0);
				}
				unk_0x459A6F82E024C891(&(uLocal_91[iLocal_63]));
			}
			iLocal_63++;
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (unk_0x6B4865E08E90ACC5(uLocal_155[iLocal_63]))
			{
				unk_0x5356E82C1E5E0C44(&(uLocal_155[iLocal_63]));
			}
			iLocal_63++;
		}
		if (iLocal_54 == 1)
		{
			unk_0x5C6AA4866046D391(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (unk_0x844838E5D8A21336(uLocal_127))
		{
			if (unk_0xF96FC657C212A30E(uLocal_127))
			{
				unk_0x7D1795B1E14EDFFD(uLocal_127, 0);
			}
		}
	}
	func_232(-1);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_232(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_185())
	{
		func_236(iParam0);
		unk_0x4968FFFAEFDFD625(0, 0);
		Global_100967 = unk_0x693EBB4F13506457();
		func_235(30000);
		StringCopy(&cVar0, func_234(Global_100965, 1), 64);
		if (func_51(Global_100965) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_100964, 64);
		}
		unk_0x7CCB5DC58A4B30A1(&cVar0, Global_100962, (unk_0x693EBB4F13506457() - Global_100963), 0);
	}
	else if (unk_0xDCC86F723E82125E(Global_100972, 0) && Global_100976.f_29464.f_2 < 3)
	{
		unk_0x77621132305B133B(&Global_100972, 0);
	}
	func_233(&Global_25174);
	Global_100966 = 0;
	func_188(-1);
}

void func_233(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

char* func_234(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_235(int iParam0)
{
	Global_36251 = (unk_0x693EBB4F13506457() + iParam0);
}

void func_236(int iParam0)
{
	func_237(iParam0, 0, func_242(iParam0));
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_206();
	func_240(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_239(iParam0, &uVar0);
	Var1 = { func_238(&uVar0) };
}

struct<16> func_238(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_204(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_202(*uParam0), 64);
	return Var0;
}

void func_239(int iParam0, var uParam1)
{
	Global_100976.f_29464.f_43[iParam0] = *uParam1;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_202(*uParam0);
	iVar1 = func_204(*uParam0);
	iVar2 = func_201(*uParam0);
	iVar3 = func_200(*uParam0);
	iVar4 = func_199(*uParam0);
	iVar5 = func_198(*uParam0);
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
	iVar6 = func_197(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_197(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_241(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_212(uParam0, iParam1);
	func_211(uParam0, iParam2);
	func_210(uParam0, iParam3);
	func_208(uParam0, iParam5);
	func_209(uParam0, iParam4);
	func_207(uParam0, iParam6);
}

int func_242(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_243(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xFBF56D2226163A9E(iParam0, &uVar0);
		if (!unk_0xB8A06E7E729EED0A(uVar1))
		{
			if (unk_0x7CBED6EFED40E7EB(uVar1) == unk_0x7CBED6EFED40E7EB("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_244(iParam0, iParam2);
	return 1;
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_249(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
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
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_245(iParam0, &(Global_100976.f_18751.f_5510));
}

void func_245(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_248(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_247(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_246(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_246(int iParam0)
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

int func_247(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_248(var uParam0)
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

int func_249(int iParam0)
{
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_262(iParam0, 0, 0)) || func_262(iParam0, 1, 0)) || func_262(iParam0, 2, 0)) || func_261(iParam0) != 145) || func_260(iParam0)) || func_259(iParam0)) || func_258(iParam0)) || func_257(iParam0)) || !func_250(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_259(iParam0))
		{
		}
		if (func_259(iParam0))
		{
		}
		if (func_262(iParam0, 0, 0))
		{
		}
		if (func_262(iParam0, 1, 0))
		{
		}
		if (func_262(iParam0, 2, 0))
		{
		}
		if (func_261(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_251(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
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

int func_251(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_230())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
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
		if ((((!func_256() && !func_255()) && !func_254()) && !func_253()) && !func_230())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_254())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_252(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_253()
{
	return 0;
}

int func_254()
{
	return 1;
}

int func_255()
{
	return 1;
}

int func_256()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	uVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_251(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_262(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_263(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_263(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_264()
{
	Global_25349 = 0;
	Global_25350 = 0;
	Global_25352 = 0;
	Global_25353 = 0;
	Global_25354 = 0;
}

void func_265(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_162(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_266()
{
	float fVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		fVar0 = unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_339, 1);
		iLocal_338 = 1;
		if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_342, 1) < fVar0)
		{
			fVar0 = unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_342, 1);
			iLocal_338 = 2;
		}
		if (iLocal_338 == 1)
		{
			iLocal_345 = 1;
			iLocal_54 = 1;
			return Local_339;
		}
		if (iLocal_338 == 2)
		{
			iLocal_345 = 2;
			iLocal_54 = 2;
			return Local_342;
		}
	}
	return 0f, 0f, 0f;
}

