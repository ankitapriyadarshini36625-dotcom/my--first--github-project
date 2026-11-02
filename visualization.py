import matplotlib.pyplot as plt
import pandas as pd

#  Load the data (mimicking reading from the database/csv)
data = {
    "product_category": ["Electronics", "Office_Supplies", "Books"],
    "total_revenue": [2100.00, 290.00, 110.00],
}
df = pd.DataFrame(data)

#   a highly scannable bar chart for management review
plt.figure(figsize=(6, 4))
plt.bar(
    df["product_category"],
    df["total_revenue"],
    color=["#2b5c8f", "#4682b4", "#b0c4de"],
)

plt.title("Total Revenue by Product Category", fontsize=12, fontweight="bold")
plt.xlabel("Product Category", fontsize=10)
plt.ylabel("Revenue (USD)", fontsize=10)
plt.grid(axis="y", linestyle="--", alpha=0.7)

# Save the chart as an image to attach to your email/report
plt.savefig("revenue_chart.png", dpi=300, bbox_inches="tight")
print("Visual analytic chart generated");