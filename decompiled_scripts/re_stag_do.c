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
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60[4] = { 0, 0, 0, 0 };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	float fLocal_86 = 0f;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	float fLocal_112 = 0f;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 16;
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
	int iLocal_301 = 0;
	char* sLocal_302 = NULL;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
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
	fLocal_43 = 20f;
	iLocal_117 = 1;
	iLocal_308 = 6000;
	Local_52 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD4BE58A7E3E102AC(11))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_55))
		{
			if (unk_0xFF8C14957DF16F4D(iLocal_55))
			{
				unk_0x91F590A9823EB649(iLocal_55);
			}
		}
		if (!unk_0x2BF5E63466422C38(iLocal_57))
		{
			if (unk_0xFF8C14957DF16F4D(iLocal_57))
			{
				unk_0x91F590A9823EB649(iLocal_57);
			}
		}
		func_183();
	}
	if (func_182(283, 1))
	{
		unk_0x9C9E32388A7886A2();
	}
	if (func_153(Local_52, -1, 0, 0, 0))
	{
		if ((unk_0xA63165E74E9A042B() > 2 && unk_0xA63165E74E9A042B() < 15) && !unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
		{
		}
		else
		{
			unk_0x9C9E32388A7886A2();
		}
		func_150(-1);
	}
	else
	{
		unk_0x9C9E32388A7886A2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xBE1BAAD38691E6DD() || bLocal_116)
		{
			if (!func_149())
			{
				if (func_148())
				{
					func_183();
				}
			}
			unk_0x643E26919A174002("RE_SDRM", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_136())
					{
						func_183();
					}
					if (iLocal_50)
					{
						iLocal_51 = 1;
						iLocal_48 = 1;
					}
					else
					{
						func_127();
					}
					break;
				
				case 1:
					func_126();
					if (!iLocal_114)
					{
						func_125();
						func_122();
						func_111();
						if (!unk_0xB50E39CA0A3E6020(uLocal_318))
						{
							func_110();
						}
					}
					else
					{
						func_107();
						if (!bLocal_124)
						{
							func_105();
						}
						func_97();
						func_95();
						func_79();
						func_78(iLocal_55, 0);
						if (!bLocal_121)
						{
						}
						if (iLocal_49 == 0 && !bLocal_118)
						{
							func_74();
							func_72();
						}
						else
						{
							func_67();
						}
						if (iLocal_49 == 3)
						{
							if (unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Local_87, 1) < 100f)
							{
								if (!unk_0x9C472738425216B8())
								{
									unk_0xBA51426C369A1164("sdrm_mcs_2", 8);
								}
								if (unk_0x9C472738425216B8())
								{
									if (unk_0xF628B2ECEE913E4E())
									{
										if ((((!unk_0x2BF5E63466422C38(iLocal_55) && !unk_0x2BF5E63466422C38(iLocal_57)) && !unk_0x2BF5E63466422C38(iLocal_56)) && !unk_0x2BF5E63466422C38(iLocal_58)) && !unk_0xF4B969E0807E76C7(iLocal_132, 0))
										{
											unk_0x35C874B41FEBBCA5("Groom", iLocal_55, 0);
											unk_0x35C874B41FEBBCA5("Groomsman", iLocal_57, 0);
											unk_0x35C874B41FEBBCA5("Bride", iLocal_56, 0);
											unk_0x35C874B41FEBBCA5("Father_of_the_bride", iLocal_58, 0);
										}
									}
								}
							}
							else if (unk_0x9C472738425216B8())
							{
								unk_0xBC60E9BBAF0E13DD();
							}
							if (bLocal_118)
							{
								if (func_66(1, 0, 1))
								{
									func_31();
								}
							}
							else if (!unk_0x2BF5E63466422C38(iLocal_57))
							{
								if (unk_0x5294582CE404D3F4(iLocal_57, 0))
								{
									if (unk_0x39A01A052D9B5FF0(uLocal_322))
									{
										unk_0xAA2276003B2ADF1B(&uLocal_322);
										if (unk_0x39A01A052D9B5FF0(uLocal_320))
										{
											unk_0xAA2276003B2ADF1B(&uLocal_320);
										}
										if (!unk_0x39A01A052D9B5FF0(uLocal_320))
										{
											uLocal_320 = func_29(Local_67, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0x2BF5E63466422C38(iLocal_55))
							{
								unk_0xF0E9590A910B74BE(iLocal_55, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
							}
							if (!unk_0x2BF5E63466422C38(iLocal_57))
							{
								unk_0xF0E9590A910B74BE(iLocal_57, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
							}
							if (!unk_0x2BF5E63466422C38(iLocal_56))
							{
								unk_0xF0E9590A910B74BE(iLocal_56, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
							}
							if (!unk_0x2BF5E63466422C38(iLocal_58))
							{
								unk_0xF0E9590A910B74BE(iLocal_58, unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_183();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_183();
}

int func_3()
{
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x2BF5E63466422C38(iLocal_55))
		{
			return 1;
		}
		else
		{
			if (unk_0x3656B691E303FDE0(iLocal_55, unk_0x0FA8183DAD2B3203(), 1) || unk_0xE294A1321110B3E9(iLocal_55))
			{
				return 1;
			}
			if (bLocal_116)
			{
				if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
				{
					func_27();
					if (func_4(&uLocal_136, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
	{
		if ((!unk_0xD960230552BC4165(iLocal_59, 0) || unk_0xA2E496B79B8F1A52(iLocal_59)) || unk_0xE294A1321110B3E9(iLocal_59))
		{
			func_27();
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x450F12B6B894DEC6(unk_0x0FA8183DAD2B3203(), joaat("towtruck")) || unk_0x450F12B6B894DEC6(unk_0x0FA8183DAD2B3203(), joaat("towtruck2")))
			{
				if (unk_0x36495ECD675662F3(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), iLocal_59))
				{
					func_27();
					if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_27();
		if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!unk_0x2BF5E63466422C38(iLocal_55))
	{
		if (!unk_0x9B69E0F5342BA1A8(iLocal_55, unk_0x0FA8183DAD2B3203(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
			{
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0))
				{
					unk_0xBA0ADF29DCCA9258(unk_0x7C7787D2D7139A85(), 1, 0);
					unk_0xA79E892D0DDB947B(unk_0x7C7787D2D7139A85(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (unk_0x2BF5E63466422C38(iLocal_57))
			{
				func_27();
				return 1;
			}
			else if (unk_0x3656B691E303FDE0(iLocal_57, unk_0x0FA8183DAD2B3203(), 1))
			{
				func_27();
				return 1;
			}
		}
		if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
		{
			if (!unk_0x9B69E0F5342BA1A8(iLocal_59, unk_0x0FA8183DAD2B3203(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (!iLocal_126)
				{
					func_27();
					if (func_4(&uLocal_136, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 0;
			}
			if (!unk_0x9B69E0F5342BA1A8(iLocal_59, unk_0x0FA8183DAD2B3203(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_49 == 3)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x2BF5E63466422C38(iLocal_56) || unk_0x2BF5E63466422C38(iLocal_58))
			{
				return 1;
			}
			else if (unk_0x3656B691E303FDE0(iLocal_56, unk_0x0FA8183DAD2B3203(), 1) || unk_0x3656B691E303FDE0(iLocal_58, unk_0x0FA8183DAD2B3203(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x2BF5E63466422C38(iLocal_57))
		{
			if (!unk_0x9B69E0F5342BA1A8(iLocal_57, unk_0x0FA8183DAD2B3203(), 20f, 20f, 20f, 0, 1, 0) && iLocal_310)
			{
				if (!iLocal_127)
				{
					func_27();
					if (func_4(&uLocal_136, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_127 = 1;
					}
				}
			}
			else
			{
				iLocal_127 = 0;
			}
			if (!unk_0x9B69E0F5342BA1A8(iLocal_57, unk_0x0FA8183DAD2B3203(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x7C7787D2D7139A85()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_22(14))
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
		Global_19486 = func_16();
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

int func_16()
{
	func_17();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_20(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_19(unk_0x0FA8183DAD2B3203());
			if (func_18(iVar0) && (!func_22(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111560.f_2358.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_27()
{
	Global_19671 = 0;
	func_28();
}

void func_28()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

var func_29(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_30(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

float func_30(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_31()
{
	switch (iLocal_131)
	{
		case 0:
			func_27();
			unk_0x4EDE34FBADD967A6(0);
			func_58(1, 1, 1, 0, 0, 0);
			unk_0x0E8885D3467CF600(0);
			iLocal_310 = 0;
			iLocal_131++;
			break;
		
		case 1:
			iLocal_131++;
			break;
		
		case 2:
			if ((((!unk_0x2BF5E63466422C38(iLocal_55) && !unk_0x2BF5E63466422C38(iLocal_57)) && !unk_0x2BF5E63466422C38(iLocal_56)) && !unk_0x2BF5E63466422C38(iLocal_58)) && !unk_0xF4B969E0807E76C7(iLocal_132, 0))
			{
				if (func_57())
				{
					unk_0x38F2C110546BD846(iLocal_132, "SDRM_Car", 0, 0, 0);
					unk_0x38F2C110546BD846(iLocal_55, "Groom", 0, 0, 0);
					unk_0x38F2C110546BD846(iLocal_57, "Groomsman", 0, 0, 0);
					unk_0x38F2C110546BD846(iLocal_56, "Bride", 0, 0, 0);
					unk_0x38F2C110546BD846(iLocal_58, "Father_of_the_bride", 0, 0, 0);
					unk_0x3268D119250624E8(4);
					iLocal_131++;
				}
			}
			break;
		
		case 3:
			if (unk_0x5038F629059483A1(0))
			{
				if (!unk_0xF4B969E0807E76C7(iLocal_132, 0))
				{
					unk_0x1ECAE5FB4DE78CF8(iLocal_132, 1084227584);
					unk_0x261C1CE9E114E9F1(iLocal_132, 1);
					unk_0x5AC8A91A3FD00B39(1);
					unk_0x4BEE8AE599A4A300(1);
					unk_0xB489E71A45CDC02F(0f);
					unk_0xA291E27354439AE9(-7f, 1065353216);
				}
				iLocal_131++;
			}
			break;
		
		case 4:
			unk_0x4F058F27442031CC(&iLocal_55);
			unk_0x4F058F27442031CC(&iLocal_57);
			unk_0x4F058F27442031CC(&iLocal_56);
			unk_0x4F058F27442031CC(&iLocal_58);
			func_58(0, 1, 1, 0, 0, 0);
			unk_0x0E8885D3467CF600(1);
			func_32();
			break;
	}
}

void func_32()
{
	while (!func_56())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_36(-1, 0);
	func_33();
	func_183();
}

void func_33()
{
	func_34();
}

int func_34()
{
	if (func_35(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_35(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_36(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_53(iParam0))
	{
		func_52(iParam0, iParam1);
		if (!func_51(51))
		{
			func_47("RE_REWARD", 1, 0, 4000, 10000, func_50(), 0, 138, 0);
			func_46(51);
		}
		if (func_45(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_44(iParam0, iParam1) != 322)
		{
			func_38(func_44(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_37(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
			{
				func_37(7);
			}
			else
			{
				func_37(1);
			}
		}
	}
}

void func_37(int iParam0)
{
	Global_111546 = iParam0;
}

void func_38(int iParam0, var uParam1, var uParam2)
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
		func_42((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_39();
	}
}

void func_39()
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
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					unk_0x4CC49AB39D518992(joaat("num_rndevents_completed"), Global_111283, 0);
					unk_0xA1E7A40E1F56E511(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	unk_0x41410A69AD49AFCD(joaat("num_missions_completed"), Global_111296, 1);
	unk_0x41410A69AD49AFCD(joaat("num_missions_available"), Global_111279, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_completed"), Global_111297, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_available"), Global_111280, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_completed"), Global_111298, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_available"), Global_111281, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_completed"), Global_111299, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_available"), Global_111282, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_available"), Global_111286, 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	unk_0x59D058AC496948FE(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_story_missions"), Global_111303, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_ambient_missions"), Global_111304, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853))
	{
		func_41(13, unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853));
	}
	if (!unk_0x8FA5860B1A123955())
	{
		if (!Global_76577)
		{
			if (func_40() == 2 == 0 && !unk_0x393E9918BC37548A())
			{
				if (unk_0x56BDC2B0945F6D74())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_34();
				}
			}
		}
	}
}

int func_40()
{
	return Global_30736;
}

int func_41(int iParam0, int iParam1)
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
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_43();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_43()
{
	return Global_1312745;
}

int func_44(int iParam0, int iParam1)
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

int func_45(int iParam0)
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

void func_46(int iParam0)
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
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_48(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_48(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2553916E420E8EF0(sParam0, ""))
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
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0x2553916E420E8EF0(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (unk_0x9B35D07DCD0F0B43() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((unk_0x9B35D07DCD0F0B43() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_49();
	}
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_50()
{
	func_17();
	switch (Global_111560.f_2358.f_539.f_4321)
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

int func_51(int iParam0)
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
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

int func_53(int iParam0)
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

int func_54()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0037AFCBDC61F351(), 64);
	uVar16 = func_55(Var0);
	return uVar16;
}

int func_55(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xA8C462EF7D9DC564(&cParam0))
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

int func_56()
{
	return 1;
}

bool func_57()
{
	bool bVar0;
	
	bVar0 = unk_0x9B70128914947222();
	if (!Global_76576)
	{
		if (!bVar0)
		{
			Global_76576 = 1;
		}
	}
	return bVar0;
}

void func_58(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_65(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_13())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_64(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_65(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_64(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_62(unk_0x7C7787D2D7139A85())) && !func_60(unk_0x7C7787D2D7139A85(), 0)) && !func_59()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_62(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_59()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_60(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_61(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_62(int iParam0)
{
	if (func_60(iParam0, 0))
	{
		return 1;
	}
	if (func_63())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_63()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_64(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_65(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

int func_66(bool bParam0, bool bParam1, bool bParam2)
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

void func_67()
{
	if (!unk_0xF4B969E0807E76C7(iLocal_59, 0) && !unk_0xF4B969E0807E76C7(iLocal_55, 0))
	{
		if (!iLocal_117)
		{
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0) && unk_0x95ED3BD0F52D542A(iLocal_55, iLocal_59, 0))
			{
				iLocal_117 = 1;
				if (unk_0x39A01A052D9B5FF0(uLocal_319))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_319);
				}
				if (iLocal_122 && !bLocal_118)
				{
					if (!unk_0x39A01A052D9B5FF0(uLocal_320))
					{
						uLocal_320 = func_29(Local_67, 1);
					}
				}
				if (!func_71())
				{
				}
			}
		}
		if (!iLocal_117 && !iLocal_119)
		{
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0))
			{
				if (!unk_0x95ED3BD0F52D542A(iLocal_55, iLocal_59, 0))
				{
					if (!func_71())
					{
					}
					if (unk_0x39A01A052D9B5FF0(uLocal_319))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_319);
					}
					if (!unk_0x39A01A052D9B5FF0(uLocal_319))
					{
						uLocal_319 = func_70(iLocal_55, 0, 145);
						unk_0x14C335BB2F079BD4(uLocal_319, 1);
					}
					iLocal_117 = 0;
					iLocal_119 = 1;
				}
			}
		}
		if (iLocal_117)
		{
			if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0))
			{
				if (!func_71())
				{
				}
				if (!unk_0x39A01A052D9B5FF0(uLocal_319))
				{
					uLocal_319 = func_68(iLocal_59, 0, 0);
					unk_0x14C335BB2F079BD4(uLocal_319, 1);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_320))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_320);
				}
				iLocal_117 = 0;
			}
			if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0) && !unk_0x95ED3BD0F52D542A(iLocal_55, iLocal_59, 0))
			{
				if (!func_71())
				{
				}
				if (!unk_0x39A01A052D9B5FF0(uLocal_319))
				{
					uLocal_319 = func_68(iLocal_59, 0, 0);
					unk_0x14C335BB2F079BD4(uLocal_319, 1);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_320))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_320);
				}
				iLocal_117 = 0;
			}
		}
	}
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	return func_69(iParam0, !bParam1, bParam2);
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_30(unk_0x393E9918BC37548A(), 1f, 1f));
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
		unk_0xBC0D06064C5B5413(uVar0, func_30(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_30(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_70(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(uVar0)) && unk_0x005AF94672136563(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0x058B6969CEED705F(uVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_71()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_72()
{
	if (unk_0xD4B321D9096B01FC(iLocal_55))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_55))
		{
			if (unk_0x9B69E0F5342BA1A8(iLocal_55, unk_0x0FA8183DAD2B3203(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0x5294582CE404D3F4(iLocal_55, 0)) || unk_0x90B5809A1B681498(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_321))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_321);
						if (!unk_0x39A01A052D9B5FF0(uLocal_320))
						{
							uLocal_320 = func_29(Local_67, 1);
						}
					}
				}
				else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0x5294582CE404D3F4(iLocal_55, 0))
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_321))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_321);
						if (!unk_0x39A01A052D9B5FF0(uLocal_320))
						{
							uLocal_320 = func_29(Local_67, 1);
						}
					}
				}
				else if (unk_0x39A01A052D9B5FF0(uLocal_320))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_320);
					if (!unk_0x39A01A052D9B5FF0(uLocal_321))
					{
						uLocal_321 = func_70(iLocal_55, 0, 145);
					}
				}
				if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
				{
				}
			}
			else if (unk_0x39A01A052D9B5FF0(uLocal_320))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_320);
				if (!unk_0x39A01A052D9B5FF0(uLocal_321))
				{
					uLocal_321 = func_70(iLocal_55, 0, 145);
				}
			}
			if (!unk_0xFF8C14957DF16F4D(iLocal_55))
			{
				if (!unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0xC6612209077465DD(iLocal_55);
					unk_0x3B1D4A59B3B6B42C(iLocal_55, func_73());
					unk_0x174F0AF2FB5368AB(iLocal_55, 1);
					unk_0x946F21DEBF92050D(iLocal_55, 0);
				}
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					unk_0xC6612209077465DD(iLocal_55);
					unk_0x3B1D4A59B3B6B42C(iLocal_55, func_73());
					unk_0x174F0AF2FB5368AB(iLocal_55, 1);
					unk_0x946F21DEBF92050D(iLocal_55, 0);
				}
			}
		}
	}
}

var func_73()
{
	return unk_0x85E4D364E5F296FC(unk_0x7A8732CFB5113E77());
}

void func_74()
{
	if (!unk_0x2BF5E63466422C38(iLocal_55))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (!func_77())
			{
				if (unk_0xFF8C14957DF16F4D(iLocal_55))
				{
					unk_0x91F590A9823EB649(iLocal_55);
				}
				if (unk_0x411C065ADB822CD9(iLocal_55, 1227113341) != 1 && unk_0x411C065ADB822CD9(iLocal_55, 1227113341) != 0)
				{
					unk_0x5AE2110219317C16(iLocal_55, unk_0x0FA8183DAD2B3203(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x5294582CE404D3F4(iLocal_55, 0))
				{
					unk_0x2DCF88AC859255F3(iLocal_55, 0, 0);
				}
				if (!iLocal_125)
				{
					if (!func_71())
					{
						iLocal_125 = 1;
						if (func_76())
						{
							func_75(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_75(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_125 = 0;
				if (((unk_0x411C065ADB822CD9(iLocal_55, 1227113341) == 1 || unk_0x411C065ADB822CD9(iLocal_55, 1227113341) == 0) || unk_0x411C065ADB822CD9(iLocal_55, 242628503) == 1) || unk_0x411C065ADB822CD9(iLocal_55, 242628503) == 0)
				{
					unk_0xC6612209077465DD(iLocal_55);
					if (!unk_0xFF8C14957DF16F4D(iLocal_55))
					{
						unk_0x3B1D4A59B3B6B42C(iLocal_55, func_73());
						unk_0x174F0AF2FB5368AB(iLocal_55, 1);
						unk_0x946F21DEBF92050D(iLocal_55, 0);
					}
				}
			}
		}
		else if (((!unk_0xFF8C14957DF16F4D(iLocal_55) && !unk_0x5294582CE404D3F4(iLocal_55, 0)) && unk_0x411C065ADB822CD9(iLocal_55, 242628503) != 1) && unk_0x411C065ADB822CD9(iLocal_55, 242628503) != 0)
		{
			unk_0x3B1D4A59B3B6B42C(iLocal_55, func_73());
			unk_0x174F0AF2FB5368AB(iLocal_55, 1);
			unk_0x946F21DEBF92050D(iLocal_55, 0);
		}
	}
}

int func_75(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_76()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		if (unk_0xD960230552BC4165(unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203()), 1))
		{
			if ((unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1))) || unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1)))) || unk_0x79676C1B659A9398(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_77()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
		{
			if (((((!unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()) && !unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) && !unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) && !unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) && !unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203())) && !unk_0x450F12B6B894DEC6(unk_0x0FA8183DAD2B3203(), joaat("rhino")))
			{
				if (unk_0x78B310CB286001B8(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		if (unk_0xD960230552BC4165(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203()), 0))
		{
			if ((((!unk_0x5EA23EAAAD4E34BF(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203()))) && !unk_0xDC118E11A4081E9A(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())))) && !unk_0x31337ABC07783F10(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())))) && !unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())))) && unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()) && unk_0xA2DB82364F08360E(iParam0))
			{
				if (unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0) == unk_0x4D57D3E5ECE15A41(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0x8752F912B1823E3A(iParam0, unk_0x0FA8183DAD2B3203()))
		{
			if (!bVar0)
			{
				unk_0x6E2920E14F5F962C(iParam0, unk_0x0FA8183DAD2B3203(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x46BF7A6280E30BAA(iParam0))
			{
				unk_0xECC035CAE5B59E06(iParam0);
			}
		}
	}
}

void func_79()
{
	if (unk_0xD4B321D9096B01FC(iLocal_55))
	{
		if (!unk_0xF4B969E0807E76C7(iLocal_55, 0) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (func_93("stagd_chape_1"))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_320))
				{
					uLocal_320 = func_29(Local_67, 1);
				}
				iLocal_122 = 1;
			}
			if (func_93("stagd_chape_3"))
			{
				unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
				if (!unk_0x2BF5E63466422C38(iLocal_55))
				{
					if (unk_0x5294582CE404D3F4(iLocal_55, 0))
					{
						unk_0xA12E1659DEF57244(&uLocal_113);
						unk_0xECC035CAE5B59E06(0);
						unk_0x9DF603E4FF1E8E97(0, 30600);
						unk_0x15A7B753872B3CE3(uLocal_113);
						unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
						unk_0x78829A259A6975CD(&uLocal_113);
					}
				}
			}
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (unk_0x95ED3BD0F52D542A(iLocal_55, unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
				{
					if (iLocal_49 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_130 == 0)
							{
								if (!func_71())
								{
									func_92();
									if (func_4(&uLocal_136, "stagdau", sLocal_302, 4, 0, 0, 0))
									{
										iLocal_310 = 1;
									}
									bLocal_121 = true;
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_130 == 1)
							{
								if (!func_71())
								{
									unk_0x5AC8A91A3FD00B39(1);
									unk_0x4BEE8AE599A4A300(1);
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_130 == 2)
							{
								if (!func_71())
								{
									func_92();
									if (func_16() == 0)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_16() == 1)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_16() == 2)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
					}
					if (!bLocal_124)
					{
						if (iLocal_49 == 3)
						{
							if (!func_71())
							{
								if (iLocal_130 == 0)
								{
									func_4(&uLocal_136, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_130++;
								}
							}
						}
						if (iLocal_49 == 3)
						{
							if (unk_0xC9D9444186B5A374() > 5000)
							{
								if (iLocal_130 == 0)
								{
									if (!func_71())
									{
										iLocal_130++;
									}
								}
							}
						}
						if (!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_87, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_303 == 0)
							{
								if (iLocal_307 == func_80(func_81()) + 11)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
							if (iLocal_303 < 2)
							{
								if (iLocal_307 == func_80(func_81()) + 10)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
							if (iLocal_303 < 3)
							{
								if (iLocal_307 == func_80(func_81()) + 9)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
							if (iLocal_303 < 4)
							{
								if (iLocal_307 == func_80(func_81()) + 8)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
							if (iLocal_303 < 5)
							{
								if (iLocal_307 == func_80(func_81()) + 7)
								{
									if (!func_71())
									{
										iLocal_303 = 5;
									}
								}
							}
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										iLocal_303 = 6;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										iLocal_303 = 7;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										iLocal_303 = 8;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_80(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_81()
{
	var uVar0;
	
	func_91(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_90(&uVar0, unk_0x8F7802EF0E800F47());
	func_89(&uVar0, unk_0xA63165E74E9A042B());
	func_84(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_83(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_82(&uVar0, unk_0x10CB21C87A35156F());
	return uVar0;
}

void func_82(var uParam0, int iParam1)
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

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

int func_86(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_87(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(int iParam0)
{
	return iParam0 & 15;
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_91(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_92()
{
	Global_19671 = 0;
	func_25();
}

int func_93(char* sParam0)
{
	var uVar0;
	
	if (func_71())
	{
		MemCopy(&uVar0, {func_94()}, 4);
		if (unk_0x2553916E420E8EF0(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_94()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x8CD683A755F4B25E();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xD4B321D9096B01FC(iLocal_55))
	{
		if (!unk_0xF4B969E0807E76C7(iLocal_55, 0))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_55))
			{
				if (!iLocal_129 && bLocal_118)
				{
					unk_0x572062A62138FBA2(0, 75, 1);
					unk_0x572062A62138FBA2(0, 80, 1);
					iVar0 = unk_0x18638AA8DFAAE787();
					if (iVar0 != 0)
					{
						iVar1 = unk_0x328DC5757076B0D5(iVar0);
						if (iVar1 != 4)
						{
							unk_0x572062A62138FBA2(0, 79, 1);
							unk_0x572062A62138FBA2(0, 286, 1);
							unk_0x572062A62138FBA2(0, 287, 1);
							unk_0x572062A62138FBA2(0, 26, 1);
							unk_0x572062A62138FBA2(0, 273, 1);
							unk_0x572062A62138FBA2(0, 4, 1);
							unk_0x572062A62138FBA2(0, 270, 1);
							unk_0x572062A62138FBA2(0, 5, 1);
							unk_0x572062A62138FBA2(0, 1, 1);
							unk_0x572062A62138FBA2(0, 271, 1);
							unk_0x572062A62138FBA2(0, 6, 1);
							unk_0x572062A62138FBA2(0, 2, 1);
							unk_0x572062A62138FBA2(0, 272, 1);
							unk_0x572062A62138FBA2(0, 3, 1);
						}
					}
					if (unk_0x42A24CB7B8A08E11(iLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_129 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_58(1, 1, 1, 0, 0, 0);
						unk_0x0D23E3918F7AF11B(1);
						unk_0x5AC8A91A3FD00B39(0);
						unk_0x4BEE8AE599A4A300(0);
						unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 0);
						unk_0x1CF6B9198AECD5B1(joaat("superd"), 3);
						while (!unk_0xC697561B7CE4A050(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_134 = unk_0x585CBFD90CDD9817("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_135 = unk_0x585CBFD90CDD9817("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0x678A9FFAA65D1846(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0x678A9FFAA65D1846(uLocal_135, "HAND_SHAKE", 0.25f);
						unk_0x0472F75F711AABCE(uLocal_134, 1);
						unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x479DACF5AA4C6D03(uLocal_135, uLocal_134, 4000, 1, 1);
						unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
						unk_0x7FB505C34A14BAAA(Local_99, 10f, 0, 0, 0, 0, 0, 0);
						if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
						{
							unk_0x2B5BFC8190E00E7A(unk_0x9B79A29933E4A8FA());
							if (unk_0xC49563EAE7AACA6C(unk_0x9B79A29933E4A8FA(), Local_99, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_133 = unk_0x9B79A29933E4A8FA();
								unk_0xE5C667CF3B4642D2(iLocal_133, 1, 0);
								unk_0xBD22862A2C5FD6DF(&iLocal_133);
							}
						}
						if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
						{
							unk_0x54B5C3A13D3588F0(iLocal_59, 1);
							if (!unk_0x39A01A052D9B5FF0(uLocal_319))
							{
								uLocal_319 = func_68(iLocal_59, 0, 0);
								unk_0x14C335BB2F079BD4(uLocal_319, true);
							}
						}
						iLocal_117 = 0;
					}
				}
				if (iLocal_129 && unk_0xD2652A8A890B29BA(uLocal_134))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_317)
					{
						if ((unk_0x116E83131AA90EB1(unk_0x0FA8183DAD2B3203()) && unk_0x03DB22289AD822D2() == 4) || (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0xC7EAF5DCD508410E() == 4))
						{
							unk_0x3E5A3FD805488EB9("CamPushInNeutral", 0, 0);
							unk_0x9964F5BBD9415AB7(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_317 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
						{
							unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
						}
						unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
						unk_0x5AC8A91A3FD00B39(1);
						unk_0x4BEE8AE599A4A300(1);
						func_58(0, 1, 1, 0, 0, 0);
						unk_0x0472F75F711AABCE(uLocal_134, 0);
						unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
						unk_0xDC5BA18043353983(uLocal_134, 0);
						unk_0xAB681892AAC7844A(0);
					}
				}
				if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x7FB505C34A14BAAA(Local_87, 5f, 0, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_123)
			{
				if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_103, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x6BB2B1818CAE531E(joaat("ig_bestmen"));
					if (unk_0x6DF9C43E3CC645BC(joaat("ig_bestmen")))
					{
						iLocal_57 = unk_0xB983F26E7AFB47BF(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_96(&uLocal_136, 4, iLocal_57, "BESTMAN", 0, 1);
						unk_0x0453EBC0FB8D8A80(iLocal_57, 0, 0, 0, 0);
						unk_0xDB889DCC8B0139E6(iLocal_57, joaat("player"));
						unk_0xCC94EE23853F38E4(iLocal_57, 1);
						unk_0x1DB66BD2267055C0(iLocal_57, 185, 1);
						unk_0xA12E1659DEF57244(&uLocal_113);
						unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), -1);
						unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 2048, 2);
						unk_0x15A7B753872B3CE3(uLocal_113);
						unk_0xC544A8E1032AC1CF(iLocal_57, uLocal_113);
						unk_0x78829A259A6975CD(&uLocal_113);
						bLocal_123 = true;
					}
				}
			}
			if (!bLocal_124)
			{
				if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_77, 20f, 20f, 20f, 0, 1, 0))
				{
					func_27();
					if (!func_71())
					{
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
			if (((unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_70, Local_73, fLocal_76, 0, 1, 0) && unk_0x42A24CB7B8A08E11(iLocal_55, Local_70, Local_73, fLocal_76, 0, 1, 0)) || (unk_0xC49563EAE7AACA6C(iLocal_55, Local_67, 0f, 0f, 2f, 1, 1, 0) && func_66(1, 0, 1))) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						unk_0xAA2276003B2ADF1B(&uLocal_320);
						if (!bLocal_118)
						{
							Local_67 = { Local_103 };
							if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
								if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
								{
									unk_0x784753B14715F27F(unk_0x9B79A29933E4A8FA(), 10.5f, 4, 0);
								}
							}
							if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
							{
								iVar2 = unk_0x18638AA8DFAAE787();
								if (iVar2 != 0)
								{
									iVar3 = unk_0x328DC5757076B0D5(iVar2);
									if (iVar3 == 4)
									{
										unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_55, 5000, 0, 2);
									}
									else
									{
										unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_59, 5000, 2052, 4);
										unk_0x65F3E8A429EBD130(iLocal_59, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_27();
							if (!func_71())
							{
								func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0x2BF5E63466422C38(iLocal_55))
								{
									unk_0xC6612209077465DD(iLocal_55);
									unk_0xA12E1659DEF57244(&uLocal_113);
									unk_0xD06C31EF9A42C2B4(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0xD06C31EF9A42C2B4(0, Local_99, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), -1);
									unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 2048, 2);
									unk_0x15A7B753872B3CE3(uLocal_113);
									unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
									unk_0x78829A259A6975CD(&uLocal_113);
									unk_0x7D81B41B134BD6F2(iLocal_55, 1);
								}
								bLocal_118 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0x2BF5E63466422C38(iLocal_55) && !unk_0xF4B969E0807E76C7(iLocal_59, 0))
						{
							if ((bLocal_118 && unk_0xC49563EAE7AACA6C(iLocal_55, Local_99, 1f, 1f, 1f, 0, 1, 0)) && !unk_0x5294582CE404D3F4(iLocal_55, 0))
							{
								if (unk_0xFF8C14957DF16F4D(iLocal_55))
								{
									if (!func_71())
									{
										if (func_16() == 2)
										{
											func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0x91F590A9823EB649(iLocal_55);
								}
								if (unk_0x7FB035B5755E076D(iLocal_55))
								{
									if (!unk_0x2BF5E63466422C38(iLocal_55))
									{
										unk_0x2BBEC4B37B923F4B(iLocal_55, 0, 0);
										unk_0x8C85E8C71AD74415(iLocal_55, 0, 0);
										unk_0x04F5A8AA60EC662B(iLocal_55, 1);
										unk_0x860A5CC30A0EF207(iLocal_55, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0x2BF5E63466422C38(iLocal_55))
										{
											unk_0x0453EBC0FB8D8A80(iLocal_55, 2, 1, 0, 0);
											unk_0x0453EBC0FB8D8A80(iLocal_55, 0, 0, 1, 0);
											unk_0x0453EBC0FB8D8A80(iLocal_55, 3, 1, 0, 0);
											unk_0x0453EBC0FB8D8A80(iLocal_55, 4, 1, 0, 0);
											unk_0x0453EBC0FB8D8A80(iLocal_55, 11, 0, 0, 0);
											unk_0x2BBEC4B37B923F4B(iLocal_55, 1, 0);
											unk_0x8C85E8C71AD74415(iLocal_55, 1, 0);
											unk_0x04F5A8AA60EC662B(iLocal_55, 0);
											unk_0x860A5CC30A0EF207(iLocal_55, 0);
											unk_0xCB3446C6A91D1A78(iLocal_55, Local_99, 1, 0, 0, 1);
											unk_0x5A2B7C446C0CF087(iLocal_55, 106.5078f);
											unk_0x946F21DEBF92050D(iLocal_55, 0);
											unk_0xDEB0AA30ABFDCF48(iLocal_55, 17, 1);
											unk_0x5F1D6C0FB09BFAA5(iLocal_55, 1);
											unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_55, -1, 2048, 4);
											if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
											{
												unk_0xA12E1659DEF57244(&uLocal_113);
												unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 2052, 4);
												unk_0x31A7662B885C7549(0, iLocal_59, -1, 0, 2f, 1, 0);
												unk_0x15A7B753872B3CE3(uLocal_113);
												unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
												unk_0x78829A259A6975CD(&uLocal_113);
											}
										}
										unk_0xC1B1E9A034A63A62(0);
										Local_67 = { Local_103 };
										Local_70 = { Local_106 };
										Local_73 = { Local_109 };
										fLocal_76 = fLocal_112;
										iLocal_49 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x2BF5E63466422C38(iLocal_55) && !unk_0xF4B969E0807E76C7(iLocal_59, 0))
						{
							if (unk_0x9B69E0F5342BA1A8(iLocal_55, iLocal_59, 5f, 5f, 5f, 0, 1, 0) && !iLocal_128)
							{
								func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_128 = 1;
							}
							if (unk_0x5294582CE404D3F4(iLocal_55, 0))
							{
								if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0))
								{
									if (func_4(&uLocal_136, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_49 = 2;
										bLocal_118 = false;
										iLocal_130 = 0;
									}
								}
								else
								{
									if (iLocal_308 == 0)
									{
										iLocal_308 = unk_0x9B35D07DCD0F0B43();
									}
									if (iLocal_308 != 0 && unk_0x9B35D07DCD0F0B43() > iLocal_308 + 6000)
									{
										func_4(&uLocal_136, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_308 = 0;
									}
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_118)
						{
							func_27();
							if (func_4(&uLocal_136, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
								{
									if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
									{
										iLocal_132 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
										unk_0x784753B14715F27F(unk_0x9B79A29933E4A8FA(), 10.5f, 2, 0);
									}
								}
								if (!unk_0x2BF5E63466422C38(iLocal_57) && !unk_0x2BF5E63466422C38(iLocal_55))
								{
									if (unk_0x5294582CE404D3F4(iLocal_55, 0))
									{
										iLocal_132 = unk_0x4D57D3E5ECE15A41(iLocal_55, 0);
										unk_0xA12E1659DEF57244(&uLocal_113);
										unk_0x31A7662B885C7549(0, iLocal_132, -1, 2, 1f, 1, 0);
										unk_0xECC035CAE5B59E06(0);
										unk_0x15A7B753872B3CE3(uLocal_113);
										unk_0xC544A8E1032AC1CF(iLocal_57, uLocal_113);
										unk_0x1DB66BD2267055C0(iLocal_57, 185, 0);
									}
									else
									{
										unk_0x5AE2110219317C16(iLocal_57, iLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0x39A01A052D9B5FF0(uLocal_322))
									{
										uLocal_322 = func_70(iLocal_57, 0, 145);
									}
									if (unk_0x39A01A052D9B5FF0(uLocal_320))
									{
										unk_0xAA2276003B2ADF1B(&uLocal_320);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_120 = 1;
								bLocal_118 = true;
							}
						}
						if (bLocal_118 && !unk_0x2BF5E63466422C38(iLocal_55))
						{
							if (unk_0x411C065ADB822CD9(iLocal_55, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_67 = { Local_77 };
								Local_70 = { Local_80 };
								Local_73 = { Local_83 };
								fLocal_76 = fLocal_86;
								unk_0x6BB2B1818CAE531E(joaat("ig_bride"));
								unk_0x6BB2B1818CAE531E(joaat("washington"));
								unk_0x6BB2B1818CAE531E(joaat("baller2"));
								unk_0x6BB2B1818CAE531E(joaat("primo"));
								if (((unk_0x6DF9C43E3CC645BC(joaat("ig_bride")) && unk_0x6DF9C43E3CC645BC(joaat("washington"))) && unk_0x6DF9C43E3CC645BC(joaat("baller2"))) && unk_0x6DF9C43E3CC645BC(joaat("primo")))
								{
									iLocal_56 = unk_0xB983F26E7AFB47BF(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0xCC94EE23853F38E4(iLocal_56, 1);
									unk_0xA12E1659DEF57244(&uLocal_113);
									unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), -1);
									unk_0x15A7B753872B3CE3(uLocal_113);
									unk_0xC544A8E1032AC1CF(iLocal_56, uLocal_113);
									unk_0x78829A259A6975CD(&uLocal_113);
									iLocal_58 = unk_0xB983F26E7AFB47BF(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0xCC94EE23853F38E4(iLocal_58, 1);
									unk_0x845704CC8ADF1918(iLocal_58, unk_0x0FA8183DAD2B3203(), -1);
									unk_0x0453EBC0FB8D8A80(iLocal_58, 0, 1, 0, 0);
									uLocal_60[0] = unk_0x847817A65E16621A(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1, 0);
									uLocal_60[1] = unk_0x847817A65E16621A(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1, 0);
									uLocal_60[2] = unk_0x847817A65E16621A(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1, 0);
									uLocal_60[3] = unk_0x847817A65E16621A(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1, 0);
									unk_0x9E0EE3FF7D8C67E8(uLocal_60[0], unk_0xBAC643F143880136(0, 127), 0);
									unk_0x9E0EE3FF7D8C67E8(uLocal_60[1], unk_0xBAC643F143880136(0, 127), 0);
									unk_0x9E0EE3FF7D8C67E8(uLocal_60[2], unk_0xBAC643F143880136(0, 127), 0);
									unk_0x9E0EE3FF7D8C67E8(uLocal_60[3], unk_0xBAC643F143880136(0, 127), 0);
									iLocal_49 = 3;
									bLocal_118 = false;
									iLocal_130 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_118)
						{
							if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
								if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
								{
									unk_0x784753B14715F27F(unk_0x9B79A29933E4A8FA(), 10.5f, 2, 0);
									bLocal_118 = true;
									unk_0x4EDE34FBADD967A6(3000);
									func_27();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (unk_0xF4B969E0807E76C7(iLocal_55, 0))
		{
			func_183();
		}
	}
}

void func_96(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_97()
{
	if ((iLocal_310 && iLocal_307 != func_80(func_81())) && !unk_0xD2652A8A890B29BA(uLocal_134))
	{
		func_101(((iLocal_307 * 1000 * 60 - func_80(func_81()) * 1000 * 60) + (iLocal_306 * 1000 - func_104(func_81()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iLocal_306 == 0)
	{
		if (iLocal_307 == func_80(func_81()) + 1 && ((((iLocal_306 == (func_104(func_81()) - 55) || iLocal_306 == (func_104(func_81()) - 56)) || iLocal_306 == (func_104(func_81()) - 57)) || iLocal_306 == (func_104(func_81()) - 58)) || iLocal_306 == (func_104(func_81()) - 59)))
		{
			func_100();
		}
	}
	if (iLocal_307 == func_80(func_81()))
	{
		func_100();
		func_98();
		if (!func_71())
		{
			func_4(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0x2BF5E63466422C38(iLocal_55))
			{
				unk_0xDD91C0502D7C4DFF(iLocal_55, 1, 1);
			}
			if (!unk_0x2BF5E63466422C38(iLocal_56))
			{
				unk_0xF0E9590A910B74BE(iLocal_56, unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
			}
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				unk_0xF0E9590A910B74BE(iLocal_58, unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
				{
					unk_0x784753B14715F27F(unk_0x9B79A29933E4A8FA(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0xF4B969E0807E76C7(iLocal_55, 0))
			{
				unk_0xC6612209077465DD(iLocal_55);
				unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_55, 5000, 2048, 2);
				unk_0x6E2920E14F5F962C(iLocal_55, unk_0x0FA8183DAD2B3203(), 5000, 2048, 2);
				unk_0x2DCF88AC859255F3(iLocal_55, 0, 0);
				unk_0x91F590A9823EB649(iLocal_55);
			}
			if (!unk_0xF4B969E0807E76C7(iLocal_57, 0))
			{
				unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_55, 5000, 0, 2);
				unk_0x2DCF88AC859255F3(iLocal_57, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0xF4B969E0807E76C7(iLocal_59, 0))
			{
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_59, 0))
				{
					unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
				}
			}
			if (!unk_0xF4B969E0807E76C7(iLocal_55, 0) && !unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
			{
				unk_0xA12E1659DEF57244(&uLocal_113);
				if (unk_0x9B79A29933E4A8FA() == iLocal_59)
				{
					unk_0x31A7662B885C7549(0, iLocal_59, -1, -1, 1f, 8, 0);
					unk_0x12038E5513D763A5(0, iLocal_59, unk_0x0FA8183DAD2B3203(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
				}
				unk_0x15A7B753872B3CE3(uLocal_113);
				unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
				unk_0x78829A259A6975CD(&uLocal_113);
				unk_0x7D81B41B134BD6F2(iLocal_55, 1);
				if (!unk_0xF4B969E0807E76C7(iLocal_57, 0))
				{
					unk_0xA12E1659DEF57244(&uLocal_113);
					if (unk_0x9B79A29933E4A8FA() == iLocal_59)
					{
						unk_0x31A7662B885C7549(0, iLocal_59, -1, 0, 2f, 1, 0);
						unk_0xA1FD592C7589E020(0, 100000);
					}
					else
					{
						unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
					}
					unk_0x15A7B753872B3CE3(uLocal_113);
					unk_0xC544A8E1032AC1CF(iLocal_57, uLocal_113);
					unk_0x78829A259A6975CD(&uLocal_113);
					unk_0x7D81B41B134BD6F2(iLocal_57, 1);
				}
			}
			unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
			while (func_71())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_2();
		}
	}
}

void func_98()
{
	Global_19671 = 0;
	func_99();
}

void func_99()
{
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0xE4F88BFF8FB3D84C();
		Global_21816 = 0;
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA63165E74E9A042B();
	iVar1 = unk_0x8F7802EF0E800F47();
	iVar2 = unk_0xCA3729F4C3A9E58A();
	if (iLocal_309 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_307)
		{
			unk_0x9964F5BBD9415AB7(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_103(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_102(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_102(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_103(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

int func_104(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_105()
{
	if (!unk_0x2BF5E63466422C38(iLocal_55))
	{
		if (!unk_0xF4B969E0807E76C7(iLocal_59, 0) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x95ED3BD0F52D542A(iLocal_55, iLocal_59, 0) && unk_0xC29ACA630455C49B(iLocal_59))
			{
				if (!func_71())
				{
					if (func_106())
					{
						func_4(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0x95ED3BD0F52D542A(iLocal_55, unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0) && unk_0xC29ACA630455C49B(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
			{
				if (!func_71())
				{
					func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_106()
{
	if (unk_0xA2BC31158C8CEFD2(unk_0xBAC643F143880136(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (!unk_0x2BF5E63466422C38(iLocal_55))
	{
		unk_0xD2939754183602A1(iLocal_55, 0);
	}
	if (!unk_0x2BF5E63466422C38(iLocal_57))
	{
		unk_0xD2939754183602A1(iLocal_57, 0);
	}
	if (((((unk_0x9B69E0F5342BA1A8(iLocal_55, unk_0x0FA8183DAD2B3203(), 4f, 4f, 4f, 0, 1, 0) || iLocal_49 == 1) || iLocal_126) || iLocal_127) || iLocal_125) || bLocal_118)
	{
		if ((((((iLocal_49 >= 2 && iLocal_120) && iLocal_49 != 1) && !iLocal_126) && !iLocal_127) && !iLocal_125) && !bLocal_118)
		{
			if (unk_0x9B69E0F5342BA1A8(iLocal_57, unk_0x0FA8183DAD2B3203(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (func_109())
				{
					func_108(0);
				}
			}
			else if (func_71() && !func_109())
			{
				func_108(1);
			}
		}
		else if (func_109())
		{
			func_108(0);
		}
	}
	else if (func_71() && !func_109())
	{
		func_108(1);
	}
}

void func_108(int iParam0)
{
	Global_21816 = iParam0;
}

int func_109()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	if ((unk_0xA63165E74E9A042B() > 2 && unk_0xA63165E74E9A042B() < 15) && !unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
	{
	}
	else
	{
		if (!unk_0x2BF5E63466422C38(iLocal_55))
		{
			unk_0xC6612209077465DD(iLocal_55);
			func_27();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0xD4B321D9096B01FC(iLocal_66))
			{
				unk_0x363E2170E626A00A(iLocal_66, 1, 1);
			}
		}
		while (func_71())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_2();
	}
}

void func_111()
{
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !unk_0x2BF5E63466422C38(iLocal_55))
	{
		if (!iLocal_115)
		{
			if ((unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 130f, 60f, 50f, 0, 1, 0) && !unk_0x7FB035B5755E076D(iLocal_55)) || unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_321))
				{
					uLocal_321 = func_70(iLocal_55, 0, 145);
					unk_0x73DF1B751952DA65(uLocal_321, 0);
					unk_0x6E2920E14F5F962C(iLocal_55, unk_0x0FA8183DAD2B3203(), -1, 2052, 4);
				}
				if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_321))
					{
						unk_0x73DF1B751952DA65(uLocal_321, 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					func_98();
					while (func_71())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!func_71())
					{
						if (func_16() == 0)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_16() == 1)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_16() == 2)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_115 = 1;
				}
			}
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !unk_0x2BF5E63466422C38(iLocal_55))
			{
				if ((!func_149() && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0x39A01A052D9B5FF0(uLocal_321))
				{
					if (!func_71())
					{
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
					{
						iLocal_65 = unk_0x9B79A29933E4A8FA();
					}
					func_112(1);
				}
			}
		}
		else if (!iLocal_301)
		{
			if (!unk_0x2BF5E63466422C38(iLocal_55))
			{
				if (!unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
				{
					func_27();
					unk_0x4EDE34FBADD967A6(0);
					func_4(&uLocal_136, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_301 = 1;
				}
			}
		}
	}
}

int func_112(int iParam0)
{
	if (func_116())
	{
		Global_111550 = 1;
		Global_111547 = unk_0x9B35D07DCD0F0B43();
		if (func_45(Global_111549))
		{
			func_113(0);
		}
		unk_0x3415792782E2E29A(1, "RE_TITLE");
		if (iParam0 && func_45(Global_111549))
		{
			unk_0x10C716954B3795A8();
		}
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_114(func_115(iParam0), -1);
					Global_111560.f_24990.f_2++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA2BC31158C8CEFD2(Global_111556, 1))
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_114(func_115(iParam0), -1);
					Global_111560.f_24990.f_3++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA2BC31158C8CEFD2(Global_111556, 2))
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_114(func_115(iParam0), -1);
					Global_111560.f_24990.f_4++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 2);
				}
			}
			break;
	}
}

void func_114(var uParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(uParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_30795, 0, 5, 0, unk_0x429EE9FF15BB9033()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_121(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		unk_0x80DD2AE2084AED15(unk_0x7A8732CFB5113E77(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x74DBD46763D0F643(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_119(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_41396);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (unk_0xD4B321D9096B01FC(iLocal_55))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_55))
		{
			if (unk_0x54D242CA888C9BF1(-1, unk_0xACE5E491FC1B0D37(iLocal_55, 1), 3f))
			{
				unk_0x5BBDAD06F405ED2C(iLocal_55);
				unk_0x0BBBAC4546BFE280(iLocal_55, 99, 0);
			}
			if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
			{
				if (unk_0xB8D4A2BAA78AB950(unk_0x9B79A29933E4A8FA()) < 3f)
				{
					unk_0x860A5CC30A0EF207(iLocal_55, 1);
				}
				else
				{
					unk_0x860A5CC30A0EF207(iLocal_55, 0);
					if (unk_0x7A10CED38342D31F(unk_0x9B79A29933E4A8FA(), iLocal_55))
					{
						unk_0x5BBDAD06F405ED2C(iLocal_55);
						unk_0x0BBBAC4546BFE280(iLocal_55, 99, 0);
					}
				}
			}
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_55, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (func_66(1, 0, 1))
					{
						if (!iLocal_311)
						{
							func_112(1);
							func_58(1, 1, 1, 0, 0, 0);
							unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 0);
							unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 1);
							unk_0x0D23E3918F7AF11B(1);
							unk_0x5AC8A91A3FD00B39(0);
							unk_0x4BEE8AE599A4A300(0);
							if (!unk_0x2BF5E63466422C38(iLocal_55))
							{
								unk_0xB82DC93528F8603C(unk_0xACE5E491FC1B0D37(iLocal_55, 1), 5f, 1, 0, 0, 0);
								unk_0xA61B7DD77FE81428(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 5f);
							}
							if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
							{
								if (unk_0x9B69E0F5342BA1A8(unk_0x9B79A29933E4A8FA(), iLocal_55, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0xCB3446C6A91D1A78(unk_0x9B79A29933E4A8FA(), unk_0xACE5E491FC1B0D37(iLocal_55, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0x1ECAE5FB4DE78CF8(unk_0x9B79A29933E4A8FA(), 1084227584);
								}
							}
							if (!unk_0x2BF5E63466422C38(iLocal_55))
							{
								uLocal_318 = unk_0xF2A54C51C03CADAA(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_134 = unk_0x87B0FFB353287F00("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x418ABE435B684083(uLocal_318, 0.158f);
								unk_0x0116AC515A8787A5(uLocal_134, uLocal_318, "untie_cam", "re@stag_do@");
								unk_0x5BBDAD06F405ED2C(unk_0x0FA8183DAD2B3203());
								unk_0x5BBDAD06F405ED2C(iLocal_55);
								unk_0x8582CCEB95B1F1BE(iLocal_55, uLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0xCFEC09B98C6C5993(iLocal_55, 0, 0);
								unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), uLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
								unk_0x0472F75F711AABCE(uLocal_134, 1);
								unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
								iLocal_311 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_311 && !iLocal_313)
	{
		func_27();
		unk_0x4EDE34FBADD967A6(0);
		if (func_16() == 0)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_16() == 1)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_16() == 2)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_313 = 1;
	}
	if (iLocal_311 && !iLocal_312)
	{
		if (!iLocal_316)
		{
			if (unk_0x91F0628278985DB8(uLocal_318) > 0.2f && unk_0x91F0628278985DB8(uLocal_318) < 0.3f)
			{
				unk_0x5F5C6A264C2CA8B1(-1, "ROPE_CUT", unk_0x0FA8183DAD2B3203(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_316 = 1;
			}
		}
		if (unk_0x91F0628278985DB8(uLocal_318) > 0.4647059f && !iLocal_317)
		{
			if (unk_0x03DB22289AD822D2() == 4)
			{
				unk_0x3E5A3FD805488EB9("CamPushInNeutral", 0, 0);
				unk_0x9964F5BBD9415AB7(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_317 = 1;
			}
		}
		if (unk_0x91F0628278985DB8(uLocal_318) > 0.5f)
		{
			iLocal_312 = 1;
		}
		if (func_123(1000))
		{
			unk_0x5800A2599806C837(800);
			while (unk_0xA710300CD13D2877())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_312 = 1;
			iLocal_315 = 1;
		}
	}
	if (iLocal_312 && !iLocal_314)
	{
		if (unk_0xD4B321D9096B01FC(iLocal_66))
		{
			unk_0x363E2170E626A00A(iLocal_66, 1, 1);
		}
		unk_0x5BBDAD06F405ED2C(unk_0x0FA8183DAD2B3203());
		unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 208.4017f);
		unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 0, 0);
		unk_0x0472F75F711AABCE(uLocal_134, 0);
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
		unk_0xDC5BA18043353983(uLocal_134, 0);
		unk_0xB489E71A45CDC02F(0f);
		unk_0xA291E27354439AE9(-7f, 1065353216);
		func_58(0, 1, 1, 0, 0, 0);
		unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 0);
		unk_0x5AC8A91A3FD00B39(1);
		unk_0x4BEE8AE599A4A300(1);
		if (!unk_0x2BF5E63466422C38(iLocal_55))
		{
			unk_0x860A5CC30A0EF207(iLocal_55, 0);
			unk_0x5BBDAD06F405ED2C(iLocal_55);
			unk_0x18CD1B73D89ABE21(iLocal_55, 1);
			unk_0xCB3446C6A91D1A78(iLocal_55, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0x5A2B7C446C0CF087(iLocal_55, 136.9073f);
			unk_0xCFEC09B98C6C5993(iLocal_55, 0, 0);
		}
		if (iLocal_315)
		{
			unk_0xCF33E56642B34516(800);
			while (unk_0xC862E94A8ABC89B8())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_315 = 0;
		}
		iLocal_317 = 0;
		iLocal_314 = 1;
	}
	if (iLocal_314 && !unk_0x2BF5E63466422C38(iLocal_55))
	{
		if (unk_0xD960230552BC4165(unk_0x9B79A29933E4A8FA(), 0))
		{
			if ((((((unk_0x9B69E0F5342BA1A8(iLocal_55, unk_0x9B79A29933E4A8FA(), 20f, 20f, 20f, 0, 1, 0) && unk_0x78B310CB286001B8(unk_0x9B79A29933E4A8FA()) >= 1) && !unk_0x5EA23EAAAD4E34BF(unk_0x7F375072508F738F(unk_0x9B79A29933E4A8FA()))) && !unk_0xDC118E11A4081E9A(unk_0x7F375072508F738F(unk_0x9B79A29933E4A8FA()))) && !unk_0x31337ABC07783F10(unk_0x7F375072508F738F(unk_0x9B79A29933E4A8FA()))) && !unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(unk_0x9B79A29933E4A8FA()))) && unk_0x7F375072508F738F(unk_0x9B79A29933E4A8FA()) != joaat("rhino"))
			{
				unk_0xA12E1659DEF57244(&uLocal_113);
				unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), 10000, 2048, 3);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 6500);
				unk_0x31A7662B885C7549(0, unk_0x9B79A29933E4A8FA(), -1, 0, 1f, 1, 0);
				unk_0x15A7B753872B3CE3(uLocal_113);
				unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
				unk_0x78829A259A6975CD(&uLocal_113);
			}
			else if (!unk_0xFF8C14957DF16F4D(iLocal_55))
			{
				unk_0x3B1D4A59B3B6B42C(iLocal_55, func_73());
				unk_0x174F0AF2FB5368AB(iLocal_55, 1);
				unk_0x946F21DEBF92050D(iLocal_55, 0);
			}
		}
		else if (!unk_0xFF8C14957DF16F4D(iLocal_55))
		{
			unk_0x3B1D4A59B3B6B42C(iLocal_55, func_73());
			unk_0x174F0AF2FB5368AB(iLocal_55, 1);
			unk_0x946F21DEBF92050D(iLocal_55, 0);
		}
		unk_0xCC94EE23853F38E4(iLocal_55, 0);
		unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
		uLocal_320 = func_29(Local_67, 1);
		iLocal_114 = 1;
		bLocal_116 = true;
		unk_0x7D74D6A091150B86("re@stag_do@");
		unk_0x7D74D6A091150B86("re@stag_do@idle_a");
		iLocal_305 = func_80(func_81());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_104(func_81());
		if (iLocal_304 >= 30)
		{
			iLocal_306 = 0;
			iLocal_307++;
		}
		if (iLocal_307 > 24)
		{
			iLocal_307 = (iLocal_307 - 24);
		}
		if (iLocal_307 == 0)
		{
			sLocal_302 = "stagd_ptime0";
		}
		else if (iLocal_307 == 1)
		{
			sLocal_302 = "stagd_ptime1";
		}
		else if (iLocal_307 == 2)
		{
			sLocal_302 = "stagd_ptime2";
		}
		else if (iLocal_307 == 3)
		{
			sLocal_302 = "stagd_ptime3";
		}
		else if (iLocal_307 == 4)
		{
			sLocal_302 = "stagd_ptime4";
		}
		else if (iLocal_307 == 5)
		{
			sLocal_302 = "stagd_ptime5";
		}
		else if (iLocal_307 == 6)
		{
			sLocal_302 = "stagd_ptime6";
		}
		else if (iLocal_307 == 7)
		{
			sLocal_302 = "stagd_ptime7";
		}
		else if (iLocal_307 == 8)
		{
			sLocal_302 = "stagd_ptime8";
		}
		else if (iLocal_307 == 9)
		{
			sLocal_302 = "stagd_ptime9";
		}
		else if (iLocal_307 == 10)
		{
			sLocal_302 = "stagd_ptim10";
		}
		else if (iLocal_307 == 11)
		{
			sLocal_302 = "stagd_ptim11";
		}
		else if (iLocal_307 == 12)
		{
			sLocal_302 = "stagd_ptim12";
		}
		else if (iLocal_307 == 13)
		{
			sLocal_302 = "stagd_ptim13";
		}
		else if (iLocal_307 == 14)
		{
			sLocal_302 = "stagd_ptim14";
		}
		else if (iLocal_307 == 15)
		{
			sLocal_302 = "stagd_ptim15";
		}
		else if (iLocal_307 == 16)
		{
			sLocal_302 = "stagd_ptim16";
		}
		else if (iLocal_307 == 17)
		{
			sLocal_302 = "stagd_ptim17";
		}
		else if (iLocal_307 == 18)
		{
			sLocal_302 = "stagd_ptim18";
		}
		else if (iLocal_307 == 19)
		{
			sLocal_302 = "stagd_ptim19";
		}
		else if (iLocal_307 == 20)
		{
			sLocal_302 = "stagd_ptim20";
		}
		else if (iLocal_307 == 21)
		{
			sLocal_302 = "stagd_ptim21";
		}
		else if (iLocal_307 == 22)
		{
			sLocal_302 = "stagd_ptim22";
		}
		else if (iLocal_307 == 23)
		{
			sLocal_302 = "stagd_ptim23";
		}
	}
}

int func_123(int iParam0)
{
	if (unk_0xBF28CCACDDFF5346())
	{
		if ((unk_0x9B35D07DCD0F0B43() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9B35D07DCD0F0B43();
		}
		Global_28 = unk_0x9B35D07DCD0F0B43();
		if ((unk_0x9B35D07DCD0F0B43() - Global_27) > iParam0)
		{
			if (func_124())
			{
				Global_27 = unk_0x9B35D07DCD0F0B43();
				return 1;
			}
		}
	}
	return 0;
}

int func_124()
{
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if (unk_0x26BB91778477F482(0, 18) || unk_0x26BB91778477F482(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_125()
{
	if (!unk_0x2BF5E63466422C38(iLocal_55))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0x00123AB82C5FAC28(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
			{
				unk_0xE5C667CF3B4642D2(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 1, 0);
			}
		}
		iLocal_133 = unk_0xDD5F765EB4E1D209(unk_0xACE5E491FC1B0D37(iLocal_55, 0), 30f, 0, 4);
		if (!unk_0xF4B969E0807E76C7(iLocal_133, 0))
		{
			if (!unk_0xBAA38708D7439CA7(iLocal_133, -1, 0))
			{
				if (unk_0x9B69E0F5342BA1A8(iLocal_133, iLocal_55, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xE5C667CF3B4642D2(iLocal_133, 1, 0);
					if (unk_0xD960230552BC4165(iLocal_133, 0))
					{
						unk_0x4A19798299FFF6B5(iLocal_133, 3000, 0, 0);
						if (!unk_0x2BF5E63466422C38(iLocal_55))
						{
							if (!func_71() && !iLocal_115)
							{
								func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0xF25956700ADFD77F(&iLocal_133);
				}
			}
		}
	}
}

void func_126()
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

void func_127()
{
	func_128(39, 1);
	func_128(40, 1);
	func_128(41, 1);
	func_128(42, 1);
	func_128(43, 1);
	func_128(44, 1);
	unk_0x6BB2B1818CAE531E(joaat("u_m_y_staggrm_01"));
	unk_0x6BB2B1818CAE531E(joaat("superd"));
	unk_0x6BB2B1818CAE531E(joaat("prop_stag_do_rope"));
	while ((!unk_0x6DF9C43E3CC645BC(joaat("u_m_y_staggrm_01")) || !unk_0x6DF9C43E3CC645BC(joaat("superd"))) || !unk_0x6DF9C43E3CC645BC(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x36B659209EBDD366("re@stag_do@");
	unk_0x36B659209EBDD366("re@stag_do@idle_a");
	unk_0x059780A8877D0C70("ROPE_CUT", 0, -1);
	while ((!unk_0xB25A0D192C6A0A5B("re@stag_do@") || !unk_0xB25A0D192C6A0A5B("re@stag_do@idle_a")) || !unk_0x059780A8877D0C70("ROPE_CUT", 0, -1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_55 = unk_0xB983F26E7AFB47BF(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0x5A36DB8F38E65BE2(iLocal_55, "GROOM");
	unk_0xDB889DCC8B0139E6(iLocal_55, joaat("player"));
	unk_0xCC94EE23853F38E4(iLocal_55, 1);
	unk_0x6E84F47D0D3E5BC9(iLocal_55, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_55, 2, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_55, 0, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_55, 3, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_55, 4, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_55, 11, 1, 0, 0);
	unk_0x49141855F16E64A1(iLocal_55, joaat("empty"));
	unk_0x372133FEEA436533(iLocal_55, 3);
	unk_0x1DB66BD2267055C0(iLocal_55, 206, 1);
	unk_0x1DB66BD2267055C0(iLocal_55, 134, 1);
	iLocal_66 = unk_0x7187764DB5121FC9(joaat("prop_stag_do_rope"), unk_0xACE5E491FC1B0D37(iLocal_55, 1), 1, 1, 0);
	unk_0x01DF2D3988024DB4(iLocal_66, iLocal_55, unk_0xDD454299E9E58208(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_59 = unk_0x847817A65E16621A(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0, 0);
	unk_0x4BA8ED9D4B9825B8(iLocal_59, 1);
	unk_0xFA8246C40ECE4497(iLocal_59, 0f);
	unk_0x54B5C3A13D3588F0(iLocal_59, 3);
	unk_0x97BEF8C19B950CA3(iLocal_59, 0);
	unk_0xB1DCD38C4375F0B5(iLocal_59, 0, 73, 0);
	unk_0x5D7E1E3426F92AFD(iLocal_59, 2, 48);
	unk_0xED4CA44675A55548(iLocal_59, 11, 1, 0);
	unk_0xED4CA44675A55548(iLocal_59, 12, 1, 0);
	unk_0x1CF6B9198AECD5B1(joaat("superd"), 3);
	unk_0x5C566093AEF7FD18(iLocal_59, 10000);
	unk_0x5952A867A6128951(iLocal_59, 5f);
	unk_0xBE90AE44ED49D493(iLocal_59);
	Local_77 = { -352.88f, 6164.31f, 30.5f };
	Local_80 = { -355.2565f, 6164.931f, 30.2944f };
	Local_83 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_86 = 25.375f;
	Local_87 = { -343.5804f, 6156.198f, 30.489f };
	Local_90 = { -1991.126f, 457.991f, 101.1808f };
	Local_93 = { -2002.69f, 460.539f, 99.828f };
	Local_96 = { -1997.605f, 445.6651f, 105.0519f };
	Local_99 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_102 = 24.6875f;
	Local_103 = { -2205.351f, 4298.79f, 47.265f };
	Local_106 = { -2207.525f, 4301.697f, 47.1803f };
	Local_109 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_112 = 12.5625f;
	Local_67 = { Local_90 };
	Local_70 = { Local_93 };
	Local_73 = { Local_96 };
	fLocal_76 = fLocal_102;
	unk_0x0A43D5D11052D038(joaat("superd"), 1);
	unk_0x80BCF42B42433CEB(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x740FE9B7B3FE1CE5(Local_87 - Vector(20f, 20f, 20f), Local_87 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x740FE9B7B3FE1CE5(unk_0xACE5E491FC1B0D37(iLocal_55, 0) - Vector(10f, 10f, 10f), unk_0xACE5E491FC1B0D37(iLocal_55, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x740FE9B7B3FE1CE5(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0x740FE9B7B3FE1CE5(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0xBB65AAC660EECEA8(unk_0xACE5E491FC1B0D37(iLocal_55, 1), 10f, 0);
	if (!unk_0xF4B969E0807E76C7(iLocal_55, 0))
	{
		unk_0xA12E1659DEF57244(&uLocal_113);
		unk_0x5D672CB011E20B28(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x15A7B753872B3CE3(uLocal_113);
		unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
		unk_0x78829A259A6975CD(&uLocal_113);
		unk_0x7D81B41B134BD6F2(iLocal_55, 1);
	}
	if (func_16() == 0)
	{
		func_96(&uLocal_136, 0, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1)
	{
		func_96(&uLocal_136, 0, unk_0x0FA8183DAD2B3203(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2)
	{
		func_96(&uLocal_136, 0, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
	}
	func_96(&uLocal_136, 3, iLocal_55, "GROOM", 0, 1);
	iLocal_50 = 1;
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_135(iParam0, 2, 1))
		{
			func_134(iParam0, 2, 1);
		}
	}
	else if (func_135(iParam0, 2, 1))
	{
		func_129(iParam0, 2, 1);
	}
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3B76114EC84D5812(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_40() == 0)
		{
			uVar0 = func_132(func_133(iParam0), -1, 0);
			unk_0x3B76114EC84D5812(&uVar0, iParam1);
			func_130(func_133(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_131(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, iParam3);
	}
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_133(int iParam0)
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
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

void func_134(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_40() == 0)
		{
			uVar0 = func_132(func_133(iParam0), -1, 0);
			unk_0xA1E7A40E1F56E511(&uVar0, iParam1);
			func_130(func_133(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_135(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_40() == 0)
		{
			return unk_0xA2BC31158C8CEFD2(func_132(func_133(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_136()
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_147())
		{
			return 0;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_137(float fParam0, bool bParam1)
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
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (func_18(func_16()))
		{
			iVar36 = func_50();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 2) && !unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_138(iVar32, &Var0);
					fVar35 = unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var0.f_6, 1);
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

void func_138(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
		
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
		
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
		
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_139(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_140(int iParam0)
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

struct<2> func_141(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_142(iParam0) };
	if (unk_0x9591DE0F00127F2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_142(int iParam0)
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

int func_143()
{
	if (func_146() && !func_147())
	{
		return 1;
	}
	if (func_145() && func_144())
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_111278 > 0;
}

int func_145()
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_146()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_147()
{
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0x98EF8A03317B1185() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_148()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_143())
	{
		return 1;
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_147())
		{
			return 0;
		}
	}
	if (func_137(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	if ((Global_111549 == func_54() && unk_0x86652FD1CD2DBA07()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_152(iParam0);
	unk_0xCFC4E8BEE304113D(0);
	unk_0x2D786727F990DBA9(1);
	Global_111546 = 0;
	func_151();
}

void func_151()
{
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			unk_0x0A43D5D11052D038(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)), 1);
		}
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 0);
	}
}

void func_152(int iParam0)
{
	Global_111549 = iParam0;
}

int func_153(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_150139)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_54();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_147())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_35(0))
		{
			return 0;
		}
		if (func_143())
		{
			return 0;
		}
		if (func_180())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_137(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_179(iParam3))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_178(func_16()) == 4 || func_178(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_177(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_176(Global_111560.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9B35D07DCD0F0B43() - Global_111551) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_175())
		{
			return 0;
		}
		if (unk_0xFF392459DD4CD797())
		{
			return 0;
		}
		if (unk_0x86652FD1CD2DBA07())
		{
			return 0;
		}
		if (!func_166(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_165(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x61837007ACF2F2C2(unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203())))
		{
			if ((unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(377.153f, -717.567f, 10.0536f) || unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(320.9934f, 265.2515f, 82.1221f)) || unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_165(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_179(30) && !func_165(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_164(iVar8))
				{
					if (func_155(iVar4))
					{
						if (!func_154(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var5) < (210f * 210f))
							{
								if (func_16() != iVar4)
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

bool func_154(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_156(iVar0);
}

int func_156(int iParam0)
{
	return func_157(iParam0, 1);
}

int func_157(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_164(iParam0))
	{
		return 0;
	}
	func_158(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_159(func_81(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_159(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_163(iParam0, iParam1))
	{
		iVar0 = func_88(iParam1);
		iVar1 = func_86(iParam0);
		iVar2 = (func_86(iParam0) - func_86(iParam1));
		iVar3 = (func_88(iParam0) - func_88(iParam1));
		iVar4 = (func_162(iParam0) - func_162(iParam1));
		iVar5 = (func_80(iParam0) - func_80(iParam1));
		iVar6 = (func_104(iParam0) - func_104(iParam1));
		iVar7 = (func_161(iParam0) - func_161(iParam1));
	}
	else
	{
		iVar0 = func_88(iParam0);
		iVar1 = func_86(iParam1);
		iVar2 = (func_86(iParam1) - func_86(iParam0));
		iVar3 = (func_88(iParam1) - func_88(iParam0));
		iVar4 = (func_162(iParam1) - func_162(iParam0));
		iVar5 = (func_80(iParam1) - func_80(iParam0));
		iVar6 = (func_104(iParam1) - func_104(iParam0));
		iVar7 = (func_161(iParam1) - func_161(iParam0));
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
		iVar4 = (iVar4 + func_85(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_160(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_160(float fParam0, float fParam1, float fParam2)
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

int func_161(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_162(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_164(iParam1) || !func_164(iParam0))
	{
		return 1;
	}
	iVar0 = func_86(iParam0);
	iVar1 = func_86(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_88(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	iVar1 = func_162(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_80(iParam0);
	iVar1 = func_80(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_161(iParam0);
	iVar1 = func_161(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
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
	iVar0 = func_161(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_104(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_80(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_86(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_88(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_162(iParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0, int iParam1)
{
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_174()) || Global_110607) || Global_30738) || func_173()) || func_24(8, -1)) || func_172()) || func_171()) || func_170()) || func_169()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1) || func_174()) || Global_30738) || func_173()) || func_24(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_174()) || Global_110607) || Global_30738) || func_173()) || func_24(8, -1)) || func_170()) || func_172()) || func_171()) || func_169()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_174()) || Global_110607) || Global_30738) || func_173()) || func_24(8, -1)) || func_172()) || func_171()) || func_169()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_174() || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || func_24(8, -1)) || func_169()) || func_168()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_172()) || func_171()) || func_168()) || func_167())
						{
							return 0;
						}
						if ((unk_0x16587C6F71675106() && unk_0xD2F18A1388CC0E5C() != 3) && unk_0x9995D24FB0AFE632() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
						{
							if ((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_174()) || Global_30738) || func_173()) || func_24(8, -1)) || func_171()) || func_170()) || func_169()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || func_174()) || func_171()) || Global_110607) || Global_30738) || func_173()) || Global_42561) || func_24(8, -1)) || func_170()) || func_168()) || func_169()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_174()) || Global_110607) || Global_30738) || func_173()) || func_24(8, -1)) || func_170()) || func_168()) || func_172()) || func_171()) || func_169())
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

var func_167()
{
	return Global_98708.f_1;
}

int func_168()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_169()
{
	if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_170()
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_171()
{
	return Global_98721.f_346 > 0;
}

bool func_172()
{
	return Global_98721.f_345 > 0;
}

var func_173()
{
	return Global_1312873;
}

int func_174()
{
	if (!unk_0x393E9918BC37548A())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_175()
{
	func_15();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0)
{
	return func_163(func_81(), iParam0);
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_178(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_179(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_181())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA2BC31158C8CEFD2(Global_111560.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA2BC31158C8CEFD2(Global_111560.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_180()
{
	int iVar0;
	
	if (Global_30886)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(iVar0, 0))
			{
				if (!unk_0x2BF5E63466422C38(unk_0x300C62F79A4441EB(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_181()
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
					iVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&iVar0, 0);
					unk_0x553DEB79071ABB59(iVar0);
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

int func_182(int iParam0, int iParam1)
{
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_183()
{
	if (iLocal_51)
	{
		func_219(0);
		unk_0x80BCF42B42433CEB(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xD931F7E3EEBC7B7D();
		func_27();
		unk_0x64A2CE33F8382B61(unk_0x7C7787D2D7139A85());
		if (!unk_0xF4B969E0807E76C7(iLocal_65, 0))
		{
			if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_65, 0) && !unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_65, 50f, 50f, 50f, 0, 1, 0))
			{
				func_195(iLocal_65, 0, 145);
			}
		}
		if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_87, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_55) && !unk_0x2BF5E63466422C38(iLocal_57))
			{
				unk_0xA12E1659DEF57244(&uLocal_113);
				unk_0xD06C31EF9A42C2B4(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xBEFFB3F3CF5BFBCD(0, iLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x15A7B753872B3CE3(uLocal_113);
				unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_113);
				unk_0x78829A259A6975CD(&uLocal_113);
				unk_0xA12E1659DEF57244(&uLocal_113);
				unk_0xD06C31EF9A42C2B4(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xBEFFB3F3CF5BFBCD(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x15A7B753872B3CE3(uLocal_113);
				unk_0xC544A8E1032AC1CF(iLocal_57, uLocal_113);
				unk_0x78829A259A6975CD(&uLocal_113);
			}
		}
		unk_0xF25956700ADFD77F(&iLocal_133);
		unk_0xF25956700ADFD77F(&iLocal_59);
		if (!unk_0x87407D4AFED33A53(unk_0x7C7787D2D7139A85()))
		{
			unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
		}
		if (!unk_0x2BF5E63466422C38(iLocal_55))
		{
			unk_0x1DB66BD2267055C0(iLocal_55, 317, 1);
			if (!unk_0xCA7317DE7E0F89E9(iLocal_55))
			{
				unk_0x860A5CC30A0EF207(iLocal_55, 0);
			}
			unk_0x91F590A9823EB649(iLocal_55);
			unk_0xCC94EE23853F38E4(iLocal_55, 0);
		}
		else if (unk_0xD4B321D9096B01FC(iLocal_66))
		{
			unk_0x363E2170E626A00A(iLocal_66, 1, 1);
		}
		unk_0x0FFB05DA97E810B5(&iLocal_55);
		if (!unk_0x2BF5E63466422C38(iLocal_57))
		{
			unk_0x1DB66BD2267055C0(iLocal_57, 317, 1);
			unk_0xCC94EE23853F38E4(iLocal_57, 0);
		}
		unk_0x0FFB05DA97E810B5(&iLocal_57);
		if (!unk_0x2BF5E63466422C38(iLocal_56))
		{
			unk_0xCC94EE23853F38E4(iLocal_56, 0);
		}
		if (!unk_0x2BF5E63466422C38(iLocal_58))
		{
			unk_0xCC94EE23853F38E4(iLocal_58, 0);
		}
		unk_0x0FFB05DA97E810B5(&iLocal_56);
	}
	func_184(-1);
	unk_0x9C9E32388A7886A2();
}

void func_184(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_149())
	{
		func_188(iParam0);
		unk_0x3415792782E2E29A(0, 0);
		Global_111551 = unk_0x9B35D07DCD0F0B43();
		func_187(30000);
		StringCopy(&cVar0, func_186(Global_111549, 1), 64);
		if (func_53(Global_111549) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111548, 64);
		}
		unk_0xB9C42DF94EB4ABBE(&cVar0, Global_111546, (unk_0x9B35D07DCD0F0B43() - Global_111547), 0);
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111556, 0) && Global_111560.f_24990.f_2 < 3)
	{
		unk_0x3B76114EC84D5812(&Global_111556, 0);
	}
	func_185(&Global_30795);
	Global_111550 = 0;
	func_152(-1);
}

void func_185(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

char* func_186(int iParam0, bool bParam1)
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

void func_187(int iParam0)
{
	Global_41947 = (unk_0x9B35D07DCD0F0B43() + iParam0);
}

void func_188(int iParam0)
{
	func_189(iParam0, 0, func_194(iParam0));
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_81();
	func_192(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_191(iParam0, &uVar0);
	Var1 = { func_190(&uVar0) };
}

struct<16> func_190(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_80(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_161(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_162(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_88(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_86(*uParam0), 64);
	return Var0;
}

void func_191(int iParam0, var uParam1)
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_162(*uParam0);
	iVar3 = func_80(*uParam0);
	iVar4 = func_104(*uParam0);
	iVar5 = func_161(*uParam0);
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
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_193(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_193(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
}

int func_194(int iParam0)
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

int func_195(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x91523661893D9A04(iParam0, &uVar0);
		if (!unk_0x9591DE0F00127F2A(uVar1))
		{
			if (unk_0xA8C462EF7D9DC564(uVar1) == unk_0xA8C462EF7D9DC564("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_196(iParam0, iParam2);
	return 1;
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_202(iParam0))
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
	func_197(iParam0, &(Global_111560.f_32744.f_5510));
}

void func_197(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		func_201(uParam1);
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
		if (uParam1->f_65 == -1 && !func_200(uParam1->f_66))
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
		func_199(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x21A121AEFFBC84B4(iParam0, iVar0 + 1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_198(iVar0 + 1));
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

int func_198(int iParam0)
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

int func_199(int iParam0, var uParam1, var uParam2)
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

int func_200(int iParam0)
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

void func_201(var uParam0)
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

int func_202(int iParam0)
{
	if ((((((((((!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0)) || func_217(iParam0, 0, 0)) || func_217(iParam0, 1, 0)) || func_217(iParam0, 2, 0)) || func_216(iParam0) != 145) || func_215(iParam0)) || func_214(iParam0)) || func_213(iParam0)) || func_212(iParam0)) || !func_203(unk_0x7F375072508F738F(iParam0)))
	{
		if (func_214(iParam0))
		{
		}
		if (func_214(iParam0))
		{
		}
		if (func_217(iParam0, 0, 0))
		{
		}
		if (func_217(iParam0, 1, 0))
		{
		}
		if (func_217(iParam0, 2, 0))
		{
		}
		if (func_216(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_203(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_204(iParam0, 0))
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

int func_204(int iParam0, bool bParam1)
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
		if (!func_181())
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
		if ((((!func_211() && !func_210()) && !func_209()) && !func_208()) && !func_181())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x77BA37DB22C66465() || unk_0xE434AB6E3DE89861()) || unk_0x39FDED461BF385C3())
		{
		}
		else if (!func_209())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_207(iParam0))
		{
			return 0;
		}
	}
	if (!func_205(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_205(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_206())
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

int func_206()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

int func_207(int iParam0)
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

int func_208()
{
	return 0;
}

int func_209()
{
	return 1;
}

int func_210()
{
	return 1;
}

int func_211()
{
	if (unk_0x9742C47C6EA02281(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x7F375072508F738F(iParam0);
	uVar1 = unk_0x8D762F81855E767B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x2553916E420E8EF0(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_204(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
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

int func_214(int iParam0)
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

int func_215(int iParam0)
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

int func_216(int iParam0)
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

int func_217(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_218(iParam1, iVar0, &sVar1, &iVar9))
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

int func_218(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_128(iVar0, bParam0);
		iVar0++;
	}
}

