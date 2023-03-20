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
	if (unk_0x4B4BD87E3D30C50D(11))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_55))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_55))
			{
				unk_0xD3778FD9E17F7E71(iLocal_55);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_57))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_57))
			{
				unk_0xD3778FD9E17F7E71(iLocal_57);
			}
		}
		func_176();
	}
	if (func_175(283, 1))
	{
		unk_0x2F798BA2098FDADE();
	}
	if (func_146(Local_52, -1, 0, 0, 0))
	{
		if ((unk_0x5C5157A539753532() > 2 && unk_0x5C5157A539753532() < 15) && !unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
		{
		}
		else
		{
			unk_0x2F798BA2098FDADE();
		}
		func_143(-1);
	}
	else
	{
		unk_0x2F798BA2098FDADE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD8AD97AB31334199() || bLocal_116)
		{
			if (!func_142())
			{
				if (func_141())
				{
					func_176();
				}
			}
			unk_0x185B194BB229460F("RE_SDRM", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_129())
					{
						func_176();
					}
					if (iLocal_50)
					{
						iLocal_51 = 1;
						iLocal_48 = 1;
					}
					else
					{
						func_120();
					}
					break;
				
				case 1:
					func_119();
					if (!iLocal_114)
					{
						func_118();
						func_115();
						func_104();
						if (!unk_0x671C6C3F21245221(uLocal_318))
						{
							func_103();
						}
					}
					else
					{
						func_100();
						if (!bLocal_124)
						{
							func_98();
						}
						func_90();
						func_88();
						func_72();
						func_71(iLocal_55, 0);
						if (!bLocal_121)
						{
						}
						if (iLocal_49 == 0 && !bLocal_118)
						{
							func_67();
							func_65();
						}
						else
						{
							func_60();
						}
						if (iLocal_49 == 3)
						{
							if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_87, 1) < 100f)
							{
								if (!unk_0x8F97015FD3089C6B())
								{
									unk_0x3C0CECAD08F71003("sdrm_mcs_2", 8);
								}
								if (unk_0x8F97015FD3089C6B())
								{
									if (unk_0x8B301CC099349249())
									{
										if ((((!unk_0x1E80C02AC16B6622(iLocal_55) && !unk_0x1E80C02AC16B6622(iLocal_57)) && !unk_0x1E80C02AC16B6622(iLocal_56)) && !unk_0x1E80C02AC16B6622(iLocal_58)) && !unk_0x0B6E83A9A7ED3EBA(iLocal_132))
										{
											unk_0x3F8582AA8665B742("Groom", iLocal_55, 0);
											unk_0x3F8582AA8665B742("Groomsman", iLocal_57, 0);
											unk_0x3F8582AA8665B742("Bride", iLocal_56, 0);
											unk_0x3F8582AA8665B742("Father_of_the_bride", iLocal_58, 0);
										}
									}
								}
							}
							else if (unk_0x8F97015FD3089C6B())
							{
								unk_0xF5626435714EF511();
							}
							if (bLocal_118)
							{
								if (func_59(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!unk_0x1E80C02AC16B6622(iLocal_57))
							{
								if (unk_0xB42592B9FFEB5EDE(iLocal_57, 0))
								{
									if (unk_0xC3B073777B46C61A(uLocal_322))
									{
										unk_0x296CDA10C549A502(&uLocal_322);
										if (unk_0xC3B073777B46C61A(uLocal_320))
										{
											unk_0x296CDA10C549A502(&uLocal_320);
										}
										if (!unk_0xC3B073777B46C61A(uLocal_320))
										{
											uLocal_320 = func_23(Local_67, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_55))
							{
								unk_0x23E5F4496336DE4E(iLocal_55, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
							}
							if (!unk_0x1E80C02AC16B6622(iLocal_57))
							{
								unk_0x23E5F4496336DE4E(iLocal_57, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
							}
							if (!unk_0x1E80C02AC16B6622(iLocal_56))
							{
								unk_0x23E5F4496336DE4E(iLocal_56, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
							}
							if (!unk_0x1E80C02AC16B6622(iLocal_58))
							{
								unk_0x23E5F4496336DE4E(iLocal_58, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
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
			func_176();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_176();
}

int func_3()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x1E80C02AC16B6622(iLocal_55))
		{
			return 1;
		}
		else
		{
			if (unk_0xCC580427ED36D7F8(iLocal_55, unk_0x77F050A399DB77ED(), 1) || unk_0xAB5BBCD9D3B6625D(iLocal_55))
			{
				return 1;
			}
			if (bLocal_116)
			{
				if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
				{
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
	{
		if ((!unk_0x968EA16107097324(iLocal_59, 0) || unk_0x184475778464D638(iLocal_59)) || unk_0xAB5BBCD9D3B6625D(iLocal_59))
		{
			func_21();
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("towtruck")) || unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("towtruck2")))
			{
				if (unk_0xFF8B60AD533C7DBD(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), iLocal_59))
				{
					func_21();
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
		func_21();
		if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_55))
	{
		if (!unk_0x0C8E94332AE582B1(iLocal_55, unk_0x77F050A399DB77ED(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0))
				{
					unk_0xAE2A4A0F9CAF9436(unk_0x8ACD527A7E574590(), 1, 0);
					unk_0x9A4BA5F30B763D3E(unk_0x8ACD527A7E574590(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (unk_0x1E80C02AC16B6622(iLocal_57))
			{
				func_21();
				return 1;
			}
			else if (unk_0xCC580427ED36D7F8(iLocal_57, unk_0x77F050A399DB77ED(), 1))
			{
				func_21();
				return 1;
			}
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
		{
			if (!unk_0x0C8E94332AE582B1(iLocal_59, unk_0x77F050A399DB77ED(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (!iLocal_126)
				{
					func_21();
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
			if (!unk_0x0C8E94332AE582B1(iLocal_59, unk_0x77F050A399DB77ED(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_49 == 3)
	{
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (unk_0x1E80C02AC16B6622(iLocal_56) || unk_0x1E80C02AC16B6622(iLocal_58))
			{
				return 1;
			}
			else if (unk_0xCC580427ED36D7F8(iLocal_56, unk_0x77F050A399DB77ED(), 1) || unk_0xCC580427ED36D7F8(iLocal_58, unk_0x77F050A399DB77ED(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_57))
		{
			if (!unk_0x0C8E94332AE582B1(iLocal_57, unk_0x77F050A399DB77ED(), 20f, 20f, 20f, 0, 1, 0) && iLocal_310)
			{
				if (!iLocal_127)
				{
					func_21();
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
			if (!unk_0x0C8E94332AE582B1(iLocal_57, unk_0x77F050A399DB77ED(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC9AB825AA4821BDA(0);
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
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_17();
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
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_10();
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
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
				}
			}
			if (func_8())
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_7()
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
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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

void func_10()
{
	if (func_16(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
		Global_14413 = func_11();
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

int func_11()
{
	func_12();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_15(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_14(unk_0x77F050A399DB77ED());
			if (func_13(iVar0) && (!func_16(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_13(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_19()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_21()
{
	Global_14578 = 0;
	func_22();
}

void func_22()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

var func_23(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_24(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
	return uVar0;
}

float func_24(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_25()
{
	switch (iLocal_131)
	{
		case 0:
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_52(1, 1, 1, 0);
			unk_0x96F404D8672AE95B(0);
			iLocal_310 = 0;
			iLocal_131++;
			break;
		
		case 1:
			iLocal_131++;
			break;
		
		case 2:
			if ((((!unk_0x1E80C02AC16B6622(iLocal_55) && !unk_0x1E80C02AC16B6622(iLocal_57)) && !unk_0x1E80C02AC16B6622(iLocal_56)) && !unk_0x1E80C02AC16B6622(iLocal_58)) && !unk_0x0B6E83A9A7ED3EBA(iLocal_132))
			{
				if (func_51())
				{
					unk_0x78C7E0369425C575(iLocal_132, "SDRM_Car", 0, 0, 0);
					unk_0x78C7E0369425C575(iLocal_55, "Groom", 0, 0, 0);
					unk_0x78C7E0369425C575(iLocal_57, "Groomsman", 0, 0, 0);
					unk_0x78C7E0369425C575(iLocal_56, "Bride", 0, 0, 0);
					unk_0x78C7E0369425C575(iLocal_58, "Father_of_the_bride", 0, 0, 0);
					unk_0xE568A9F724E3F204(4);
					iLocal_131++;
				}
			}
			break;
		
		case 3:
			if (unk_0x82D4A1789BA62554(0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_132))
				{
					unk_0xC1D3820702043A43(iLocal_132);
					unk_0x3C072F008135D7A8(iLocal_132, 1);
					unk_0x1B40500A7841D6AB(1);
					unk_0x488AF65D7EDB6B4A(1);
					unk_0x8793DE27084C2CBD(0f);
					unk_0xABF261CA61470DE0(-7f, 1065353216);
				}
				iLocal_131++;
			}
			break;
		
		case 4:
			unk_0xAB3098579170FA46(&iLocal_55);
			unk_0xAB3098579170FA46(&iLocal_57);
			unk_0xAB3098579170FA46(&iLocal_56);
			unk_0xAB3098579170FA46(&iLocal_58);
			func_52(0, 1, 1, 0);
			unk_0x96F404D8672AE95B(1);
			func_26();
			break;
	}
}

void func_26()
{
	while (!func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_30(-1, 0);
	func_27();
	func_176();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0))
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

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_47(iParam0))
	{
		func_46(iParam0, iParam1);
		if (!func_45(51))
		{
			func_41("RE_REWARD", 1, 0, 4000, 10000, func_44(), 0, 138, 0);
			func_40(51);
		}
		if (func_39(iParam0))
		{
			Global_99250.f_29448.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322)
		{
			func_32(func_38(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_99238 = iParam1;
		if (Global_99236 == 0)
		{
			if (((Global_99239 == 1 || Global_99239 == 5) || Global_99239 == 11) || Global_99239 == 25)
			{
				func_31(2);
			}
			else if ((Global_99239 == 26 || Global_99239 == 8) || Global_99239 == 17)
			{
				func_31(7);
			}
			else
			{
				func_31(1);
			}
		}
	}
}

void func_31(int iParam0)
{
	Global_99236 = iParam0;
}

void func_32(int iParam0, var uParam1, var uParam2)
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
		func_36((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = uParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_33();
	}
}

void func_33()
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_35(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_34() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_28();
				}
			}
		}
	}
}

int func_34()
{
	return Global_25115;
}

int func_35(int iParam0, int iParam1)
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_37()
{
	return Global_1312746;
}

int func_38(int iParam0, int iParam1)
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

int func_39(int iParam0)
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

void func_40(int iParam0)
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
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44()
{
	func_12();
	switch (Global_99250.f_1754.f_539.f_3549)
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

int func_45(int iParam0)
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
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_99250.f_29448.f_8[iParam0]), iParam1);
}

int func_47(int iParam0)
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

int func_48()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x664B47C58CE8A0A4(), 64);
	uVar16 = func_49(Var0);
	return uVar16;
}

int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x39BD4614CF899227(&cParam0))
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

int func_50()
{
	return 1;
}

bool func_51()
{
	bool bVar0;
	
	bVar0 = unk_0x575DA8209967217A();
	if (!Global_69316)
	{
		if (!bVar0)
		{
			Global_69316 = 1;
		}
	}
	return bVar0;
}

void func_52(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_58(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_8())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_57(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_58(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_57(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_53(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_53(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_54())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_56(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315888[iVar1] == 1)
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

int func_57(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xACF19F629EE5429B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
		iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (bParam0)
		{
			if (unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				if (unk_0x07A8845F7F106A38(iVar0, -1) != unk_0x77F050A399DB77ED())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0x8ED30F31356C7C7C(iVar0) < 0.95f || unk_0x8ED30F31356C7C7C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!unk_0x99BA09207E5CDC50(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	return 1;
}

void func_60()
{
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59) && !unk_0x0B6E83A9A7ED3EBA(iLocal_55))
	{
		if (!iLocal_117)
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0) && unk_0xE5FADE1166052251(iLocal_55, iLocal_59, 0))
			{
				iLocal_117 = 1;
				if (unk_0xC3B073777B46C61A(uLocal_319))
				{
					unk_0x296CDA10C549A502(&uLocal_319);
				}
				if (iLocal_122 && !bLocal_118)
				{
					if (!unk_0xC3B073777B46C61A(uLocal_320))
					{
						uLocal_320 = func_23(Local_67, 1);
					}
				}
				if (!func_64())
				{
				}
			}
		}
		if (!iLocal_117 && !iLocal_119)
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0))
			{
				if (!unk_0xE5FADE1166052251(iLocal_55, iLocal_59, 0))
				{
					if (!func_64())
					{
					}
					if (unk_0xC3B073777B46C61A(uLocal_319))
					{
						unk_0x296CDA10C549A502(&uLocal_319);
					}
					if (!unk_0xC3B073777B46C61A(uLocal_319))
					{
						uLocal_319 = func_63(iLocal_55, 0, 145);
						unk_0x0AA0CF6371DDEDCF(uLocal_319, 1);
					}
					iLocal_117 = 0;
					iLocal_119 = 1;
				}
			}
		}
		if (iLocal_117)
		{
			if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xC3B073777B46C61A(uLocal_319))
				{
					uLocal_319 = func_61(iLocal_59, 0, 0);
					unk_0x0AA0CF6371DDEDCF(uLocal_319, 1);
				}
				if (unk_0xC3B073777B46C61A(uLocal_320))
				{
					unk_0x296CDA10C549A502(&uLocal_320);
				}
				iLocal_117 = 0;
			}
			if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0) && !unk_0xE5FADE1166052251(iLocal_55, iLocal_59, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xC3B073777B46C61A(uLocal_319))
				{
					uLocal_319 = func_61(iLocal_59, 0, 0);
					unk_0x0AA0CF6371DDEDCF(uLocal_319, 1);
				}
				if (unk_0xC3B073777B46C61A(uLocal_320))
				{
					unk_0x296CDA10C549A502(&uLocal_320);
				}
				iLocal_117 = 0;
			}
		}
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_62(iParam0, !bParam1, bParam2);
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_24(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_24(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_24(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC3B073777B46C61A(uVar0)) && unk_0x03BBACB5FC5BF182(&(Global_99250.f_32503[iParam2 /*29*/].f_3)))
	{
		unk_0x45C91EE3FC674072(uVar0, &(Global_99250.f_32503[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	if (unk_0x1F2158D615BC4B25(iLocal_55))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_55))
		{
			if (unk_0x0C8E94332AE582B1(iLocal_55, unk_0x77F050A399DB77ED(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0xB42592B9FFEB5EDE(iLocal_55, 0)) || unk_0xE335E4A7ECEE63F4(unk_0x77F050A399DB77ED()))
				{
					if (unk_0xC3B073777B46C61A(uLocal_321))
					{
						unk_0x296CDA10C549A502(&uLocal_321);
						if (!unk_0xC3B073777B46C61A(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0xB42592B9FFEB5EDE(iLocal_55, 0))
				{
					if (unk_0xC3B073777B46C61A(uLocal_321))
					{
						unk_0x296CDA10C549A502(&uLocal_321);
						if (!unk_0xC3B073777B46C61A(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0xC3B073777B46C61A(uLocal_320))
				{
					unk_0x296CDA10C549A502(&uLocal_320);
					if (!unk_0xC3B073777B46C61A(uLocal_321))
					{
						uLocal_321 = func_63(iLocal_55, 0, 145);
					}
				}
				if (unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()))
				{
				}
			}
			else if (unk_0xC3B073777B46C61A(uLocal_320))
			{
				unk_0x296CDA10C549A502(&uLocal_320);
				if (!unk_0xC3B073777B46C61A(uLocal_321))
				{
					uLocal_321 = func_63(iLocal_55, 0, 145);
				}
			}
			if (!unk_0x3E5CB294501B40E0(iLocal_55))
			{
				if (!unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0xE2CB8488CFA42209(iLocal_55);
					unk_0x92D84E1899554EA4(iLocal_55, func_66());
					unk_0x86CD6F98059D0E25(iLocal_55, 1);
					unk_0xBD99B054E78B74CC(iLocal_55, 0);
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
				{
					unk_0xE2CB8488CFA42209(iLocal_55);
					unk_0x92D84E1899554EA4(iLocal_55, func_66());
					unk_0x86CD6F98059D0E25(iLocal_55, 1);
					unk_0xBD99B054E78B74CC(iLocal_55, 0);
				}
			}
		}
	}
}

var func_66()
{
	return unk_0x9E97D0ACA210D142(unk_0x7F3E348C0892D8D2());
}

void func_67()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_55))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
		{
			if (!func_70())
			{
				if (unk_0x3E5CB294501B40E0(iLocal_55))
				{
					unk_0xD3778FD9E17F7E71(iLocal_55);
				}
				if (unk_0x49C650267EDFEBC6(iLocal_55, 1227113341) != 1 && unk_0x49C650267EDFEBC6(iLocal_55, 1227113341) != 0)
				{
					unk_0xAFB86418412C8866(iLocal_55, unk_0x77F050A399DB77ED(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0xB42592B9FFEB5EDE(iLocal_55, 0))
				{
					unk_0x743E219F0C060EE5(iLocal_55, 0, 0);
				}
				if (!iLocal_125)
				{
					if (!func_64())
					{
						iLocal_125 = 1;
						if (func_69())
						{
							func_68(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_68(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_125 = 0;
				if (((unk_0x49C650267EDFEBC6(iLocal_55, 1227113341) == 1 || unk_0x49C650267EDFEBC6(iLocal_55, 1227113341) == 0) || unk_0x49C650267EDFEBC6(iLocal_55, 242628503) == 1) || unk_0x49C650267EDFEBC6(iLocal_55, 242628503) == 0)
				{
					unk_0xE2CB8488CFA42209(iLocal_55);
					if (!unk_0x3E5CB294501B40E0(iLocal_55))
					{
						unk_0x92D84E1899554EA4(iLocal_55, func_66());
						unk_0x86CD6F98059D0E25(iLocal_55, 1);
						unk_0xBD99B054E78B74CC(iLocal_55, 0);
					}
				}
			}
		}
		else if (((!unk_0x3E5CB294501B40E0(iLocal_55) && !unk_0xB42592B9FFEB5EDE(iLocal_55, 0)) && unk_0x49C650267EDFEBC6(iLocal_55, 242628503) != 1) && unk_0x49C650267EDFEBC6(iLocal_55, 242628503) != 0)
		{
			unk_0x92D84E1899554EA4(iLocal_55, func_66());
			unk_0x86CD6F98059D0E25(iLocal_55, 1);
			unk_0xBD99B054E78B74CC(iLocal_55, 0);
		}
	}
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_69()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		if (unk_0x968EA16107097324(unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), 1))
		{
			if ((unk_0x583E994764B3211E(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1))) || unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1)))) || unk_0x93FA2C9C44279C1C(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
		{
			if (((((!unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED()) && !unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED())) && !unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) && !unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) && !unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED())) && !unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("rhino")))
			{
				if (unk_0x1205624841D11747(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		if (unk_0x968EA16107097324(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()), 0))
		{
			if ((((!unk_0xD3FAF4AD23FDF2DA(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()))) && !unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && !unk_0x4F32F86538FB8979(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && !unk_0xD68DC1905B617ADD(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_71(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()) && unk_0xB2D1758C032223EA(iParam0))
			{
				if (unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0) == unk_0xF8D66A34AF0C53A5(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0x404D1ED8CA2B4615(iParam0, unk_0x77F050A399DB77ED()))
		{
			if (!bVar0)
			{
				unk_0xD0C8DD55C652567F(iParam0, unk_0x77F050A399DB77ED(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x85903652F1E9E110(iParam0))
			{
				unk_0x8530DA8508D7A4B8(iParam0);
			}
		}
	}
}

void func_72()
{
	if (unk_0x1F2158D615BC4B25(iLocal_55))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_55) && !unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (func_86("stagd_chape_1"))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_320))
				{
					uLocal_320 = func_23(Local_67, 1);
				}
				iLocal_122 = 1;
			}
			if (func_86("stagd_chape_3"))
			{
				unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
				if (!unk_0x1E80C02AC16B6622(iLocal_55))
				{
					if (unk_0xB42592B9FFEB5EDE(iLocal_55, 0))
					{
						unk_0x2A6B9F9E71C479CF(&uLocal_113);
						unk_0x8530DA8508D7A4B8(0);
						unk_0x29D57ADC67EC1C74(0, 30600);
						unk_0x44642CB08FA1637E(uLocal_113);
						unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
						unk_0xAAD288E877AC833D(&uLocal_113);
					}
				}
			}
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				if (unk_0xE5FADE1166052251(iLocal_55, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
				{
					if (iLocal_49 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_130 == 0)
							{
								if (!func_64())
								{
									func_85();
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
								if (!func_64())
								{
									unk_0x1B40500A7841D6AB(1);
									unk_0x488AF65D7EDB6B4A(1);
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_130 == 2)
							{
								if (!func_64())
								{
									func_85();
									if (func_11() == 0)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_11() == 1)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_11() == 2)
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
							if (!func_64())
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
									if (!func_64())
									{
										iLocal_130++;
									}
								}
							}
						}
						if (!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_87, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_303 == 0)
							{
								if (iLocal_307 == func_73(func_74()) + 11)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
							if (iLocal_303 < 2)
							{
								if (iLocal_307 == func_73(func_74()) + 10)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
							if (iLocal_303 < 3)
							{
								if (iLocal_307 == func_73(func_74()) + 9)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
							if (iLocal_303 < 4)
							{
								if (iLocal_307 == func_73(func_74()) + 8)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
							if (iLocal_303 < 5)
							{
								if (iLocal_307 == func_73(func_74()) + 7)
								{
									if (!func_64())
									{
										iLocal_303 = 5;
									}
								}
							}
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										iLocal_303 = 6;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										iLocal_303 = 7;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										iLocal_303 = 8;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_73(func_74()) + 1)
								{
									if (!func_64())
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
								if (iLocal_307 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_73(func_74()) + 1)
								{
									if (!func_64())
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

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_74()
{
	var uVar0;
	
	func_84(&uVar0, unk_0x624CC88A8815545E());
	func_83(&uVar0, unk_0xD3D98375D5CA69E4());
	func_82(&uVar0, unk_0x5C5157A539753532());
	func_77(&uVar0, unk_0xCB12BC5A618B995B());
	func_76(&uVar0, unk_0x9746D90F14C930B9());
	func_75(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_75(var uParam0, int iParam1)
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

void func_76(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_81(*uParam0);
	iVar1 = func_79(*uParam0);
	if (iParam1 < 1 || iParam1 > func_78(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_80(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_80(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_81(int iParam0)
{
	return iParam0 & 15;
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_85()
{
	Global_14578 = 0;
	func_19();
}

int func_86(char* sParam0)
{
	var uVar0;
	
	if (func_64())
	{
		MemCopy(&uVar0, {func_87()}, 4);
		if (unk_0x35D1CAD6ADAB6491(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_87()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x3EA88DB5F5F71A3B();
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

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x1F2158D615BC4B25(iLocal_55))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_55))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_55))
			{
				if (!iLocal_129 && bLocal_118)
				{
					unk_0x6E20845D23D3DFD4(0, 75, 1);
					unk_0x6E20845D23D3DFD4(0, 80, 1);
					iVar0 = unk_0x1B5ACB4894956DC7();
					if (iVar0 != 0)
					{
						iVar1 = unk_0x7DF7F572759C0E1B(iVar0);
						if (iVar1 != 4)
						{
							unk_0x6E20845D23D3DFD4(0, 79, 1);
							unk_0x6E20845D23D3DFD4(0, 286, 1);
							unk_0x6E20845D23D3DFD4(0, 287, 1);
							unk_0x6E20845D23D3DFD4(0, 26, 1);
							unk_0x6E20845D23D3DFD4(0, 273, 1);
							unk_0x6E20845D23D3DFD4(0, 4, 1);
							unk_0x6E20845D23D3DFD4(0, 270, 1);
							unk_0x6E20845D23D3DFD4(0, 5, 1);
							unk_0x6E20845D23D3DFD4(0, 1, 1);
							unk_0x6E20845D23D3DFD4(0, 271, 1);
							unk_0x6E20845D23D3DFD4(0, 6, 1);
							unk_0x6E20845D23D3DFD4(0, 2, 1);
							unk_0x6E20845D23D3DFD4(0, 272, 1);
							unk_0x6E20845D23D3DFD4(0, 3, 1);
						}
					}
					if (unk_0xCA55F1A0D9ADE3AD(iLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_129 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_52(1, 1, 1, 0);
						unk_0x4ACCE973F9C3CA3B(1);
						unk_0x1B40500A7841D6AB(0);
						unk_0x488AF65D7EDB6B4A(0);
						unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
						unk_0xBDBFD9A91725401E(joaat("superd"), 3);
						while (!unk_0x9C5C5193F2E77957(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_134 = unk_0x6C54724C342335E6("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_135 = unk_0x6C54724C342335E6("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0xBB088A7B5EA9D960(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0xBB088A7B5EA9D960(uLocal_135, "HAND_SHAKE", 0.25f);
						unk_0x12A448112D057EB4(uLocal_134, 1);
						unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x97A2169EA4EC4F21(uLocal_135, uLocal_134, 4000, 1, 1);
						unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
						unk_0x3B97B8A2AAD89A9D(Local_99, 10f, 0, 0, 0, 0, 0);
						if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
						{
							unk_0xAF8F8D0F2A26F402(unk_0xD8D1111EA0CFD1DB());
							if (unk_0xA427F05DB896EEBE(unk_0xD8D1111EA0CFD1DB(), Local_99, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_133 = unk_0xD8D1111EA0CFD1DB();
								unk_0x8D429A827A931AC9(iLocal_133, 1, 0);
								unk_0x18D40A0CF27AD6D3(&iLocal_133);
							}
						}
						if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
						{
							unk_0xF1040A0061DC97E5(iLocal_59, 1);
							if (!unk_0xC3B073777B46C61A(uLocal_319))
							{
								uLocal_319 = func_61(iLocal_59, 0, 0);
								unk_0x0AA0CF6371DDEDCF(uLocal_319, true);
							}
						}
						iLocal_117 = 0;
					}
				}
				if (iLocal_129 && unk_0x06F36936289C5EC8(uLocal_134))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_317)
					{
						if ((unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()) && unk_0xB534814830510EB1() == 4) || (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0x4D56690F35D56781() == 4))
						{
							unk_0x23D87B2CECB53E05("CamPushInNeutral", 0, 0);
							unk_0xBBEB613A917D7EE8(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_317 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
						{
							unk_0x743E219F0C060EE5(unk_0x77F050A399DB77ED(), 0, 0);
						}
						unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
						unk_0x1B40500A7841D6AB(1);
						unk_0x488AF65D7EDB6B4A(1);
						func_52(0, 1, 1, 0);
						unk_0x12A448112D057EB4(uLocal_134, 0);
						unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
						unk_0xFE65076A204F9258(uLocal_134, 0);
						unk_0x88890C87E37B149D(0);
					}
				}
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x3B97B8A2AAD89A9D(Local_87, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_123)
			{
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_103, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xC60576ADD1AECA45(joaat("ig_bestmen"));
					if (unk_0x4A4B6FD54C499B7D(joaat("ig_bestmen")))
					{
						iLocal_57 = unk_0x6665DCC708A346F3(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_89(&uLocal_136, 4, iLocal_57, "BESTMAN", 0, 1);
						unk_0x5F2AACB0122E1554(iLocal_57, 0, 0, 0, 0);
						unk_0x054E434B0AECBDA6(iLocal_57, joaat("player"));
						unk_0x9526D9575C237F2F(iLocal_57, 1);
						unk_0x1706625EBCDDEBF9(iLocal_57, 185, 1);
						unk_0x2A6B9F9E71C479CF(&uLocal_113);
						unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), -1);
						unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
						unk_0x44642CB08FA1637E(uLocal_113);
						unk_0xB8A8FA4B28E9F423(iLocal_57, uLocal_113);
						unk_0xAAD288E877AC833D(&uLocal_113);
						bLocal_123 = true;
					}
				}
			}
			if (!bLocal_124)
			{
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_77, 20f, 20f, 20f, 0, 1, 0))
				{
					func_21();
					if (!func_64())
					{
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
			if (((unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_70, Local_73, fLocal_76, 0, 1, 0) && unk_0xCA55F1A0D9ADE3AD(iLocal_55, Local_70, Local_73, fLocal_76, 0, 1, 0)) || (unk_0xA427F05DB896EEBE(iLocal_55, Local_67, 0f, 0f, 2f, 1, 1, 0) && func_59(1, 0, 1))) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						unk_0x296CDA10C549A502(&uLocal_320);
						if (!bLocal_118)
						{
							Local_67 = { Local_103 };
							if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
							{
								if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
								{
									unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 10.5f, 4, 0);
								}
							}
							if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
							{
								iVar2 = unk_0x1B5ACB4894956DC7();
								if (iVar2 != 0)
								{
									iVar3 = unk_0x7DF7F572759C0E1B(iVar2);
									if (iVar3 == 4)
									{
										unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_55, 5000, 0, 2);
									}
									else
									{
										unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_59, 5000, 2052, 4);
										unk_0x044CAEF9BC08F8DD(iLocal_59, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_21();
							if (!func_64())
							{
								func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0x1E80C02AC16B6622(iLocal_55))
								{
									unk_0xE2CB8488CFA42209(iLocal_55);
									unk_0x2A6B9F9E71C479CF(&uLocal_113);
									unk_0xE3BCB930B62CBDE5(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0xE3BCB930B62CBDE5(0, Local_99, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), -1);
									unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
									unk_0x44642CB08FA1637E(uLocal_113);
									unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
									unk_0xAAD288E877AC833D(&uLocal_113);
									unk_0x112CD899A3BEE719(iLocal_55, 1);
								}
								bLocal_118 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0x1E80C02AC16B6622(iLocal_55) && !unk_0x0B6E83A9A7ED3EBA(iLocal_59))
						{
							if ((bLocal_118 && unk_0xA427F05DB896EEBE(iLocal_55, Local_99, 1f, 1f, 1f, 0, 1, 0)) && !unk_0xB42592B9FFEB5EDE(iLocal_55, 0))
							{
								if (unk_0x3E5CB294501B40E0(iLocal_55))
								{
									if (!func_64())
									{
										if (func_11() == 2)
										{
											func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0xD3778FD9E17F7E71(iLocal_55);
								}
								if (unk_0x3D8234BA64B54520(iLocal_55))
								{
									if (!unk_0x1E80C02AC16B6622(iLocal_55))
									{
										unk_0x68E5332DF8C1DA5A(iLocal_55, 0, 0);
										unk_0x5817B24FA3E70BC6(iLocal_55, 0, 0);
										unk_0x166904329EDD2A43(iLocal_55, 1);
										unk_0xB92C428B448B51A4(iLocal_55, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0x1E80C02AC16B6622(iLocal_55))
										{
											unk_0x5F2AACB0122E1554(iLocal_55, 2, 1, 0, 0);
											unk_0x5F2AACB0122E1554(iLocal_55, 0, 0, 1, 0);
											unk_0x5F2AACB0122E1554(iLocal_55, 3, 1, 0, 0);
											unk_0x5F2AACB0122E1554(iLocal_55, 4, 1, 0, 0);
											unk_0x5F2AACB0122E1554(iLocal_55, 11, 0, 0, 0);
											unk_0x68E5332DF8C1DA5A(iLocal_55, 1, 0);
											unk_0x5817B24FA3E70BC6(iLocal_55, 1, 0);
											unk_0x166904329EDD2A43(iLocal_55, 0);
											unk_0xB92C428B448B51A4(iLocal_55, 0);
											unk_0x0B5F372F57E469AC(iLocal_55, Local_99, 1, 0, 0, 1);
											unk_0x2DA164E80FDEE7F2(iLocal_55, 106.5078f);
											unk_0xBD99B054E78B74CC(iLocal_55, 0);
											unk_0xB424F90D6E96BCF8(iLocal_55, 17, 1);
											unk_0x0AC146465453A09B(iLocal_55, 1);
											unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_55, -1, 2048, 4);
											if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
											{
												unk_0x2A6B9F9E71C479CF(&uLocal_113);
												unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 4);
												unk_0xFC7C68B6C728CFEC(0, iLocal_59, -1, 0, 2f, 1, 0);
												unk_0x44642CB08FA1637E(uLocal_113);
												unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
												unk_0xAAD288E877AC833D(&uLocal_113);
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
						if (!unk_0x1E80C02AC16B6622(iLocal_55) && !unk_0x0B6E83A9A7ED3EBA(iLocal_59))
						{
							if (unk_0x0C8E94332AE582B1(iLocal_55, iLocal_59, 5f, 5f, 5f, 0, 1, 0) && !iLocal_128)
							{
								func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_128 = 1;
							}
							if (unk_0xB42592B9FFEB5EDE(iLocal_55, 0))
							{
								if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0))
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
										iLocal_308 = unk_0x3EAC9995EC220C5A();
									}
									if (iLocal_308 != 0 && unk_0x3EAC9995EC220C5A() > iLocal_308 + 6000)
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
							func_21();
							if (func_4(&uLocal_136, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
								{
									if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
									{
										iLocal_132 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
										unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 10.5f, 2, 0);
									}
								}
								if (!unk_0x1E80C02AC16B6622(iLocal_57) && !unk_0x1E80C02AC16B6622(iLocal_55))
								{
									if (unk_0xB42592B9FFEB5EDE(iLocal_55, 0))
									{
										iLocal_132 = unk_0xF8D66A34AF0C53A5(iLocal_55, 0);
										unk_0x2A6B9F9E71C479CF(&uLocal_113);
										unk_0xFC7C68B6C728CFEC(0, iLocal_132, -1, 2, 1f, 1, 0);
										unk_0x8530DA8508D7A4B8(0);
										unk_0x44642CB08FA1637E(uLocal_113);
										unk_0xB8A8FA4B28E9F423(iLocal_57, uLocal_113);
										unk_0x1706625EBCDDEBF9(iLocal_57, 185, 0);
									}
									else
									{
										unk_0xAFB86418412C8866(iLocal_57, iLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0xC3B073777B46C61A(uLocal_322))
									{
										uLocal_322 = func_63(iLocal_57, 0, 145);
									}
									if (unk_0xC3B073777B46C61A(uLocal_320))
									{
										unk_0x296CDA10C549A502(&uLocal_320);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_120 = 1;
								bLocal_118 = true;
							}
						}
						if (bLocal_118 && !unk_0x1E80C02AC16B6622(iLocal_55))
						{
							if (unk_0x49C650267EDFEBC6(iLocal_55, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_67 = { Local_77 };
								Local_70 = { Local_80 };
								Local_73 = { Local_83 };
								fLocal_76 = fLocal_86;
								unk_0xC60576ADD1AECA45(joaat("ig_bride"));
								unk_0xC60576ADD1AECA45(joaat("washington"));
								unk_0xC60576ADD1AECA45(joaat("baller2"));
								unk_0xC60576ADD1AECA45(joaat("primo"));
								if (((unk_0x4A4B6FD54C499B7D(joaat("ig_bride")) && unk_0x4A4B6FD54C499B7D(joaat("washington"))) && unk_0x4A4B6FD54C499B7D(joaat("baller2"))) && unk_0x4A4B6FD54C499B7D(joaat("primo")))
								{
									iLocal_56 = unk_0x6665DCC708A346F3(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0x9526D9575C237F2F(iLocal_56, 1);
									unk_0x2A6B9F9E71C479CF(&uLocal_113);
									unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), -1);
									unk_0x44642CB08FA1637E(uLocal_113);
									unk_0xB8A8FA4B28E9F423(iLocal_56, uLocal_113);
									unk_0xAAD288E877AC833D(&uLocal_113);
									iLocal_58 = unk_0x6665DCC708A346F3(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0x9526D9575C237F2F(iLocal_58, 1);
									unk_0x9A42ADE14351A508(iLocal_58, unk_0x77F050A399DB77ED(), -1);
									unk_0x5F2AACB0122E1554(iLocal_58, 0, 1, 0, 0);
									uLocal_60[0] = unk_0x2EEA15C0C12C8CDE(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_60[1] = unk_0x2EEA15C0C12C8CDE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_60[2] = unk_0x2EEA15C0C12C8CDE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_60[3] = unk_0x2EEA15C0C12C8CDE(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									unk_0xEDB159E56B64D182(uLocal_60[0], unk_0xA3746E7F17F47DC2(0, 127), 0);
									unk_0xEDB159E56B64D182(uLocal_60[1], unk_0xA3746E7F17F47DC2(0, 127), 0);
									unk_0xEDB159E56B64D182(uLocal_60[2], unk_0xA3746E7F17F47DC2(0, 127), 0);
									unk_0xEDB159E56B64D182(uLocal_60[3], unk_0xA3746E7F17F47DC2(0, 127), 0);
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
							if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
							{
								if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
								{
									unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 10.5f, 2, 0);
									bLocal_118 = true;
									unk_0x4EDE34FBADD967A6(3000);
									func_21();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (unk_0x0B6E83A9A7ED3EBA(iLocal_55))
		{
			func_176();
		}
	}
}

void func_89(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

void func_90()
{
	if ((iLocal_310 && iLocal_307 != func_73(func_74())) && !unk_0x06F36936289C5EC8(uLocal_134))
	{
		func_94(((iLocal_307 * 1000 * 60 - func_73(func_74()) * 1000 * 60) + (iLocal_306 * 1000 - func_97(func_74()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (iLocal_306 == 0)
	{
		if (iLocal_307 == func_73(func_74()) + 1 && ((((iLocal_306 == (func_97(func_74()) - 55) || iLocal_306 == (func_97(func_74()) - 56)) || iLocal_306 == (func_97(func_74()) - 57)) || iLocal_306 == (func_97(func_74()) - 58)) || iLocal_306 == (func_97(func_74()) - 59)))
		{
			func_93();
		}
	}
	if (iLocal_307 == func_73(func_74()))
	{
		func_93();
		func_91();
		if (!func_64())
		{
			func_4(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0x1E80C02AC16B6622(iLocal_55))
			{
				unk_0xFDDC8EE655FF7D0D(iLocal_55, 1, 1);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_56))
			{
				unk_0x23E5F4496336DE4E(iLocal_56, unk_0x77F050A399DB77ED(), 300f, -1, 0, 0);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_58))
			{
				unk_0x23E5F4496336DE4E(iLocal_58, unk_0x77F050A399DB77ED(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
				{
					unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_55))
			{
				unk_0xE2CB8488CFA42209(iLocal_55);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_55, 5000, 2048, 2);
				unk_0xD0C8DD55C652567F(iLocal_55, unk_0x77F050A399DB77ED(), 5000, 2048, 2);
				unk_0x743E219F0C060EE5(iLocal_55, 0, 0);
				unk_0xD3778FD9E17F7E71(iLocal_55);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_57))
			{
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_55, 5000, 0, 2);
				unk_0x743E219F0C060EE5(iLocal_57, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_59, 0))
				{
					unk_0x743E219F0C060EE5(unk_0x77F050A399DB77ED(), 0, 0);
				}
			}
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_55) && !unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_113);
				if (unk_0xD8D1111EA0CFD1DB() == iLocal_59)
				{
					unk_0xFC7C68B6C728CFEC(0, iLocal_59, -1, -1, 1f, 8, 0);
					unk_0x277D239A78FD3309(0, iLocal_59, unk_0x77F050A399DB77ED(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 300f, -1, 0, 0);
				}
				unk_0x44642CB08FA1637E(uLocal_113);
				unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
				unk_0xAAD288E877AC833D(&uLocal_113);
				unk_0x112CD899A3BEE719(iLocal_55, 1);
				if (!unk_0x0B6E83A9A7ED3EBA(iLocal_57))
				{
					unk_0x2A6B9F9E71C479CF(&uLocal_113);
					if (unk_0xD8D1111EA0CFD1DB() == iLocal_59)
					{
						unk_0xFC7C68B6C728CFEC(0, iLocal_59, -1, 0, 2f, 1, 0);
						unk_0xCF5C1EDE3A2F58AC(0, 100000);
					}
					else
					{
						unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 300f, -1, 0, 0);
					}
					unk_0x44642CB08FA1637E(uLocal_113);
					unk_0xB8A8FA4B28E9F423(iLocal_57, uLocal_113);
					unk_0xAAD288E877AC833D(&uLocal_113);
					unk_0x112CD899A3BEE719(iLocal_57, 1);
				}
			}
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
			while (func_64())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_2();
		}
	}
}

void func_91()
{
	Global_14578 = 0;
	func_92();
}

void func_92()
{
	if (unk_0x1066B6347C40B301())
	{
		unk_0xCAAFCFEB9BD734FB();
		Global_16723 = 0;
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x5C5157A539753532();
	iVar1 = unk_0xD3D98375D5CA69E4();
	iVar2 = unk_0x624CC88A8815545E();
	if (iLocal_309 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0xBBEB613A917D7EE8(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_307)
		{
			unk_0xBBEB613A917D7EE8(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_95(7, iVar0);
		Global_1339928.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3988.f_172[iVar0] = iParam2;
		Global_1339928.f_3988.f_216[iVar0] = iParam3;
		Global_1339928.f_3988.f_183[iVar0] = iParam4;
		Global_1339928.f_3988.f_194[iVar0] = iParam5;
		Global_1339928.f_3988.f_249[iVar0] = iParam6;
		Global_1339928.f_3988.f_260[iVar0] = iParam7;
		Global_1339928.f_3988.f_205[iVar0] = iParam8;
		Global_1339928.f_3988.f_314[iVar0] = iParam9;
		Global_1339928.f_3988.f_325[iVar0] = iParam10;
		Global_1339928.f_3988.f_357[iVar0] = iParam11;
		Global_1339928.f_3988.f_238[iVar0] = iParam12;
		Global_1339928.f_3988.f_271[iVar0] = iParam13;
		Global_1339928.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_95(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_1339928.f_4594[iParam0]), iParam1);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1339928.f_4594[iParam0], iParam1);
}

int func_97(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_98()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_55))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_59) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (unk_0xE5FADE1166052251(iLocal_55, iLocal_59, 0) && unk_0xA7C200C3B2989831(iLocal_59))
			{
				if (!func_64())
				{
					if (func_99())
					{
						func_4(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0xE5FADE1166052251(iLocal_55, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0) && unk_0xA7C200C3B2989831(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
			{
				if (!func_64())
				{
					func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_99()
{
	if (unk_0xB56FEBC510E7E9DE(unk_0xA3746E7F17F47DC2(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_55))
	{
		unk_0xCD7CD612C6234BEC(iLocal_55, 0);
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_57))
	{
		unk_0xCD7CD612C6234BEC(iLocal_57, 0);
	}
	if (((((unk_0x0C8E94332AE582B1(iLocal_55, unk_0x77F050A399DB77ED(), 4f, 4f, 4f, 0, 1, 0) || iLocal_49 == 1) || iLocal_126) || iLocal_127) || iLocal_125) || bLocal_118)
	{
		if ((((((iLocal_49 >= 2 && iLocal_120) && iLocal_49 != 1) && !iLocal_126) && !iLocal_127) && !iLocal_125) && !bLocal_118)
		{
			if (unk_0x0C8E94332AE582B1(iLocal_57, unk_0x77F050A399DB77ED(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (func_102())
				{
					func_101(0);
				}
			}
			else if (func_64() && !func_102())
			{
				func_101(1);
			}
		}
		else if (func_102())
		{
			func_101(0);
		}
	}
	else if (func_64() && !func_102())
	{
		func_101(1);
	}
}

void func_101(int iParam0)
{
	Global_16723 = iParam0;
}

int func_102()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if ((unk_0x5C5157A539753532() > 2 && unk_0x5C5157A539753532() < 15) && !unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
	{
	}
	else
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_55))
		{
			unk_0xE2CB8488CFA42209(iLocal_55);
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0x1F2158D615BC4B25(iLocal_66))
			{
				unk_0xE8EBCCA6A3BE542B(iLocal_66, 1, 1);
			}
		}
		while (func_64())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_2();
	}
}

void func_104()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !unk_0x1E80C02AC16B6622(iLocal_55))
	{
		if (!iLocal_115)
		{
			if ((unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 130f, 60f, 50f, 0, 1, 0) && !unk_0x3D8234BA64B54520(iLocal_55)) || unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_321))
				{
					uLocal_321 = func_63(iLocal_55, 0, 145);
					unk_0x9555F96101785581(uLocal_321, 0);
					unk_0xD0C8DD55C652567F(iLocal_55, unk_0x77F050A399DB77ED(), -1, 2052, 4);
				}
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0xC3B073777B46C61A(uLocal_321))
					{
						unk_0x9555F96101785581(uLocal_321, 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					func_91();
					while (func_64())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!func_64())
					{
						if (func_11() == 0)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_11() == 1)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_11() == 2)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_115 = 1;
				}
			}
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !unk_0x1E80C02AC16B6622(iLocal_55))
			{
				if ((!func_142() && unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0xC3B073777B46C61A(uLocal_321))
				{
					if (!func_64())
					{
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
					{
						iLocal_65 = unk_0xD8D1111EA0CFD1DB();
					}
					func_105(1);
				}
			}
		}
		else if (!iLocal_301)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_55))
			{
				if (!unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
				{
					func_21();
					unk_0x4EDE34FBADD967A6(0);
					func_4(&uLocal_136, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_301 = 1;
				}
			}
		}
	}
}

int func_105(int iParam0)
{
	if (func_109())
	{
		Global_99240 = 1;
		Global_99237 = unk_0x3EAC9995EC220C5A();
		if (func_39(Global_99239))
		{
			func_106(0);
		}
		unk_0x275546117AF1F063(1, "RE_TITLE");
		if (iParam0 && func_39(Global_99239))
		{
			unk_0x358EC418194057C1();
		}
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99250.f_29448.f_2 < 3)
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_107(func_108(iParam0), -1);
					Global_99250.f_29448.f_2++;
					unk_0x573691DB812DC8AA(&Global_99246, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 1))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_107(func_108(iParam0), -1);
					Global_99250.f_29448.f_3++;
					unk_0x573691DB812DC8AA(&Global_99246, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 2))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_107(func_108(iParam0), -1);
					Global_99250.f_29448.f_4++;
					unk_0x573691DB812DC8AA(&Global_99246, 2);
				}
			}
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(uParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

char* func_108(int iParam0)
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

int func_109()
{
	switch (func_110(&Global_25174, 0, 5, 0, unk_0x8EC1FFF6B789C28E()))
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

int func_110(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_114(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
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
		if (!func_112(iParam2))
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
			func_111(uParam0, iParam4);
		}
	}
	return 2;
}

void func_111(var uParam0, int iParam1)
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

bool func_112(int iParam0)
{
	return func_113(iParam0, Global_35700);
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_115()
{
	if (unk_0x1F2158D615BC4B25(iLocal_55))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_55))
		{
			if (unk_0x40E29AA1A84292C9(-1, unk_0xAF99169F0F5AE41D(iLocal_55, 1), 3f))
			{
				unk_0xB28207B96952D994(iLocal_55);
				unk_0x9F48F299B333353E(iLocal_55, 99);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				if (unk_0x2AA05370067DC5AC(unk_0xD8D1111EA0CFD1DB()) < 3f)
				{
					unk_0xB92C428B448B51A4(iLocal_55, 1);
				}
				else
				{
					unk_0xB92C428B448B51A4(iLocal_55, 0);
					if (unk_0x32F9EB04315127B4(unk_0xD8D1111EA0CFD1DB(), iLocal_55))
					{
						unk_0xB28207B96952D994(iLocal_55);
						unk_0x9F48F299B333353E(iLocal_55, 99);
					}
				}
			}
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_55, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (func_59(1, 0, 1))
					{
						if (!iLocal_311)
						{
							func_105(1);
							func_52(1, 1, 1, 0);
							unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
							unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 1);
							unk_0x4ACCE973F9C3CA3B(1);
							unk_0x1B40500A7841D6AB(0);
							unk_0x488AF65D7EDB6B4A(0);
							if (!unk_0x1E80C02AC16B6622(iLocal_55))
							{
								unk_0x0BA5964C07973FE9(unk_0xAF99169F0F5AE41D(iLocal_55, 1), 5f, 1, 0, 0, 0);
								unk_0xEA2E21F349E113D7(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 5f);
							}
							if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
							{
								if (unk_0x0C8E94332AE582B1(unk_0xD8D1111EA0CFD1DB(), iLocal_55, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0x0B5F372F57E469AC(unk_0xD8D1111EA0CFD1DB(), unk_0xAF99169F0F5AE41D(iLocal_55, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0xC1D3820702043A43(unk_0xD8D1111EA0CFD1DB());
								}
							}
							if (!unk_0x1E80C02AC16B6622(iLocal_55))
							{
								uLocal_318 = unk_0xFCF0CDCAF2761068(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_134 = unk_0x6AC24FEF1D81F105("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xEE4C4CE6312DD1EF(uLocal_318, 0.158f);
								unk_0x59AFD0717303A531(uLocal_134, uLocal_318, "untie_cam", "re@stag_do@");
								unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
								unk_0xB28207B96952D994(iLocal_55);
								unk_0x3C6CCFC07FD12077(iLocal_55, uLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0x9371C699D98CE4D6(iLocal_55, 0, 0);
								unk_0x3C6CCFC07FD12077(unk_0x77F050A399DB77ED(), uLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 0, 0);
								unk_0x12A448112D057EB4(uLocal_134, 1);
								unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
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
		func_21();
		unk_0x4EDE34FBADD967A6(0);
		if (func_11() == 0)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_11() == 1)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_11() == 2)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_313 = 1;
	}
	if (iLocal_311 && !iLocal_312)
	{
		if (!iLocal_316)
		{
			if (unk_0x19779E7427AA44FB(uLocal_318) > 0.2f && unk_0x19779E7427AA44FB(uLocal_318) < 0.3f)
			{
				unk_0x44F52B5BE61F39DD(-1, "ROPE_CUT", unk_0x77F050A399DB77ED(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_316 = 1;
			}
		}
		if (unk_0x19779E7427AA44FB(uLocal_318) > 0.4647059f && !iLocal_317)
		{
			if (unk_0xB534814830510EB1() == 4)
			{
				unk_0x23D87B2CECB53E05("CamPushInNeutral", 0, 0);
				unk_0xBBEB613A917D7EE8(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_317 = 1;
			}
		}
		if (unk_0x19779E7427AA44FB(uLocal_318) > 0.5f)
		{
			iLocal_312 = 1;
		}
		if (func_116(1000))
		{
			unk_0x16AA81661A0624FB(800);
			while (unk_0x8DD09BB8ACF9E623())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_312 = 1;
			iLocal_315 = 1;
		}
	}
	if (iLocal_312 && !iLocal_314)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_66))
		{
			unk_0xE8EBCCA6A3BE542B(iLocal_66, 1, 1);
		}
		unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
		unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 208.4017f);
		unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 0, 0);
		unk_0x12A448112D057EB4(uLocal_134, 0);
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		unk_0xFE65076A204F9258(uLocal_134, 0);
		unk_0x8793DE27084C2CBD(0f);
		unk_0xABF261CA61470DE0(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 0);
		unk_0x1B40500A7841D6AB(1);
		unk_0x488AF65D7EDB6B4A(1);
		if (!unk_0x1E80C02AC16B6622(iLocal_55))
		{
			unk_0xB92C428B448B51A4(iLocal_55, 0);
			unk_0xB28207B96952D994(iLocal_55);
			unk_0x9AAEF18E6D4F7CB8(iLocal_55, 1);
			unk_0x0B5F372F57E469AC(iLocal_55, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0x2DA164E80FDEE7F2(iLocal_55, 136.9073f);
			unk_0x9371C699D98CE4D6(iLocal_55, 0, 0);
		}
		if (iLocal_315)
		{
			unk_0xCA6D671341405469(800);
			while (unk_0x329E4482E654B910())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_315 = 0;
		}
		iLocal_317 = 0;
		iLocal_314 = 1;
	}
	if (iLocal_314 && !unk_0x1E80C02AC16B6622(iLocal_55))
	{
		if (unk_0x968EA16107097324(unk_0xD8D1111EA0CFD1DB(), 0))
		{
			if ((((((unk_0x0C8E94332AE582B1(iLocal_55, unk_0xD8D1111EA0CFD1DB(), 20f, 20f, 20f, 0, 1, 0) && unk_0x1205624841D11747(unk_0xD8D1111EA0CFD1DB()) >= 1) && !unk_0xD3FAF4AD23FDF2DA(unk_0xDF1398076E26B0E4(unk_0xD8D1111EA0CFD1DB()))) && !unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(unk_0xD8D1111EA0CFD1DB()))) && !unk_0x4F32F86538FB8979(unk_0xDF1398076E26B0E4(unk_0xD8D1111EA0CFD1DB()))) && !unk_0xD68DC1905B617ADD(unk_0xDF1398076E26B0E4(unk_0xD8D1111EA0CFD1DB()))) && unk_0xDF1398076E26B0E4(unk_0xD8D1111EA0CFD1DB()) != joaat("rhino"))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_113);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 10000, 2048, 3);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 6500);
				unk_0xFC7C68B6C728CFEC(0, unk_0xD8D1111EA0CFD1DB(), -1, 0, 1f, 1, 0);
				unk_0x44642CB08FA1637E(uLocal_113);
				unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
				unk_0xAAD288E877AC833D(&uLocal_113);
			}
			else if (!unk_0x3E5CB294501B40E0(iLocal_55))
			{
				unk_0x92D84E1899554EA4(iLocal_55, func_66());
				unk_0x86CD6F98059D0E25(iLocal_55, 1);
				unk_0xBD99B054E78B74CC(iLocal_55, 0);
			}
		}
		else if (!unk_0x3E5CB294501B40E0(iLocal_55))
		{
			unk_0x92D84E1899554EA4(iLocal_55, func_66());
			unk_0x86CD6F98059D0E25(iLocal_55, 1);
			unk_0xBD99B054E78B74CC(iLocal_55, 0);
		}
		unk_0x9526D9575C237F2F(iLocal_55, 0);
		unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
		uLocal_320 = func_23(Local_67, 1);
		iLocal_114 = 1;
		bLocal_116 = true;
		unk_0xD5A53B898943F331("re@stag_do@");
		unk_0xD5A53B898943F331("re@stag_do@idle_a");
		iLocal_305 = func_73(func_74());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_97(func_74());
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

int func_116(int iParam0)
{
	if (unk_0x398F615441F52A47())
	{
		if ((unk_0x3EAC9995EC220C5A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x3EAC9995EC220C5A();
		}
		Global_28 = unk_0x3EAC9995EC220C5A();
		if ((unk_0x3EAC9995EC220C5A() - Global_27) > iParam0)
		{
			if (func_117())
			{
				Global_27 = unk_0x3EAC9995EC220C5A();
				return 1;
			}
		}
	}
	return 0;
}

int func_117()
{
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (unk_0x618071F6827C232E(0, 18) || unk_0x618071F6827C232E(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_118()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_55))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (!unk_0x335346A332B62CA2(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
			{
				unk_0x8D429A827A931AC9(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 1, 0);
			}
		}
		iLocal_133 = unk_0x05DDA43694DA52CF(unk_0xAF99169F0F5AE41D(iLocal_55, 0), 30f, 0, 4);
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_133))
		{
			if (!unk_0x9A2BADF8B8CE0E2A(iLocal_133, -1))
			{
				if (unk_0x0C8E94332AE582B1(iLocal_133, iLocal_55, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x8D429A827A931AC9(iLocal_133, 1, 0);
					if (unk_0x968EA16107097324(iLocal_133, 0))
					{
						unk_0xB5387DF587FF85F0(iLocal_133, 3000, 0, 0);
						if (!unk_0x1E80C02AC16B6622(iLocal_55))
						{
							if (!func_64() && !iLocal_115)
							{
								func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0xB84D4C251623B60C(&iLocal_133);
				}
			}
		}
	}
}

void func_119()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		iVar0 = unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED());
		if (unk_0x968EA16107097324(iVar0, 0))
		{
			iVar1 = unk_0x07A8845F7F106A38(iVar0, 0);
			if (!unk_0x1E80C02AC16B6622(iVar1))
			{
				if (iVar1 != unk_0x77F050A399DB77ED())
				{
					if (unk_0x335346A332B62CA2(iVar1))
					{
						if (!unk_0x404D1ED8CA2B4615(iVar1, unk_0x77F050A399DB77ED()))
						{
							unk_0xD0C8DD55C652567F(iVar1, unk_0x77F050A399DB77ED(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_120()
{
	func_121(39, 1);
	func_121(40, 1);
	func_121(41, 1);
	func_121(42, 1);
	func_121(43, 1);
	func_121(44, 1);
	unk_0xC60576ADD1AECA45(joaat("u_m_y_staggrm_01"));
	unk_0xC60576ADD1AECA45(joaat("superd"));
	unk_0xC60576ADD1AECA45(joaat("prop_stag_do_rope"));
	while ((!unk_0x4A4B6FD54C499B7D(joaat("u_m_y_staggrm_01")) || !unk_0x4A4B6FD54C499B7D(joaat("superd"))) || !unk_0x4A4B6FD54C499B7D(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x6E2E777C1AD81C36("re@stag_do@");
	unk_0x6E2E777C1AD81C36("re@stag_do@idle_a");
	unk_0x5F4EA7D1E9029E5C("ROPE_CUT", 0);
	while ((!unk_0x5263DE3D9A17A86F("re@stag_do@") || !unk_0x5263DE3D9A17A86F("re@stag_do@idle_a")) || !unk_0x5F4EA7D1E9029E5C("ROPE_CUT", 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_55 = unk_0x6665DCC708A346F3(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0x58580C834A43EBA2(iLocal_55, "GROOM");
	unk_0x054E434B0AECBDA6(iLocal_55, joaat("player"));
	unk_0x9526D9575C237F2F(iLocal_55, 1);
	unk_0x4FE5EDEAD55F44A3(iLocal_55, 0);
	unk_0x5F2AACB0122E1554(iLocal_55, 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_55, 0, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_55, 3, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_55, 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_55, 11, 1, 0, 0);
	unk_0xFACE6AF37E15A418(iLocal_55, joaat("empty"));
	unk_0x831F6A79993D3933(iLocal_55, 3);
	unk_0x1706625EBCDDEBF9(iLocal_55, 206, 1);
	unk_0x1706625EBCDDEBF9(iLocal_55, 134, 1);
	iLocal_66 = unk_0x4A498A71A7B2E7A5(joaat("prop_stag_do_rope"), unk_0xAF99169F0F5AE41D(iLocal_55, 1), 1, 1, 0);
	unk_0xCA41E71A6AD186D8(iLocal_66, iLocal_55, unk_0x49E48BFB98D99FE3(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_59 = unk_0x2EEA15C0C12C8CDE(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	unk_0xD1CF9849336C4ED5(iLocal_59, 1);
	unk_0x654DBE320E71D523(iLocal_59, 0f);
	unk_0xF1040A0061DC97E5(iLocal_59, 3);
	unk_0x91F9B018CF2DA225(iLocal_59, 0);
	unk_0x25BAF81420AF8E3C(iLocal_59, 0, 73, 0);
	unk_0x84324D7C5A93F0DA(iLocal_59, 2, 48);
	unk_0x01A8ACBE7F8B45EF(iLocal_59, 11, 1, 0);
	unk_0x01A8ACBE7F8B45EF(iLocal_59, 12, 1, 0);
	unk_0xBDBFD9A91725401E(joaat("superd"), 3);
	unk_0x26472A6D46CDD76D(iLocal_59, 10000);
	unk_0x130B1E3196595D67(iLocal_59, 5f);
	unk_0x2AB597CDC87E0949(iLocal_59);
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
	unk_0x5416146016E39BF7(joaat("superd"), 1);
	unk_0x6AABDED602B11FF1(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x2277155D92E898D2(Local_87 - Vector(20f, 20f, 20f), Local_87 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x2277155D92E898D2(unk_0xAF99169F0F5AE41D(iLocal_55, 0) - Vector(10f, 10f, 10f), unk_0xAF99169F0F5AE41D(iLocal_55, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x2277155D92E898D2(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0x2277155D92E898D2(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0xD1C12864812BFA0A(unk_0xAF99169F0F5AE41D(iLocal_55, 1), 10f, 0);
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_55))
	{
		unk_0x2A6B9F9E71C479CF(&uLocal_113);
		unk_0x642DDF74A8A2B3BB(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x44642CB08FA1637E(uLocal_113);
		unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
		unk_0xAAD288E877AC833D(&uLocal_113);
		unk_0x112CD899A3BEE719(iLocal_55, 1);
	}
	if (func_11() == 0)
	{
		func_89(&uLocal_136, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1)
	{
		func_89(&uLocal_136, 0, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2)
	{
		func_89(&uLocal_136, 0, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
	}
	func_89(&uLocal_136, 3, iLocal_55, "GROOM", 0, 1);
	iLocal_50 = 1;
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_128(iParam0, 2, 1))
		{
			func_127(iParam0, 2, 1);
		}
	}
	else if (func_128(iParam0, 2, 1))
	{
		func_122(iParam0, 2, 1);
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xA5F70A8B83BDFA49(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, uParam1, iParam3);
	}
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_124(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0)
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
			return 3664;
			break;
		
		default:
			break;
	}
	return 3741;
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0x573691DB812DC8AA(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_34() == 0)
		{
			return unk_0xB56FEBC510E7E9DE(func_125(func_126(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_129()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_136())
	{
		return 1;
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130(float fParam0, bool bParam1)
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
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 2) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 3))
				{
					func_131(iVar32, &Var0);
					fVar35 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var0.f_6, 1);
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

void func_131(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_132(uParam1, "Abigail1", func_134(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 1:
			func_132(uParam1, "Abigail2", func_134(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 2:
			func_132(uParam1, "Barry1", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 3:
			func_132(uParam1, "Barry2", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 4:
			func_132(uParam1, "Barry3", func_134(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 5:
			func_132(uParam1, "Barry3A", func_134(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 6:
			func_132(uParam1, "Barry3C", func_134(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 7:
			func_132(uParam1, "Barry4", func_134(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_133(iParam0), 0, 0);
			break;
		
		case 8:
			func_132(uParam1, "Dreyfuss1", func_134(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 9:
			func_132(uParam1, "Epsilon1", func_134(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 10:
			func_132(uParam1, "Epsilon2", func_134(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 11:
			func_132(uParam1, "Epsilon3", func_134(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 12:
			func_132(uParam1, "Epsilon4", func_134(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 13:
			func_132(uParam1, "Epsilon5", func_134(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 14:
			func_132(uParam1, "Epsilon6", func_134(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 15:
			func_132(uParam1, "Epsilon7", func_134(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 16:
			func_132(uParam1, "Epsilon8", func_134(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 17:
			func_132(uParam1, "Extreme1", func_134(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 18:
			func_132(uParam1, "Extreme2", func_134(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 19:
			func_132(uParam1, "Extreme3", func_134(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 20:
			func_132(uParam1, "Extreme4", func_134(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 21:
			func_132(uParam1, "Fanatic1", func_134(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 22:
			func_132(uParam1, "Fanatic2", func_134(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 23:
			func_132(uParam1, "Fanatic3", func_134(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_133(iParam0), 0, 1);
			break;
		
		case 24:
			func_132(uParam1, "Hao1", func_134(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_133(iParam0), 0, 1);
			break;
		
		case 25:
			func_132(uParam1, "Hunting1", func_134(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 26:
			func_132(uParam1, "Hunting2", func_134(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 27:
			func_132(uParam1, "Josh1", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 28:
			func_132(uParam1, "Josh2", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 29:
			func_132(uParam1, "Josh3", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 30:
			func_132(uParam1, "Josh4", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 31:
			func_132(uParam1, "Maude1", func_134(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 32:
			func_132(uParam1, "Minute1", func_134(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 33:
			func_132(uParam1, "Minute2", func_134(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 34:
			func_132(uParam1, "Minute3", func_134(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 35:
			func_132(uParam1, "MrsPhilips1", func_134(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 36:
			func_132(uParam1, "MrsPhilips2", func_134(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 37:
			func_132(uParam1, "Nigel1", func_134(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 38:
			func_132(uParam1, "Nigel1A", func_134(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 39:
			func_132(uParam1, "Nigel1B", func_134(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 40:
			func_132(uParam1, "Nigel1C", func_134(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 41:
			func_132(uParam1, "Nigel1D", func_134(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 42:
			func_132(uParam1, "Nigel2", func_134(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 43:
			func_132(uParam1, "Nigel3", func_134(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 44:
			func_132(uParam1, "Omega1", func_134(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 45:
			func_132(uParam1, "Omega2", func_134(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 46:
			func_132(uParam1, "Paparazzo1", func_134(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 47:
			func_132(uParam1, "Paparazzo2", func_134(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 48:
			func_132(uParam1, "Paparazzo3", func_134(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 49:
			func_132(uParam1, "Paparazzo3A", func_134(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 50:
			func_132(uParam1, "Paparazzo3B", func_134(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 51:
			func_132(uParam1, "Paparazzo4", func_134(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 52:
			func_132(uParam1, "Rampage1", func_134(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 54:
			func_132(uParam1, "Rampage3", func_134(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 55:
			func_132(uParam1, "Rampage4", func_134(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 56:
			func_132(uParam1, "Rampage5", func_134(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 53:
			func_132(uParam1, "Rampage2", func_134(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 57:
			func_132(uParam1, "TheLastOne", func_134(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 58:
			func_132(uParam1, "Tonya1", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 59:
			func_132(uParam1, "Tonya2", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 60:
			func_132(uParam1, "Tonya3", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 61:
			func_132(uParam1, "Tonya4", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 62:
			func_132(uParam1, "Tonya5", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_132(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_133(int iParam0)
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

struct<2> func_134(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_135(iParam0) };
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_135(int iParam0)
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

int func_136()
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_98968 > 0;
}

int func_138()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	if (!func_112(5))
	{
		return 1;
	}
	if (func_136())
	{
		return 1;
	}
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if ((Global_99239 == func_48() && unk_0x74E62879922177A9()) && Global_99240)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_145(iParam0);
	unk_0x13FDF28AC5D80885(0);
	unk_0x62E4698C0067789A(1);
	Global_99236 = 0;
	func_144();
}

void func_144()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			unk_0x5416146016E39BF7(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)), 1);
		}
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	}
}

void func_145(int iParam0)
{
	Global_99239 = iParam0;
}

int func_146(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_136046)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_48();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_99250.f_7703)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_173())
		{
			return 0;
		}
		if (Global_99239 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_130(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_172(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_171(func_11()) == 4 || func_171(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_170(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_169(Global_99250.f_29448.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3EAC9995EC220C5A() - Global_99241) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_168())
		{
			return 0;
		}
		if (unk_0x21DB261DC1511E40())
		{
			return 0;
		}
		if (unk_0x74E62879922177A9())
		{
			return 0;
		}
		if (!func_159(4))
		{
			return 0;
		}
		if (!func_112(5))
		{
			return 0;
		}
		if (func_158(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x5C31634D1DECF73C(unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED())))
		{
			if ((unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(377.153f, -717.567f, 10.0536f) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(320.9934f, 265.2515f, 82.1221f)) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_158(0, 0))
		{
			return 0;
		}
		if (Global_25261)
		{
			return 0;
		}
		if (func_172(30) && !func_158(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_99250.f_1754.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99250.f_1754.f_539.f_1524[iVar4];
				if (func_157(iVar8))
				{
					if (func_148(iVar4))
					{
						if (!func_147(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var5) < (210f * 210f))
							{
								if (func_11() != iVar4)
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

bool func_147(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_99250.f_1754.f_539.f_1524[iParam0];
	return func_149(iVar0);
}

int func_149(int iParam0)
{
	return func_150(iParam0, 1);
}

int func_150(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_157(iParam0))
	{
		return 0;
	}
	func_151(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_152(func_74(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_152(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_81(iParam1);
		iVar1 = func_79(iParam0);
		iVar2 = (func_79(iParam0) - func_79(iParam1));
		iVar3 = (func_81(iParam0) - func_81(iParam1));
		iVar4 = (func_155(iParam0) - func_155(iParam1));
		iVar5 = (func_73(iParam0) - func_73(iParam1));
		iVar6 = (func_97(iParam0) - func_97(iParam1));
		iVar7 = (func_154(iParam0) - func_154(iParam1));
	}
	else
	{
		iVar0 = func_81(iParam0);
		iVar1 = func_79(iParam1);
		iVar2 = (func_79(iParam1) - func_79(iParam0));
		iVar3 = (func_81(iParam1) - func_81(iParam0));
		iVar4 = (func_155(iParam1) - func_155(iParam0));
		iVar5 = (func_73(iParam1) - func_73(iParam0));
		iVar6 = (func_97(iParam1) - func_97(iParam0));
		iVar7 = (func_154(iParam1) - func_154(iParam0));
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
		iVar4 = (iVar4 + func_78(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_153(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_153(float fParam0, float fParam1, float fParam2)
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

int func_154(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_155(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_79(iParam0);
	iVar1 = func_79(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_81(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	iVar1 = func_73(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	iVar1 = func_97(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
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
	iVar0 = func_154(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_97(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_79(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_81(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_155(iParam0);
	if (iVar5 < 1 || iVar5 > func_78(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_158(int iParam0, int iParam1)
{
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_167()) || Global_98297) || Global_25117) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_163()) || func_162()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_167()) || Global_25117) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_167()) || Global_98297) || Global_25117) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_167()) || Global_98297) || Global_25117) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_162()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_18(8, -1)) || func_162()) || func_161()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_165()) || func_164()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_167()) || Global_25117) || func_166()) || func_18(8, -1)) || func_164()) || func_163()) || func_162()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_167()) || func_164()) || Global_98297) || Global_25117) || func_166()) || Global_36750) || func_18(8, -1)) || func_163()) || func_161()) || func_162()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_167()) || Global_98297) || Global_25117) || func_166()) || func_18(8, -1)) || func_163()) || func_161()) || func_165()) || func_164()) || func_162())
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

var func_160()
{
	return Global_91145.f_1;
}

int func_161()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
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

bool func_164()
{
	return Global_91158.f_297 > 0;
}

bool func_165()
{
	return Global_91158.f_296 > 0;
}

var func_166()
{
	return Global_1315910;
}

int func_167()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_168()
{
	func_10();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return func_156(func_74(), iParam0);
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
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

int func_171(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_99250.f_6306.f_919[iParam0];
}

bool func_172(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_1, iVar0);
	}
	return bVar1;
}

int func_173()
{
	int iVar0;
	
	if (Global_25265)
	{
		iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (unk_0x968EA16107097324(iVar0, 0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x07A8845F7F106A38(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174()
{
	var uVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		if (unk_0xF5783AD1B5945861())
		{
			if (unk_0x05E0388968EC9D08())
			{
				unk_0xBA16CA557222A92B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x573691DB812DC8AA(&uVar0, 2);
				unk_0x573691DB812DC8AA(&uVar0, 4);
				unk_0x573691DB812DC8AA(&uVar0, 6);
				unk_0x573691DB812DC8AA(&Global_25, 2);
				unk_0x573691DB812DC8AA(&Global_25, 4);
				unk_0x573691DB812DC8AA(&Global_25, 6);
				unk_0x5716C8F12991E399(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x5B08E2B84948C788())
				{
					iVar0 = unk_0x824EA95BCC498CB4(866);
					unk_0x573691DB812DC8AA(&iVar0, 0);
					unk_0xF49776B60F784AFF(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136298 == 2)
	{
		return 1;
	}
	else if (Global_136298 == 3)
	{
		return 0;
	}
	if (unk_0x5B08E2B84948C788())
	{
		if (unk_0xB56FEBC510E7E9DE(unk_0x824EA95BCC498CB4(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_176()
{
	if (iLocal_51)
	{
		func_208(0);
		unk_0x6AABDED602B11FF1(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x3309AB731FDAB1DB();
		func_21();
		unk_0x1C26E574D6FB1BE8(unk_0x8ACD527A7E574590());
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_65))
		{
			if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_65, 0) && !unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_65, 50f, 50f, 50f, 0, 1, 0))
			{
				func_188(iLocal_65, 0, 145);
			}
		}
		if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_87, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_55) && !unk_0x1E80C02AC16B6622(iLocal_57))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_113);
				unk_0xE3BCB930B62CBDE5(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x7511FE90079F0845(0, iLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x44642CB08FA1637E(uLocal_113);
				unk_0xB8A8FA4B28E9F423(iLocal_55, uLocal_113);
				unk_0xAAD288E877AC833D(&uLocal_113);
				unk_0x2A6B9F9E71C479CF(&uLocal_113);
				unk_0xE3BCB930B62CBDE5(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x7511FE90079F0845(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x44642CB08FA1637E(uLocal_113);
				unk_0xB8A8FA4B28E9F423(iLocal_57, uLocal_113);
				unk_0xAAD288E877AC833D(&uLocal_113);
			}
		}
		unk_0xB84D4C251623B60C(&iLocal_133);
		unk_0xB84D4C251623B60C(&iLocal_59);
		if (!unk_0x28D605B18777DE18(unk_0x8ACD527A7E574590()))
		{
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_55))
		{
			unk_0x1706625EBCDDEBF9(iLocal_55, 317, 1);
			if (!unk_0x540DDE9BB09221C3(iLocal_55))
			{
				unk_0xB92C428B448B51A4(iLocal_55, 0);
			}
			unk_0xD3778FD9E17F7E71(iLocal_55);
			unk_0x9526D9575C237F2F(iLocal_55, 0);
		}
		else if (unk_0x1F2158D615BC4B25(iLocal_66))
		{
			unk_0xE8EBCCA6A3BE542B(iLocal_66, 1, 1);
		}
		unk_0xA29D53AF339F4CD0(&iLocal_55);
		if (!unk_0x1E80C02AC16B6622(iLocal_57))
		{
			unk_0x1706625EBCDDEBF9(iLocal_57, 317, 1);
			unk_0x9526D9575C237F2F(iLocal_57, 0);
		}
		unk_0xA29D53AF339F4CD0(&iLocal_57);
		if (!unk_0x1E80C02AC16B6622(iLocal_56))
		{
			unk_0x9526D9575C237F2F(iLocal_56, 0);
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_58))
		{
			unk_0x9526D9575C237F2F(iLocal_58, 0);
		}
		unk_0xA29D53AF339F4CD0(&iLocal_56);
	}
	func_177(-1);
	unk_0x2F798BA2098FDADE();
}

void func_177(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_142())
	{
		func_181(iParam0);
		unk_0x275546117AF1F063(0, 0);
		Global_99241 = unk_0x3EAC9995EC220C5A();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_99239, 1), 64);
		if (func_47(Global_99239) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99238, 64);
		}
		unk_0x0C0A547C7A0D11B0(&cVar0, Global_99236, (unk_0x3EAC9995EC220C5A() - Global_99237), 0);
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99246, 0) && Global_99250.f_29448.f_2 < 3)
	{
		unk_0xA5F70A8B83BDFA49(&Global_99246, 0);
	}
	func_178(&Global_25174);
	Global_99240 = 0;
	func_145(-1);
}

void func_178(var uParam0)
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

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_74();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_97(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_154(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_155(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_81(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_79(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_99250.f_29448.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_79(*uParam0);
	iVar1 = func_81(*uParam0);
	iVar2 = func_155(*uParam0);
	iVar3 = func_73(*uParam0);
	iVar4 = func_97(*uParam0);
	iVar5 = func_154(*uParam0);
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
	iVar6 = func_78(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_78(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_76(uParam0, iParam5);
	func_77(uParam0, iParam4);
	func_75(uParam0, iParam6);
}

int func_187(int iParam0)
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

int func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x6EA99DF080909BD1(iParam0, &uVar0);
		if (!unk_0x0AAC2160036975D9(uVar1))
		{
			if (unk_0x39BD4614CF899227(uVar1) == unk_0x39BD4614CF899227("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_189(iParam0, iParam2);
	return 1;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_194(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x07A8845F7F106A38(iParam0, -1);
		if (!unk_0x1F2158D615BC4B25(iVar0))
		{
			iVar0 = unk_0x0719727137101E59(iParam0, -1);
		}
		if (unk_0x1F2158D615BC4B25(iVar0) && !unk_0x1E80C02AC16B6622(iVar0))
		{
			if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99250.f_1754.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xDF1398076E26B0E4(iParam0) == Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x0AAC2160036975D9(&(Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x35D1CAD6ADAB6491(unk_0x2FE7FA21D340AA95(iParam0), &(Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99250.f_18735.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99250.f_18735.f_5592[iVar1] = iVar2;
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
		if (unk_0xDF1398076E26B0E4(iParam0) == Global_99250.f_18735.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x0AAC2160036975D9(&(Global_99250.f_18735.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x35D1CAD6ADAB6491(unk_0x2FE7FA21D340AA95(iParam0), &(Global_99250.f_18735.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99250.f_18735.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99250.f_18735.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_99250.f_18735.f_5588 = 1;
	func_190(iParam0, &(Global_99250.f_18735.f_5510));
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		func_193(uParam1);
		uParam1->f_66 = unk_0xDF1398076E26B0E4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2FE7FA21D340AA95(iParam0), 16);
		*uParam1 = unk_0x21C7BB3FC7BDA875(iParam0);
		unk_0x7F28F78FC4A382A2(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7A754CC677BF330F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xF782955E2B9CA2A2(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA586FD6870BD7171(iParam0);
		uParam1->f_67 = unk_0xF933C1D6868EE7D5(iParam0);
		uParam1->f_69 = unk_0x9489701175ECF585(iParam0);
		uParam1->f_70 = unk_0x9777E452CDE55809(iParam0);
		unk_0x56E6FA42E5717914(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x521FE229CF7A3A21(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xCA6A17118B1E6E81(iParam0, 2))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 28);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 3))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 29);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 30);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 1))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x5265771D79F24A99(iParam0, 0))
		{
			uParam1->f_68 = unk_0x362684AE59B8BD46(iParam0);
		}
		if (unk_0x4F32F86538FB8979(uParam1->f_66))
		{
			if (unk_0xA2822ECBE08BA15C(iParam0))
			{
				switch (unk_0x0AFB4FC1B0EEBCE1(iParam0))
				{
					case 2:
					case 0:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xF961EB70CA5E8895(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 9);
		}
		if (unk_0x8A147513C0F86C22(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 10);
		}
		if (unk_0xBA6E8DEFECA26A39(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 13);
			unk_0x221F450D7BC62614(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xB01B059B334F67A5(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 12);
		}
		func_192(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3F119D3637D9EFD9(iParam0, iVar0 + 1))
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), func_191(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x2E5C1D84FCCF5CE1(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 11);
		}
		if (unk_0xB22BDF5B6DBD298B(iParam0, "IgnoredByQuickSave") && unk_0x51ABF0A53A19B212(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 27);
		}
	}
}

int func_191(int iParam0)
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

int func_192(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x968EA16107097324(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xB944775459039806(*iParam0) == 0)
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
			if (unk_0xE4A2AB18E282A5D6(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x412350E0E75BCEFD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_193(var uParam0)
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

int func_194(int iParam0)
{
	if ((((((((((!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0)) || func_206(iParam0, 0, 0)) || func_206(iParam0, 1, 0)) || func_206(iParam0, 2, 0)) || func_205(iParam0) != 145) || func_204(iParam0)) || func_203(iParam0)) || func_202(iParam0)) || func_201(iParam0)) || !func_195(unk_0xDF1398076E26B0E4(iParam0)))
	{
		if (func_203(iParam0))
		{
		}
		if (func_203(iParam0))
		{
		}
		if (func_206(iParam0, 0, 0))
		{
		}
		if (func_206(iParam0, 1, 0))
		{
		}
		if (func_206(iParam0, 2, 0))
		{
		}
		if (func_205(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (((unk_0xD3FAF4AD23FDF2DA(iParam0) || unk_0x4F32F86538FB8979(iParam0)) || unk_0x5FA5E5014A0AC183(iParam0)) || unk_0xD68DC1905B617ADD(iParam0))
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

int func_196(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xED25CDA223A93673(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4C779B19E6DDCDA2())) || (iParam0 == joaat("buffalo3") && !unk_0x4C779B19E6DDCDA2())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C779B19E6DDCDA2())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4C779B19E6DDCDA2())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_174())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1FB97E894B0A4FC6())
		{
			if (unk_0x50BB432A9DE546D9(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD5451DF6AA0E4BDB(Var1.f_0))
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
		if ((((!func_200() && !func_199()) && !func_198()) && !func_197()) && !func_174())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xBB3DCD23C363D187() || unk_0x2C063B4379F0C076()) || unk_0xA24A81C5933F1B29())
		{
		}
		else if (!func_198())
		{
			return 0;
		}
	}
	return 1;
}

int func_197()
{
	return 0;
}

int func_198()
{
	return 1;
}

int func_199()
{
	return 1;
}

int func_200()
{
	if (unk_0x368F9074322AFD91(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xDF1398076E26B0E4(iParam0);
	uVar1 = unk_0x2FE7FA21D340AA95(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x35D1CAD6ADAB6491(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_196(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1F2158D615BC4B25(Global_88800[iVar0]))
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

int func_203(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]) && unk_0x968EA16107097324(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0xDF1398076E26B0E4(Global_88770[iVar0]) == unk_0xDF1398076E26B0E4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x1F2158D615BC4B25(Global_68186.f_484[iVar0]))
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

int func_205(int iParam0)
{
	int iVar0;
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 145;
	}
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
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

int func_206(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_207(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB56FEBC510E7E9DE(Global_99250.f_5847[iVar9], 0))
		{
			if (unk_0x35420DF6FD85930A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_208(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_121(iVar0, bParam0);
		iVar0++;
	}
}

