def sort_color(nums):
    for i in range(len(nums)):
        for j in range(i,len(nums)):
            if nums[i]>nums[j]:
                temp = nums[i]
                nums[i] = nums[j]
                nums[j] = temp
    return nums